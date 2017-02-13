/****************************************************************
 **                                                            **
 **                            math is fun 9                             **      
 **                                                            **
 **                                                            **
 **      Erik Soriano                            13-2-17        **                                                      **
***************************************************************** 
//************************** INCLUDE ****************************
//************************** VARIABLES **************************

int a = 3;
int b = 2;
int d;

//************************** SETUP ******************************
 */
int a = 3;
int b = 2;
int d;

void setup()               // run once, when the sketch starts
{
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



