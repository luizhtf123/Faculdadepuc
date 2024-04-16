//calcula a área de um circulo
#include <stdio.h>

main()
{
	float pi = 3.14, raio, area;
	
	printf("Esse codigo calcula a area de um circulo de qualquer raio\n");
	
	printf("Informe o raio da circunferencia: \n");
	scanf("%f", &raio);
	
	area = pi*(raio*raio);
	
	printf("Essa e a area do circulo:\n%.2f", area);
}