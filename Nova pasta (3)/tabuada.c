#include<stdio.h>
#include<locale.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	int numero, contador, tabuada;
	printf("Entre com o número: ");
	scanf("%d", &numero);
	contador = 0;
	
	while (contador < 11){
		tabuada = numero * contador;		
		printf("%d * %d = %d \n ", numero, contador, tabuada);		
		contador = contador + 1;		
	}	

system("pause");	
}
