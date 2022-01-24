uint8_t buf[8] = {0};
#define button1 A0
#define button2 A1
#define button3 A2

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(button1, INPUT);
  pinMode(button2, INPUT);
  pinMode(button3, INPUT);

}
void release()
{
  buf[0] = 0;
  buf[2] = 0;
  Serial.write(buf, 8);
  delay(200);
}
void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(button1) == HIGH)
  {
    buf[2] = 26; //W
    Serial.write(buf, 8);

    release();
  }
  if (digitalRead(button2) == HIGH)
  {
    buf[2] = 4; //a
    Serial.write(buf, 8);

    release();
  }
  if (digitalRead(button3) == HIGH)
  {
    buf[2] = 22; //s
    Serial.write(buf, 8);

    release();
  }


}
