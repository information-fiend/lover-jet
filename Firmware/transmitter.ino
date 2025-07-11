#include <SPI.h>
#include <nRF24L01.h>
#include <RF24.h>

const uint64_t pipeOut = 0xE8E8F0F0E1LL;

RF24 radio(9, 10);

struct Signal {
  byte ch1;
  byte ch2;
  byte ch3;
};

Signal data;

void ResetData() {
  data.ch1 = 127;
  data.ch2 = 127;
  data.ch3 = 0;
}

void setup() {
  radio.begin();
  radio.openWritingPipe(pipeOut); 
  radio.setChannel(110); 
  radio.setAutoAck(true);
  radio.setDataRate(RF24_1MBPS); 
  radio.setPALevel(RF24_PA_MAX); 
  radio.stopListening(); 
  ResetData(); 
}

int Border_Map(int val, int lower, int middle, int upper, bool reverse) {
  val = constrain(val, lower, upper); 
  if (val < middle)
    val = map(val, lower, middle, 0, 128); 
  else
    val = map(val, middle, upper, 128, 255); 
  return (reverse ? 255 - val : val); 
}

void loop() {
  data.ch1 = Border_Map(analogRead(A1), 0, 512, 1023, true); // CH1 (Reversed)
  data.ch2 = Border_Map(analogRead(A0), 0, 512, 1023, true); // CH2 (Reversed)
  data.ch3 = Border_Map(analogRead(A2), 560, 850, 1023, false); // CH3 (Single Side ESC)

  radio.write(&data, sizeof(Signal));
}