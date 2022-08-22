#include <stdio.h>
#include <conio.h>
float tensao_max, tensao_min, nivel_max, nivel_min, coef_ang, nivel, sensor_v, sensor_porc;

void calc_cang()
{
	coef_ang=(tensao_max-tensao_min)/(nivel_max-nivel_min);
}

void calc_sensor()
{
	 nivel= sensor_v/coef_ang;
}

void conv_porc()
{
	sensor_porc= (nivel/nivel_max)*100;
}

main()
{
	while(1)
	{
	  	  
      printf("\n""transdutor - TENSAO X NIVEL""\n");
      printf("ENTRE COM O VALOR MAXIMO DE TENSAO (V):""\n");
      scanf("%f", &tensao_max);
      printf("ENTRE COM VALOR MINIMO DE TENSAO (V):""\n");
      scanf("%f", &tensao_min);
      printf("ENTRE COM O VALOR MAXIMO DO NIVEL (L):""\n");
      scanf("%f", &nivel_max);
      printf("ENTRE COM VALOR MINIMO DO NIVEL (L):""\n");
      scanf("%f", &nivel_min);
      printf("ENTRE COM O VALOR SDO SENSOR (V):""\n");
      scanf("%f", &sensor_v);
      
      calc_cang();
      calc_sensor();  
                 
   	  printf("\n""CONVERSAO %f",nivel);
   	  
    /****************************ANÁLISE CONDICIONAL****************************************/
      conv_porc();
    
      if(sensor_porc>=75.0)
      {
    	printf("\n""ALERTA - NIVEL ALTO""\n");
      }
  	  if(sensor_porc<75.0)
	  {
		printf("\n""NIVEL NORMAL""\n");
	  }
      getch();      
  	}
}
