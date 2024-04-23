//calcula a área de um circulo
#include <stdio.h>

main()
{
	float pi = 3.14, raio, area;

	
		for( int i = 0; i < 3; i++){
			
			printf("Digite o valor do raio: ");
			scanf("%f", &raio);
					
			if(raio > 0){
	
			area = pi * (raio * raio );
			printf("Essa e a area do circulo:%.2f\n", area);
	
		}	else{
			
			printf("Valor invalido!\n");	
		}
	}
}
