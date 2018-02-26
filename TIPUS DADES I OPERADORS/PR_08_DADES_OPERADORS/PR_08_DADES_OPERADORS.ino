/**********************************************************************************
**                                                                               **
**                               Math Is Fun                                     **
**                                                                               **
** MOURAD EL FILALI                                                  22/01/2018  **
**********************************************************************************/


//********** Includes *************************************************************

//********** Variables ************************************************************
int drive_gb = 100;
long drive_mb, drive_kb, real_drive_mb, real_drive_kb, missing_drive_kb;

//********** Setup ****************************************************************
void setup()
{
 Serial.begin(9600);           
 Serial.print("Your HD is ");           
 Serial.print(drive_gb);                    
 Serial.println(" GB large.");
                                  
                                  
 drive_mb = drive_gb;  
 drive_mb = drive_mb * 1024; 
 drive_kb = drive_mb * 1024; 

 Serial.print("In theory it can store ");  
 Serial.print(drive_mb); 
 Serial.print(" Megabytes, ");
 Serial.print(drive_kb); 
 Serial.println(" Kilobytes"); 
                             

 real_drive_mb = drive_gb; 
 real_drive_mb = real_drive_mb * 1000; 
 real_drive_kb = real_drive_mb * 1000; 


 Serial.print("But it really only stores ");  
 Serial.print(real_drive_mb);  
 Serial.print(" Megabytes, "); 
 Serial.print(real_drive_kb);  
 Serial.println(" Kilobytes."); 

 Serial.print("You are missing "); 
 Serial.print(drive_kb - real_drive_kb); 
 Serial.print(" Kilobytes."); 
 
}

//********** Loop *****************************************************************
void loop()
{
}

//********** Funcions *************************************************************
