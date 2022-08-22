#include<stdio.h>
#include<conio.h>

float a1, a2, a3, a4, nivel, amedia;
int b1, v1, v2;

void equation()
{
	amedia = (a1 + a2 + a3 + a4 ) / 4;
	nivel = (amedia - 4) / 0.13333;
	printf("\n Media de leituras: %.2f", amedia);
	printf("\n Nivel do tanque: %.2f", nivel);	
	
}

void leituras()
{
	printf("\n 1 leitura: ");
	scanf("%f",&a1);
	printf("\n 2 leitura: ");
	scanf("%f",&a2);
	printf("\n 3 leitura: ");
	scanf("%f",&a3);
	printf("\n 4 leitura: ");
	scanf("%f",&a4);
}

void logica()
{
	if(nivel <=(120*0.33))
	{
		b1=1;
		v1=1;
		v2=0;
	}
	else if (nivel>(120*0.33) && nivel<=(120*0.66))
	{
		b1=1;
		v1=1;
		v2=0;
	}
	else if (nivel > (120*0.66))
	{
		b1=0;
		v1=0;
		v2=1;
	}	
	printf("\n V1: %d", v1);
	printf("\n V2: %d", v2);
	printf("\n B1: %d", b1);	
}

main()
{
	leituras();
	equation();
	logica();
}

