MicroViewClock
==============

Simple digital clock based on MicroView and DS1302 or DS3231

- Details about setup and installation for both versions are on [Project page on samepage.io](https://samepage.io/app/#!/8740458cffb7c86971911d5f12e1e2291de7f7b7/page-132750646494497742-microview-clock) 

### Content
- /sketch: code for MicroView. 
  - [/sketch/microviewclock.ino](/sketch/microviewclock.ino) - First version, using code from Krodal/gweezer
  - [/sketch/microviewclock_withDS1302lib.ino](/sketch/microviewclock_withDS1302lib.ino) - Much simpler version, using DS 1302 library
  - [/sketch/microviewclock_withDS3231.ino](/sketch/microviewclock_withDS3231.ino) - Version with DS 3231 library. You will need to add [DS3231 library from Henning Karlsen](http://henningkarlsen.com/electronics/library.php?id=74) to your project


- /doc: documentation, including schema in Fritzing. 
- Version with DS1302
 
![Photo](/doc/breadboard.png) 
![Breadboard](/doc/schema_bb.png) 
![Schema](/doc/schema_schem.png) 

- Version with DS3231
 
![DS 3231](/doc/breadboard_ds3231.png) 
![DS 3231 rpi](/doc/breadboard_ds3231rpi.png) 
![DS 3231 Breadboard](/doc/MicroViewClock_DS3231_schema_bb.png) 

 
