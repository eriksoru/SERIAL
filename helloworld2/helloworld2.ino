/****************************************************************
 **                                                            **
 **                       hello world 3                                    **      
 **                                                            **
 **                                                            **
 **      Erik Soriano                           30-1-17        **                                                      **
***************************************************************** 
//************************** INCLUDE ****************************
//************************** VARIABLES **************************
//************************** SETUP ******************************
 */
void setup()                // arrena un sol cop
{
  Serial.begin(9600);       // fa que la biblioteca treballi a 9600 byte
}

void loop()                 // arrenca un cop i un altre
{
  Serial.println("Hello world!");  // escriu hello wold en una linea nova 
  delay(1000);                     // espera 1 segon
}


//*************************** FUNCIONS **************************

