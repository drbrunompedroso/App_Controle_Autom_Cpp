#include<stdio.h>
#include<stdlib.h>

float level_tank,
      level,
      signal_sensor;

int error = 0;

float transferFunction(float y)
{
    level = (y-4)/0.0018823529;
    return(level);
}

void data()
{
    printf("\nLEVEL CONTROL\n");
    printf("Sensor signal (mA):");
    scanf("%f",&signal_sensor);
} 

void control_logic()
{    
    if(level_tank >= 0 && level_tank <= (0.25*8500))
    {
        printf("\nV1: 1; \nV2: 0; \nB1: 1;\n");
    }
    else if(level_tank > (0.25*8500) && level_tank <= (0.50*8500))
    {
        printf("\nV1: 1; \nV2: 1; \nB1: 1;\n");
    }
    else if(level_tank > (0.50*8500) && level_tank <= 8500)
    {
        printf("\nV1: 0; \nV2: 1; \nB1: 0;\n");
    }       
}

void check_error()
{
    if(signal_sensor < 4 || signal_sensor > 20)
    {
        error = 1;
        printf("\n***ERROR***\n");       
    }
    else
    {
        error = 0;
    }
}
int main(void)
{
    while(true)
    {
        data();
        check_error();
        while(error != 1)
        {           
            level_tank = transferFunction(signal_sensor);            
            printf("Level Tank (L): %.2f", level_tank);
            control_logic();
            error=1;           
        }   
        system("pause");     
    }
    return(0);
}