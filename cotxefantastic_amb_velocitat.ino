/**********************************************************************************
**                                                                               **
**                              Array de 8 LEDs                                  **
**                              Gerard Sallent                                   **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
const int led0 = 5;          // donar nom al pin 5 de l’Arduino
const int led1 = 6;          // donar nom al pin 6 de l’Arduino
const int led2 = 7;          // donar nom al pin 7 de l’Arduino
const int led3 = 8;          // donar nom al pin 8 de l’Arduino
const int led4 = 9;          // donar nom al pin 9 de l’Arduino
const int led5 = 10;         // donar nom al pin 10 de l’Arduino
const int led6 = 11;         // donar nom al pin 11 de l’Arduino
const int led7 = 12;         // donar nom al pin 12 de l’Arduino
const int pot0 = A0;         // donar nom al pin A0 de l’Arduino

int velocitat = 20;          // velocitat de l'acció en ms
int valPot0;                 // guardar valor del poyenciometre


//********** Setup ****************************************************************
void setup()
{
  pinMode(led0, OUTPUT);     // definir el pin 5 com una sortida
  pinMode(led1, OUTPUT);     // definir el pin 6 com una sortida
  pinMode(led2, OUTPUT);     // definir el pin 7 com una sortida
  pinMode(led3, OUTPUT);     // definir el pin 8 com una sortida
  pinMode(led4, OUTPUT);     // definir el pin 9 com una sortida
  pinMode(led5, OUTPUT);     // definir el pin 10 com una sortida
  pinMode(led6, OUTPUT);     // definir el pin 11 com una sortida
  pinMode(led7, OUTPUT);     // definir el pin 12 com una sortida
}

//********** Loop *****************************************************************
void loop()
{

   valPot0 = analogRead(pot0);   // llegir valor del potenciòmetre
  velocitat = valPot0;     // actualitzar velocitat amb el valor del potenciòmetre
  
  digitalWrite(led0, HIGH);    // posar a 5V el pin 5
  digitalWrite(led7, HIGH);    // posar a 5V el pin 6
  
  delay(velocitat);
  
  digitalWrite(led1, HIGH );    // posar a 5V el pin 7
  digitalWrite(led6, HIGH );    // posar a 5V el pin 8
  
  delay(velocitat);
  
  digitalWrite(led0, LOW);    // posar a 5V el pin 9
  digitalWrite(led7, LOW);    // posar a 5V el pin 10
  digitalWrite(led5, HIGH);    // posar a 5V el pin 11
  digitalWrite(led2, HIGH);    // posar a 5V el pin 12
  
  delay(velocitat);                  // es queden leds 500ms encesos
  
  digitalWrite(led6, LOW);     // posar a 0V el pin 5
  digitalWrite(led1, LOW);     // posar a 0V el pin 6
  digitalWrite(led4, HIGH);     // posar a 0V el pin 7
  digitalWrite(led3, HIGH);     // posar a 0V el pin 8

  delay(velocitat);
  
  digitalWrite(led2, LOW);     // posar a 0V el pin 9
  digitalWrite(led5, LOW);     // posar a 0V el pin 10

  delay(velocitat);
  
  digitalWrite(led3, LOW);     // posar a 0V el pin 11
  digitalWrite(led4, LOW);     // posar a 0V el pin 12
  
  delay(velocitat);                  // es queden leds 500ms apagats
  
  digitalWrite(led4, HIGH);     // posar a 0V el pin 7
  digitalWrite(led3, HIGH);     // posar a 0V el pin 8

  delay(velocitat);

  digitalWrite(led2, HIGH);     // posar a 0V el pin 9
  digitalWrite(led5, HIGH);     // posar a 0V el pin 10

  delay(velocitat);

  digitalWrite(led4, LOW);     // posar a 0V el pin 7
  digitalWrite(led3, LOW);     // posar a 0V el pin 8
  digitalWrite(led1, HIGH);     // posar a 0V el pin 7
  digitalWrite(led6, HIGH);     // posar a 0V el pin 8
  
  delay(velocitat);

  digitalWrite(led2, LOW);     // posar a 0V el pin 7
  digitalWrite(led5, LOW);     // posar a 0V el pin 8
  digitalWrite(led0, HIGH);     // posar a 0V el pin 7
  digitalWrite(led7, HIGH);     // posar a 0V el pin 8
  
  delay(velocitat);

  digitalWrite(led1, LOW);     // posar a 0V el pin 7
  digitalWrite(led6, LOW);     // posar a 0V el pin 8

  delay(velocitat);

  digitalWrite(led0, LOW);     // posar a 0V el pin 7
  digitalWrite(led7, LOW);     // posar a 0V el pin 8

  delay(velocitat);

}

//********** Funcions *************************************************************

