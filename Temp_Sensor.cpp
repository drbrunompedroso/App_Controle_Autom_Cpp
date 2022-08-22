#include<stdio.h>
#include<conio.h>

char value;
float ymax, ymin, xmax, xmin, sensor_value, temp_c, temp_k;

void equation()
{
	temp_c = (sensor_value - ymin) / ((ymax - ymin ) / (xmax - xmin));
	temp_k = temp_c + 273.15;
	printf ("TEMP (C): %f \n", temp_c);
	printf ("TEMP (K): %f \n", temp_k);
}

main()
{
	printf("\n LEITURA SENSOR TEMPERATURA \n");
	printf("1 - (V) \n");
	printf("2 - (mA) \n");
	scanf("%s",&value);
	
	if (value == '1')
	{
		printf("ENTRE COM YMAX (V): \n");
		scanf("%f", &ymax);
		printf("ENTRE COM YMIN (V): \n");
		scanf("%f", &ymin);
		printf("ENTRE COM XMAX (C): \n");
		scanf("%f", &xmax);
		printf("ENTRE COM XMIN (C): \n");
		scanf("%f", &xmin);
		
		printf("SINAL SENSOR (V): \n");
		scanf("%f", &sensor_value);
		
		equation();
		getch();
		
	}
	else if (value == '2')
	{
		printf("ENTRE COM YMAX (mA): \n");
		scanf("%f", &ymax);
		printf("ENTRE COM YMIN (mA): \n");
		scanf("%f", &ymin);
		printf("ENTRE COM XMAX (C): \n");
		scanf("%f", &xmax);
		printf("ENTRE COM XMIN (C): \n");
		scanf("%f", &xmin);
		
		printf("SINAL SENSOR (mA): \n");
		scanf("%f", &sensor_value);
		
		equation();
		getch();
		
	}
}
