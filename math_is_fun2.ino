
/****************************************************************
 **                                                            **
 **                            math is fun 2                             **      
 **                                                            **
 **                                                            **
 **      Erik Soriano                            6-2-17        **                                                      **
***************************************************************** 
//************************** INCLUDE ****************************
//************************** VARIABLES **************************
//************************** SETUP ******************************
 */
int a = 3;
int b = 4;
int h;

void setup()              // run once, when the sketch starts
{
  Serial.begin(9600);     // set up Serial library at 9600 bps

  Serial.println("Lets calculate a hypoteneuse ");

  Serial.print("a = ");       // escriu el que hi ha entre cometes
  Serial.println(a);          // escriu el valor de a
  Serial.print("b = ");       // escriu el que hi ha entre cometes
  Serial.println(b);          // escriu el valor de b
  Serial.print("h = ");       // escriu el que hi ha entre cometes
 

  
  Serial.println(sqrt(pow(a,2)+(pow(b,2))));          // escriu el resultat de la operacio

  
}

void loop()  // we need this to be here even though its empty
{
}
