#include <stdio.h>
#include <conio.h>

main()
{
	while(1)
	{
	  float tensao_max, tensao_min, temp_max, temp_min, coef_ang, sensor_t, sensor_v, sensor_porc;
	  
	  
      printf("\n""transdutor - TENSAO X TEMPERATURA""\n");
      printf("ENTRE COM O VALOR MAXIMO DE TENSAO (V):""\n");
      scanf("%f", &tensao_max);
      printf("ENTRE COM VALOR MINIMO DE TENSAO (V):""\n");
      scanf("%f", &tensao_min);
      
      printf("ENTRE COM O VALOR MAXIMO DE TEMPERATURA (C):""\n");
      scanf("%f", &temp_max);
      printf("ENTRE COM VALOR MINIMO DE TEMPERATURA (C):""\n");
      scanf("%f", &temp_min);
      
      printf("ENTRE COM O VALOR SDO SENSOR (V):""\n");
      scanf("%f", &sensor_v);
      
      coef_ang=(tensao_max-tensao_min)/(temp_max-temp_min);
      sensor_t= sensor_v/coef_ang;
      
      sensor_porc= (sensor_t/temp_max)*100;
      
      
    printf("\n""CONVERSAO %f",sensor_t);
    
    if(sensor_porc>=75.0)
    {
    	printf("\n""ALERTA - TEMP ALTA""\n");
	}
	if(sensor_porc<75.0)
	{
		printf("\n""TEMP NORMAL""\n");
	}
    getch();      
  	}
}
