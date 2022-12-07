int trigPin = 3;
int echoPin = 4;
int ledPinm1 = 8;
int ledPiny2 = 9;
int ledPins3 = 10;
int ledPink4 = 11;
int buzzerPin = 12;

long sure;
long mesafe;

void setup() 
{
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(ledPinm1, OUTPUT);
  pinMode(ledPiny2, OUTPUT);
  pinMode(ledPins3, OUTPUT);
  pinMode(ledPink4, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
}

void loop()
{
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(1000);
  digitalWrite(trigPin, LOW);

  sure = pulseIn(echoPin, HIGH);
  mesafe = (sure/2)/29.1;

  if(mesafe <= 10)
  {
    digitalWrite(ledPinm1, LOW);
    digitalWrite(ledPiny2, LOW);
    digitalWrite(ledPins3, LOW);
    digitalWrite(ledPink4, HIGH);
    digitalWrite(buzzerPin, HIGH);
  }
  else if(mesafe <= 20)
  {
    digitalWrite(ledPinm1, LOW);
    digitalWrite(ledPiny2, LOW);
    digitalWrite(ledPins3, LOW );
    digitalWrite(ledPink4, HIGH);
    digitalWrite(buzzerPin, HIGH);
    delay(100);
    digitalWrite(ledPink4, LOW);
    digitalWrite(buzzerPin, LOW);
    delay(100);
  }
  else if(mesafe <= 30)
  {
    digitalWrite(ledPinm1, LOW);
    digitalWrite(ledPiny2, LOW);
    digitalWrite(ledPins3, HIGH);
    digitalWrite(ledPink4, LOW);
    digitalWrite(buzzerPin, HIGH);
    delay(150);
    digitalWrite(ledPins3, LOW);
    digitalWrite(buzzerPin, LOW);
    delay(150);
  }
  else if(mesafe <= 40)
  {
    digitalWrite(ledPinm1, LOW);
    digitalWrite(ledPiny2, HIGH); 
    digitalWrite(ledPins3, LOW);
    digitalWrite(ledPink4, LOW);
    digitalWrite(buzzerPin, HIGH);
    delay(200);
    digitalWrite(ledPiny2, LOW);
    digitalWrite(buzzerPin, LOW);
    delay(200);
  }
  else  
  {
    digitalWrite(ledPinm1, HIGH);
    digitalWrite(ledPiny2, LOW);
    digitalWrite(ledPins3, LOW);
    digitalWrite(ledPink4, LOW);
    digitalWrite(buzzerPin, LOW);
  }

}
