#include<stdio.h>

float rLevel,
      rSensor_Current;

int   iValve_1,
      iValve_2,
      iPump,
      iError;

void data()
{
    printf("LEVEL CONTROL \n");
    printf("Sensor Signal (mA): \n");
    scanf("%f",&rSensor_Current);
}

void check_error()
{
    if(rSensor_Current < 4.0 || rSensor_Current > 20.0)
    {
        iError = 1;
    }
    else
    {
        iError = 0;
    }
}

void sensor_convert(float x)
{
    rLevel = (x-4)/0.0018823529;       // Função de Transferência (4mA - 20mA / 8500L)
    printf("Level of Tank (L): %.2f",rLevel);
}

void logic_control()
{
    if(rLevel <= (0.25*8500))
    {
        iValve_1 = 1;
        iValve_2 = 0;
        iPump = 1;
    }
    else if(rLevel > (0.25*8500) && rLevel <= (0.50*8500))
    {
        iValve_1 = 1;
        iValve_2 = 1;
        iPump = 1;
    }
    else if(rLevel > (0.50*8500))
    {
        iValve_1 = 0;
        iValve_2 = 1;
        iPump = 0;
    }
    printf("\nValve 1: %d",iValve_1);
    printf("\nValve 2: %d",iValve_2);
    printf("\nPump:    %d \n",iPump);
}

int main()
{
   while(true)
   {
        data();
        check_error();
        if(iError == 0)
        {
            sensor_convert(rSensor_Current);
            logic_control();
        }
       else
       {
            printf("VALUE INVALID \n");
            iError = 0;
       }
       
   }
    

}
     

