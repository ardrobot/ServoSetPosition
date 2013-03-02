/**
 * @name Servo Set Position
 * @brief Sets the calibration position of a standard 180 degree servo
 * @copyright (C) 2013 Ardrobot (http://ardrobot.com)
 * 
 * Licensed under the Apache License, Version 2.0 (the License);
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 * http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an AS IS BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
**/

/**
 * @file ServoSetPosition.ino
 * @brief Arduino sketch to set initial servo calibration
 * @author Todd Sampson (http://toddsampson.com)
 * @version 1.0
 * @date 2013-03-01
**/

#include "Arduino.h"
#include <Servo.h>

/**
 * @note To use this library (based on Arduino IDE 1.03):
 * 
 * 1. Open this sketch in the Arduino IDE 
 *    (http://arduino.cc/en/Main/Software)  
 * 2. Set the desired degrees using POSITION below.
 * 3. Set the servo pin you attached the signal to in
 *    step two using SERVOPIN below.
 * 4. Select your Arduino Board & Serial Port from the 
 *    Tools menu.
 * 5. Click the Verify (checkbox) button to ensure you
 *    are not receiving any errors.  If everything looks
 *    good, click the Upload (right arrow) to load the code
 *    on to your Arduino board.
 * 6. Next, wire your servo the Arduino using jumper wires.
 *    Servo writes are usually: Red = 5V, Black = ground, 
 *    White = Signal)
 * 7. After the servo is attached, PRESS THE ARDUINO RESET
 *    BUTTON.  The servo should sweep to the minimum 
 *    position (0), then the maximum position (180), and 
 *    finally move to your desired position you set in step
 *    two.  You need to remove the servo or power down the
 *    Arduino within 60 seconds or the calibration loop will
 *    run again.
 * 
 * PROTIP: If you are setting a large number of servos, I 
 * recommend connecting a servo extension wire to the 
 * Arduino so you can quickly connect and disconnect servos 
 * without rewiring three separate jumper wires.
**/

/**
 * @def POSITION
 * @brief Position of the servo
 * #description Use the following position settings:
 * 
 * 0  =   0 Degrees (Minimum)
 * 1  =  15 Degrees
 * 2  =  30 Degrees
 * 3  =  45 Degrees
 * 4  =  60 Degrees
 * 5  =  75 Degrees
 * 6  =  90 Degrees (Center)
 * 7  = 105 Degrees
 * 8  = 120 Degrees
 * 9  = 135 Degrees
 * 10 = 150 Degrees
 * 11 = 165 Degrees
 * 12 = 180 Degrees (Maximum)
**/

#define POSITION 6

/**
 * @def SERVOPIN
 * @brief Set Arduino pin where you will connect the servo signal (usually White) wire
**/
#define SERVOPIN 8

/**
 * @class Servo
 * @brief Creates the servo object functor based on Arduino's standard Servo class
**/
Servo servo;

/**
 * @fn Arduino standard setup function
 * @brief Attaches the servo object to the Arduino servo pin we set with SERVOPIN 
**/
void setup() {
	servo.attach(SERVOPIN);
}

/**
 * @fn Arduino's standard main loop function
 * @brief Sweep servo from minimum (0) to maximum (180) range then set to desired POSITION
**/
void loop() {
  	servo.write(POSITION * 0);
        delay(2000);
        servo.write(180);
	delay(2000);
        servo.write(POSITION * 15);
        delay(60000);
}

