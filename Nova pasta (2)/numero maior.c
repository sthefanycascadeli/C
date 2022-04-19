#include<stdio.h>
#include<locale.h>

 main(){
 	
 		setlocale(LC_ALL,"Portuguese");
 	int numero, num1, num2, conta;
 	printf("Escreva dois numeros:\n");
 	printf("Entre com o primeiro numero:");
 	scanf("%d", &num1);
 	printf("Entre com o segundo numero:");
 	scanf("%d", &num2);
 	
 		if (num1>num2){
 		conta = num1;
 	}
 	
 		if (num2>num1){
 			conta = num2;
 		}
 		
 		printf("O numero maior é %d \n",conta);
 		system("pause");
 }
 		
