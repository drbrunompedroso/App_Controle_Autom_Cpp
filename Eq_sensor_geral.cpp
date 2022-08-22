#include <stdio.h>
#include <conio.h>
float y_max, 
	  y_min, x_max, 
	  x_min, coef_ang,
	  sensor_final, 
	  sensor_signal;
	  
char signal;

void calc_cang()
{
	coef_ang = (y_max-y_min)/(x_max-x_min);
}

void calc_sensor()
{
	sensor_final= (sensor_signal - y_min)/coef_ang;
}

main()
{
	while(1)
	{
		printf("\n""transdutor - TENSAO X CORRENTE""\n");
		printf("\n""para corrente (A) - para tensao (V)""\n");
		scanf("%s", &signal);

			switch(signal)
			{
				case 'V':
					printf("\n""transdutor - TENSAO""\n");
      				printf("ENTRE COM O VALOR MAXIMO DE TENSAO:""\n");
      				scanf("%f", &y_max);
      				printf("ENTRE COM VALOR MINIMO DE TENSAO:""\n");
      				scanf("%f", &y_min);
      				printf("ENTRE COM O VALOR MAXIMO DA VARIAVEL MEDIDA:""\n");
      				scanf("%f", &x_max);
      				printf("ENTRE COM VALOR MINIMO DA VARIAVEL MEDIDA:""\n");
      				scanf("%f", &x_min);
      				printf("ENTRE COM O VALOR DO SENSOR:""\n");
      				scanf("%f", &sensor_signal);
      
      				calc_cang();
      				calc_sensor();  
                 
   	  				printf("\n""CONVERSAO: %.2f",sensor_final);
   	  				getch();
   	  			break;
   	  			
   	  			case 'A':
   	  				printf("\n""transdutor - CORRENTE""\n");
      				printf("ENTRE COM O VALOR MAXIMO DE CORRENTE:""\n");
      				scanf("%f", &y_max);
      				printf("ENTRE COM VALOR MINIMO DE CORRENTE:""\n");
      				scanf("%f", &y_min);
      				printf("ENTRE COM O VALOR MAXIMO DA VARIAVEL MEDIDA:""\n");
      				scanf("%f", &x_max);
      				printf("ENTRE COM VALOR MINIMO DA VARIAVEL MEDIDA:""\n");
      				scanf("%f", &x_min);
      				printf("ENTRE COM O VALOR DO SENSOR:""\n");
      				scanf("%f", &sensor_signal);
      
      				calc_cang();
      				calc_sensor();  
                 
   	  				printf("\n""CONVERSAO: %.2f",sensor_final);
   	  				getch();
   	  			break;
   	  			
   	  			default:
   	  				printf("\n""SINAL INVALIDO""\n");
   	  				getch();
   	  			break;
   	  		}
   	  }  	  				
			
}

