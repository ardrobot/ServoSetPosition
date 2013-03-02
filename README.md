Servo Set Position
==================
Sets the calibration position of a standard 180 degree servo


Usage
-----

To use this library (based on Arduino IDE 1.03):

1. Open this sketch in the Arduino IDE (http://arduino.cc/en/Main/Software)  
2. Set the desired degrees using POSITION
3. Set the servo pin you want to attach the signal wire to in step six below using SERVOPIN.
4. Select your Arduino Board & Serial Port from the Tools menu.
5. Click the Verify (checkbox) button to ensure you are not receiving any errors.  If everything looks good, click the Upload (right arrow) to load the code on to your Arduino board.
6. Next, wire your servo the Arduino using jumper wires.  Servo writes are usually: Red = 5V, Black = ground, White = Signal)
7. After the servo is attached, PRESS THE ARDUINO RESET BUTTON.  The servo should sweep to the minimum position (0), then the maximum position (180), and finally move to your desired position you set in step two.  You need to remove the servo or power down the Arduino within 60 seconds or the calibration loop will run again.

PROTIP: If you are setting a large number of servos, I recommend connecting a servo extension wire to the Arduino so you can quickly connect and disconnect servos without rewiring three separate jumper wires.
 

License & Copyright
-------------------

Copyright (C) 2013 Ardrobot (http://ardrobot.com)

Licensed under the Apache License, Version 2.0
 