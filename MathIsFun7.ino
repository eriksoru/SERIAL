/****************************************************************
 **                                                            **
 **                            math is fun 7                             **      
 **                                                            **
 **                                                            **
 **      Erik Soriano                            13-2-17        **                                                      **
***************************************************************** 
//************************** INCLUDE ****************************
//************************** VARIABLES **************************
//************************** SETUP ******************************
 */
int test = 32767;

void setup()              // run once, when the sketch starts
{
  Serial.begin(9600);     //set up Serial library at 9600 bps
  Serial.print("Test value is: ");
  Serial.println(test);

  test = test + 1; // 37267 + 1 makes it go to the negative part
 
  Serial.print("Now it is ");
  Serial.println(test);
}
//*********************************** Loop ****************************************
void loop()
{
}

//********************************* Funcions **************************************

