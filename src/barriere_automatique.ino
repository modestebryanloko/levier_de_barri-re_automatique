#include <Servo.h>

Servo barriere;

const int SERVO_PIN = 9;
const int TRIG_PIN = 7;
const int ECHO_PIN = 6;
const int LED_VERTE = 4;
const int LED_ROUGE = 5;

const int DISTANCE_DETECTION = 30;
const int ANGLE_FERMEE = 0;
const int ANGLE_OUVERTE = 90;

long mesurerDistance() {
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);

  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);

  long duree = pulseIn(ECHO_PIN, HIGH, 30000);

  if (duree == 0) {
    return 999;
  }

  return duree * 0.0343 / 2;
}

void ouvrirBarriere() {
  barriere.write(ANGLE_OUVERTE);
  digitalWrite(LED_VERTE, HIGH);
  digitalWrite(LED_ROUGE, LOW);
}

void fermerBarriere() {
  barriere.write(ANGLE_FERMEE);
  digitalWrite(LED_VERTE, LOW);
  digitalWrite(LED_ROUGE, HIGH);
}

void setup() {
  Serial.begin(9600);

  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);
  pinMode(LED_VERTE, OUTPUT);
  pinMode(LED_ROUGE, OUTPUT);

  barriere.attach(SERVO_PIN);

  fermerBarriere();
}

void loop() {
  long distance = mesurerDistance();

  Serial.print("Distance : ");
  Serial.print(distance);
  Serial.println(" cm");

  if (distance <= DISTANCE_DETECTION) {
    ouvrirBarriere();

    // Maintient la barrière ouverte pendant 5 secondes.
    delay(5000);

    fermerBarriere();

    // Petite pause pour éviter les déclenchements répétés.
    delay(2000);
  }

  delay(100);
}
