//calcula a área de um circulo
#include <stdio.h>

main()
{
	float pi = 3.14, raio, area;

	
		do{
			printf("Digite o valor do raio: ");
			scanf("%f", &raio);
					
			if(raio > 0){ 		//esse if é o que faz com que seja declarado 'valor invalido' dentro do DO 
	
			area = pi * (raio * raio );
			printf("Essa e a area do circulo:%.2f\n", area);
	
		}	else{
			
			printf("Valor invalido!\n");
		}
	}while(raio>0);
}
