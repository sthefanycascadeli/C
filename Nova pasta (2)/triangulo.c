#include<stdio.h>
#include<locale.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	int valora, valorb, valorc;
	printf("Entre com o valor de a: ");
	scanf("%d", &valora);
	printf("Entre com o valor de b: ");
	scanf("%d", &valorb);
	printf("Entre com o valor de c: ");
	scanf("%d", &valorc);
	
	if ((valora < 90) && (valorb < 90) && (valorc < 90)) {
	
	printf("triângulo Acutângulo \n");
		
	} else {
		if ((valora == 90) || (valorb == 90) || (valorc == 90)) {	
			printf("triângulo Retângulo \n");		
		} else {
			if ((valora > 90) || (valorb > 90) || (valorc > 90)) {	
				printf("triângulo Obtusângulo \n");		
			}	
		}		
	}
	
	
	
		system("pause");
}
