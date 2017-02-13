/****************************************************************
 **                                                            **
 **                            math is fun 10                            **      
 **                                                            **
 **                                                            **
 **      Erik Soriano                            13-2-17        **                                                      **
***************************************************************** 
//************************** INCLUDE ****************************
//************************** VARIABLES **************************


//************************** SETUP ******************************
 */

void setup()               // run once, when the sketch starts
{
  
  float a = 3;
  float b = 2;
  float d;
  
  Serial.begin(9600);      // set up Serial library at 9600 bps

  Serial.println("Here is division: ");

  Serial.print("a = ");
  Serial.println(a);
  Serial.print("b = ");
  Serial.println(b);

  d = a / b;
 
  Serial.print("a / b = ");
  Serial.println(d);

}


//*********************************** Loop ****************************************
void loop()
{
}

//********************************* Funcions **************************************
