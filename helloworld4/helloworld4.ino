/****************************************************************
 **                                                            **
 **                       hello world 4                        **      
 **                                                            **
 **                                                            **
 **      Erik Soriano                           30-1-17        **                                                      
***************************************************************** 
//************************** INCLUDE ****************************
//************************** VARIABLES **************************
//************************** SETUP ******************************
 */
void setup()                // el carrega un so cop
{
  Serial.begin(9600);       // fa que la biblioteca treballi a 9600 byte bps
  Serial.println("Escull el numero de l'operacio que vols realitzar ?"); // escriu Escull el numero de l'operació que vols realitzar ?  en una linea
  Serial.println(" 1. Comprovar numero de tarjeta de credit "); // escriu 1. Comprovar numero de tarjeta de credit en una linea nova
  Serial.println(" 2. Comprovar numero de compte bancari ");   //  escriu 2. Comprovar numero de compte bancari en una linea nova
  Serial.println(" 3. Buscar un digit perdut de tarjeta de credit "); // escriu 3. Buscar un digit perdut de tarjeta de credit en una linea nova
}
void loop()   // el carrega un cop i un altre
{
       // no fa res

}

//*************************** FUNCIONS **************************

