/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
  typedef unsigned char u8;
  const u8 MAX_SPEED = 255;


 typedef unsigned u16;
  void PrintSensorValue(const u16 * ptr){
      
        //*ptr = 0;
        
        printf("\nReading Sensor... Temperature is : %d",*ptr);
  }
   
int main()
{
   /*typedef unsigned char u8;
  const u8 MAX_SPEED = 255; this was here at first */ 
  // Phase2 step number 2: Attempt to change MAX_SPEED to 200
 // MAX_SPEED = 200;
 
   printf("Max Speed Configuration : %d", MAX_SPEED);
   u16 Temperature = 75; 
    //typedef u16 Temperature = 75; 
   PrintSensorValue(&Temperature);
   
   typedef unsigned u8;
   u8 PORTA_DATA = 0;
   u8 *const hardware_ptr = &PORTA_DATA;
   //*hardware_ptr = 100;
   //Hardware Port Data is now : -163059816
   *hardware_ptr = 255;
   printf("\nHardware Port Data is now : %d",*hardware_ptr);
   //*hardware_ptr = &MAX_SPEED;
   //error: assignment to ‘u8’ {aka ‘unsigned int’} from ‘const u8 *’ {aka ‘const unsigned char *’} makes integer from pointer without a cast [-Wint-conversion
   
   
   typedef unsigned u32;
   const u32 DEVICE_ID =  987654321;
    const u32 * const id_ptr = &DEVICE_ID ;
    printf("\nDevice ID verified : %d",*id_ptr);
   
    return 0;
}
