#include <stdio.h>

main()
{
	int op, aux = 0;
	
	while(aux == 0){
	
	printf("\nEsse programa calcula áreas de circulos, e faz somas.\n digite: \n 1 - calcular círculos\n 2 - Fazer soma\n 3 - Encerrar o programa\n ");
	scanf("%d", &op);
	
	switch(op){
		
		case 1:{
		
			float pi = 3.14, raio, area;
			
			do{
				printf("Digite o valor do raio (0 para sair): ");
				scanf("%f", &raio);
					
				if(raio > 0){ 		//esse if é o que faz com que seja declarado 'valor invalido' dentro do DO 
	
				area = pi * (raio * raio );
				printf("Essa e a area do circulo:%.2f\n", area);
	
				}
				else{
			
				printf("Valor invalido!\n");
					}
				}while(raio>0);
		break;
		}
		
		case 2:
			
			int x,y,soma;
			printf("Digite separado por espaco os dois valores que deseja somar(digite 123 para sair):");
			scanf("%d %d", &x, &y);
			
			soma = x + y;
			printf("%d + %d = %d", x, y, soma);
		break;
		
		case 3:
			aux = 1;	
			break;
		
		default:
			break;
		}
	}
}
