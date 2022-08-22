#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int v1, v2, b1, l1, l2, l3;
float sensor, nivel;

void equation()
{
	nivel = sensor/0.02;
	printf("\n NIVEL DO TANQUE: %f", nivel);
	getch();
}

int main(void)
{
	printf("\n SINAL SENSOR: ");
	scanf("%f",&sensor);
	
	equation();
	
	if(nivel <= (250*0.33))
	{
		v1 = 1;
		v2 = 0;
		b1 = 1;
		l1 = 1;
		l2 = 0;
		l3 = 0;
	}
	else if (nivel > (250*0.33) && nivel <= (250*0.66))
	{
		v1 = 1;
		v2 = 0;
		b1 = 1;
		l1 = 1;
		l2 = 1;
		l3 = 0;
	}
		else if (nivel > (250*0.66))
	{
		v1 = 0;
		v2 = 1;
		b1 = 0;
		l1 = 1;
		l2 = 1;
		l3 = 1;
	}
	printf("\n V1: %d", v1);
	printf("\n V2: %d", v2);
	printf("\n B1: %d", b1);
	printf("\n L1: %d", l1);
	printf("\n L2: %d", l2);
	printf("\n L3: %d \n",l3);
	system("pause");
	return (0);
}
