/* Basic USB Joystick Example
   Teensy becomes a USB joystick

   You must select Joystick from the "Tools > USB Type" menu
*/

#define AILERON(val)  Joystick.X(val)
#define RUDDER(val)   Joystick.Zrotate(val)
#define THROTTLE(val) Joystick.Z(val)
#define ELEVATOR(val) Joystick.Y(val)

//#define SWA(val)      val > 900 ? Joystick.button(1, 1) : Joystick.button(1, 0)

void setup() {
  Joystick.useManualSend(true);
}

void loop() {
  AILERON(analogRead(0));
  ELEVATOR(analogRead(1));
  RUDDER(analogRead(2));
  THROTTLE(analogRead(3));

  Joystick.send_now();
  delay(5);
}

