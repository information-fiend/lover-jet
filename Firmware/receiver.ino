#include <SPI.h>
#include <nRF24L01.h>
#include <RF24.h>
#include <Servo.h>

// NRF24L01 communication address
const uint64_t pipeIn = 0xE8E8F0F0E1LL;

int ch_width_1 = 0;
int ch_width_2 = 0;
int ch_width_3 = 0;

Servo ch1;
Servo ch2;
Servo ch3;


struct Signal {
  byte ch1;
  byte ch2;
  byte ch3;
};

Signal data;

RF24 radio(9, 10);

void ResetData() {
  data.ch1 = 127;
  data.ch2 = 127;
  data.ch3 = 0;  
}

void setup() {
  // Attach each channel to a specific arduino pin
  ch1.attach(3);
  ch2.attach(4);
  ch3.attach(5);


  ResetData();

  radio.begin();
  radio.openReadingPipe(1, pipeIn);
  radio.setChannel(110);            // Set communication channel
  radio.setAutoAck(true);          // Disable auto acknowledgment
  radio.setDataRate(RF24_1MBPS);  // Set lowest data rate for stability
  radio.setPALevel(RF24_PA_MAX);    // Set maximum transmission power
  radio.startListening();           // Start listening for incoming data

  pinMode(2, OUTPUT);
}

unsigned long lastRecvTime = 0;

void recvData() {
  while (radio.available()) {
    radio.read(&data, sizeof(Signal)); 
    lastRecvTime = millis();          
  }
}

void loop() {
  recvData();  

  unsigned long now = millis();
  if (now - lastRecvTime > 1000) {
    ResetData();  
  }

  // Map received values to PWM pulse width range
  ch_width_1 = map(data.ch1, 0, 255, 700, 2400);
  ch_width_2 = map(data.ch2, 0, 255, 700, 2400);
  ch_width_3 = map(data.ch3, 0, 255, 1000, 2000);

  // Send PWM signals to servo motors
  ch1.writeMicroseconds(ch_width_1);
  ch2.writeMicroseconds(ch_width_2);
  ch3.writeMicroseconds(ch_width_3);
}