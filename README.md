# 33130-Capteur sonore GROVE

Capteur sonore GROVE [33130](https://www.pierron.fr/interface-arduino-uno-5966.html)

<div style="text-align: justify">Module détecteur de bruit compatible Grove basé sur un micro électret amplifié. Il peut être utilisé comme détecteur de niveau sonore ou comme micro. Sa sortie est proportionnelle au niveau sonore. Ce module se raccorde sur une entrée analogique du Base Shield via un câble 4 conducteur.</div>
<br>

Caractéristiques techniques :
- Alimentation : 3,3 à 5 V
- Consommation : 4 à 5 mA
- Fréquence : 16 Hz à 20 kHz
- Sensibilité : -48 à 52 dB
- Impédance : 2,2 kΩ

![L-33130](/img/L-33130.jpg)

# Usage :
Pour l’utilisation de ce module, référez-vous aux indications présentes sur le circuit imprimé GROVE.

# Schémas :

![SCH-33130](/img/SCH-33130.jpg)
![BRD-33130](/img/BRD-33130.jpg)

# RESSOURCES À TÉLÉCHARGER :

Ressource utilisation : [LM358](https://github.com/pierron-asco-celda/33168-Capteur_lumiere_solaire_GROVE/blob/main/src/Datasheet_SI1145-46-47.pdf)

# Exemple :
### Arduino / C++
```cpp
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
```
## À propos :
<br>
PIERRON ASCO-CELDA (https://www.pierron.fr).