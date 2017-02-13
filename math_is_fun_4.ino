/****************************************************************
 **                                                            **
 **                            math is fun 4                              **
 **                                                            **
 **                                                            **
 **      Erik Soriano                           6-2-17        **                                                      **
*****************************************************************
  //************************** INCLUDE ****************************
  //************************** VARIABLES **************************
  //************************** SETUP ******************************
*/

long drive_gb = 100;
long drive_mb;
void setup()             // escriu un sol cop
{
  Serial.begin(9600);     // set up Serial library at 9600 bps
  Serial.print("Your HD is "); //escriu el que esta entre cometes
  Serial.print(drive_gb);      // escriu el valor de drive_gb
  Serial.println(" GB large."); // escriu el que esta entre cometes
 
  drive_mb = drive_gb;
  drive_mb = 1024 * drive_gb;   // fa la multimplicacio
  
  Serial.print("It can store "); // escriu el que esta entre cometes
  Serial.print(drive_mb);        // escriu el valor de drive mb
  Serial.println(" Megabytes!"); // escriu el que esta entre cometes
}

void loop()     // el necessitem encara que estigui buit
{
}

