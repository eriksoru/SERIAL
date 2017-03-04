/****************************************************************
 **                                                            **
 **                                                            **      
 **                       Control Structures 6                                  **
 **                                                            **
 **      Erik Soriano                           4-3-17        **                                                      **
***************************************************************** 
//************************** INCLUDE ****************************
//************************** VARIABLES **************************
//************************** SETUP ******************************
 */

 int comptar = 56;
void setup()                    // run once, when the sketch starts
{
  Serial.begin(9600);       // set up Serial library at 9600 bps
  Serial.print("Ara comptare de 0 a ");
  Serial.println(comptar);
  for (int i=0; i <= comptar; i++)
  {
    Serial.print(i);
    Serial.print("-");
  } 
}
void loop()     // we need this to be here even though its empty
{
}
