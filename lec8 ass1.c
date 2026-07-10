/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
typedef enum{
        OFF= 0 ,
        ON = 1
        
    }DeviceState;
        
    
    
    typedef union{
         float temperature;
         int error_code;
        
    }SensorData;  
    
    
    typedef struct{
        int id;
        DeviceState state;
        SensorData data;

    }Device;
     
     typedef struct{
        unsigned char power : 1;
        unsigned char wifi : 1;
        unsigned char error : 1;
        unsigned char reserved : 5;

        }HardwareRegister;
     
int main()
{
    
    Device MySensor;
    MySensor.id = 404;
    MySensor.state = ON;
    MySensor.data.temperature = 26.5;
     printf("---Device Info---");
     printf("\nDevice Id : %d", MySensor.id);
     printf("\nDevice State : %d", MySensor.state);
     printf("\nTemperature : %d", MySensor.data.temperature);
     
     
     HardwareRegister reg;
     reg.power = 1;
     reg.wifi = 1;
     reg.error = 0;
     printf("\n\n--- Hardware Register ---");
     printf("\nPower : %d , WiFi : %d , Error : %d",reg.power,reg.wifi,reg.error);
     printf("\nRegister Size : %d",sizeof(reg));
     
    return 0;
}