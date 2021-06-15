/*
    ** Mesure intensité sonore module Grove **
       PIN A0 Module shield GROVE
       Traceur série (Outils,...) -> Baud rate 115200.
*/

const int iRec = A0;
long lTra = 0;
int iBcl = 0;

void setup() {
  Serial.begin(115200);
}

void loop() {
  for (iBcl = 0; iBcl < 32; iBcl++)
  {
    lTra += analogRead(iRec);
  }

  lTra >>= 5;

  Serial.println(lTra);
  delay(10);
}
