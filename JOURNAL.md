---
title: "lover-jet"
author: "info-fiend"
description: "F-22 Raptor with transmitter"
created_at: "2025-06-27"
---
### :revolving_hearts: Total Time Spent: 34hrs
June 27, 2025
---
*LOG #001:*
SPEED RUNNNNNN! rabbitboard took way too long (exactly a month). wanna get this done by the end of June cause July is busyyy. so first i started with a document and wrote everything about the project. at first it was just going to be the RC plane, but transmitters are $$$ so im gunna make that too. then i watched a bunch of vids on i. indidentally, it seems the transmitter is going to be more work than the plane 0_o. i was just going to stick a nano and antenna on a perfboard but we care about aesthetics around here. i started with making the wiring diagrams for both the transmitter and plane. started on wowki bcos i was too lazy to make a tinkercad account. am going to switch there probably. so a problem im running into is that i dont know a lick of C++, so making the firmware for the tranmitter makes me cry. <br/><br/>PLANE MATERIALS: 
* cardboard
* motor 2205 2300kv
* propeller 5045
* esc 20A FMS (eletric speed controller thing)
* 2x servos 9g
* LiPo battery
* mc6re reviever 
<br/><br/>TRANSMITTER MATS: 
* battery
* 2x joy sticks
* arduino nano
* antenna
* on/off switch
* rot encoder
* cad
* pcb

<img width="500" alt="File 1" src="https://github.com/user-attachments/assets/ec993415-f16c-4e81-a566-59ab05973124" />
<img width="500" alt="File 2" src="https://github.com/user-attachments/assets/32a551fb-bb72-4930-8bbb-c2b5f3ddcc3d" />
<img width="500" alt="File 3" src="https://github.com/user-attachments/assets/786f893a-433e-4b1a-9504-390f33daf9d6" />
<img width="500" alt="File 4" src="https://github.com/user-attachments/assets/60ac7911-e443-41f6-8130-5b6599331819" />



TIME SPENT: 8 HOURS

June 28, 2025
---
*LOG #002:*
start time: 4:30am. had a psychosic vision on this and got to work
okay i'm back and it's the next morning bc i fell asleep. never slept so deeply before lol. i finished around 10pm, i cut a couple hours from the time for humans needs. 
i started wrapping up the wiring diagram for the plane, then i moved to pcb making, my second worst nightmare (first is fusion360). i was still new to pcb making so it took a long time for me to realize i don't need the exact footprint, just a connector a name the pins. god bless grabcad for the 3d models. i learned the wonders of a grandpour so wiring didn't take much time. had to update my parts: 
* 7.4v 450mah li-po battery
* XY axis joystick
* Arduino nano v3.0
* NRF24L01 + PA
* Single Pole Single Throw (SPST) Switch
* EC11 rotary encoder

it's time for 3d design D:

<img width="500" src="https://github.com/user-attachments/assets/1237dddd-dd8f-44bc-b3a6-819ca65bde67" />
<img width="500" src="https://github.com/user-attachments/assets/62f70cd3-cf61-452d-817d-04cb26996e47" />
<img width="500" src="https://github.com/user-attachments/assets/13da106f-c72a-429a-a555-096fd42d53ff"/>
<img width="500" src="https://github.com/user-attachments/assets/41c533f0-30c2-46e6-9ecc-81a63b46423f"/>
<img width="500" alt="Screenshot 2025-06-28 at 10 11 05 PM" src="https://github.com/user-attachments/assets/51fd4e5f-8b61-4ad4-b3da-af057c363622" />

TIME SPENT: 12 HOURS

June 29, 2025
---
*LOG #003:*
thought the cad would take longer but fusion360 decided to grace me today. the pcb was haphazardly done which was a nightmare to get things symmetrical with the case. looks good til you look at the back lol. the case is around 155x86x32.5 mm. some troubles i ran into was making it look aesthetic, as well as the screws. i was originally going to make snap joints but didnt know what the material filment was gunna be. so im using M2 screws. and if it doesnt work then hot glue!! :p
i had no idea how to make it more detailed or cuter, so i thought i'd just slap a sticker on it or paint it. i really wanna get caps for the joysticks!
by this point i also made a page in the magazine, but didnt include that time in here. 
i also want to do something to elevate this whole project but idkk. 

<img width="500" src="https://github.com/user-attachments/assets/40cf66a8-13f2-4541-a86a-ff7d25c8d3fc" />
<img width="500" src="![Screenshot 2025-06-29 at 1 25 49 PM](https://github.com/user-attachments/assets/a4512fbc-86c2-4f43-95f2-2b4248fd3698)"/>
<img width="500" src="https://github.com/user-attachments/assets/819bbf01-1b4e-43f3-b1dc-c0ded01636a7"/>
<img width="500" alt="Screenshot 2025-06-29 at 1 25 40 PM" src="https://github.com/user-attachments/assets/d01aa110-2355-4f41-96f1-5bd34c97f2cf" />

TIME SPENT: 6 HOURS

July 11, 2025
---
*LOG #004:*
wow where have i been? last time i finished up the case. while making up the BOM to submit, i realized i got the parts wrong on the plane + had to redesign the pcb. uhh i was first off using the wrong receiever. the battery on the transmitter had no regulator, the nrf module needs a 3.3v but it was just giving it 7.4v directly. whoops. added the same nrf receiver module so like... it matches? honestly im glad that i had to redo the design because it taught me that iterating is just a part of engineering. no avoiding it lol. uhh i made the firmware. added the libraries. prob have to make a new communication address. its kinda hard making up the firmware when you dont have the hardware </3

<img width="500" alt="Screenshot 2025-07-11 at 11 05 53 AM" src="https://github.com/user-attachments/assets/c813f149-a319-460e-8fec-b77be38060a5" />
<img width="500" alt="Screenshot 2025-07-11 at 10 35 35 AM" src="https://github.com/user-attachments/assets/dc1ea689-2d73-40ea-ab89-d560f8abb576" />
<img width="500" alt="Screenshot 2025-07-10 at 10 28 30 PM" src="https://github.com/user-attachments/assets/69f1f7d6-29a9-44fa-bb91-b15dc47839c7" />
<img width="500" alt="image" src="https://github.com/user-attachments/assets/a0d4490b-6cf9-4682-8472-5896fd2e6424" />


TIME SPENT: 8 HOURS
