# Bare Conductive Touch Board as Keyboard

Simple keyboard code for the [Bare Conductive Touch Board](http://www.bareconductive.com/shop/touch-board/). Touch electrode 0, simulates a keyboard press of the UP key, 1 simulates the DOWN key, etc...

![Demo](../../blob/master/touchboard_keyboard.gif?raw=true)

These are the mappings which are in the sketch:

Electrode 0: Up Arrow
Electrode 1: Down Arrow
Electrode 2: Left Arrow
Electrode 3: Right Arrow
Electrode 4: Space
Electrode 5: w
Electrode 6: a
Electrode 7: s
Electrode 8: d
Electrode 9: f
Electrode 10: g
Electrode 11: q

These are the values for a QWERTY keyboard layout. You might receive different characters depending on your keyboard layout.

## Requirements
* [Arduino](http://arduino.cc/en/Main/Software) 1.5.6 or later

* Arduino's instructions for installing libraries are available [here](http://arduino.cc/en/Guide/Libraries)

* [SFEMP3shield library](https://github.com/madsci1016/Sparkfun-MP3-Player-Shield-Arduino-Library) (zip file download [here](https://github.com/madsci1016/Sparkfun-MP3-Player-Shield-Arduino-Library/archive/master.zip))	
* [Bare Conductive MPR121 library](https://github.com/bareconductive/mpr121) (zip file download [here](https://github.com/bareconductive/mpr121/archive/public.zip))

* [Bare Conductive Arduino Hardware Plugins](https://github.com/bareconductive/bare-conductive-arduino) (zip file download [here](https://github.com/bareconductive/bare-conductive-arduino/archive/public.zip)) - instructions on installing this hardware plugin folder are available [here](https://github.com/bareconductive/bare-conductive-arduino).


## Install

1. Close the Arduino IDE if you have it open.
2. Download the [.zip](https://github.com/wouterverweirder/touchboard-keyboard/archive/master.zip) or clone the repository to your local machine - if downloading the .zip, extract the contents somewhere that suits you.
3. Take the **Touchboard_Keyboard** folder and move it to **Arduino Sketchbook Folder**. This will be different for each operating system: 

	**Windows**
	
	Libraries\\Documents\\Arduino
	
	or
	
	My Documents\\Arduino	
	
	**Mac**
	
	Documents/Arduino
	
	**Linux (Ubuntu)**
	
	Home/Arduino


	If this folder does not exist, create it first.
4. Reopen the Arduino IDE - you should now be able to open the sketch in the **File -> Sketchbook** menu.

## Tweak

You can change the emulated keys, by adjusting the keys array in the sketch.

[Read more about Keyboard and Mouse emulation on the Arduino site](http://arduino.cc/en/Reference/MouseKeyboard).