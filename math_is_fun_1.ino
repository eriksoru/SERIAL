/****************************************************************
 **                                                            **
 **                            math is fun                              **      
 **                                                            **
 **                                                            **
 **      Erik Soriano                            6-2-17        **                                                      **
***************************************************************** 
//************************** INCLUDE ****************************
//************************** VARIABLES **************************
//************************** SETUP ******************************
 */
int a = 5;
int b = 10;
int c = 20;

void setup()              // run once, when the sketch starts
{
  Serial.begin(9600);     // set up Serial library at 9600 bps

  Serial.println("Here is some math: ");

  Serial.print("a = ");       // escriu el que hi ha entre cometes
  Serial.println(a);          // escriu el valor de a
  Serial.print("b = ");       // escriu el que hi ha entre cometes
  Serial.println(b);          // escriu el valor de b
  Serial.print("c = ");       // escriu el que hi ha entre cometes
  Serial.println(c);          // escriu el valor de c

  Serial.print("a + b = ");       // escriu el que hi ha entre cometes
  Serial.println(a + b);          // escriu el resultat de la suma

  Serial.print("a * c = ");       // escriu el que hi ha entre cometes
  Serial.println(a * c);          // escriu el resultat de la multiplicacio
  
  Serial.print("c / b = ");       // escriu el que hi ha entre cometes
  Serial.println(c / b);          // escriu el valor de la divisio

  Serial.print("c % b = ");       // escriu el que hi ha entre cometes
  Serial.println(c % b);          // escriu el residu de la divisio
  
  Serial.print("b - c = ");       // escriu el que hi ha entre cometes
  Serial.println(b - c);          // escriu el resultat de la resta
}

void loop()  // we need this to be here even though its empty
{
}

//*************************** FUNCIONS **************************

