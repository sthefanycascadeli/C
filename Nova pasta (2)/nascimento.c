#include<stdio.h>
#include<locale.h>

 main(){
 		setlocale(LC_ALL,"Portuguese");
 	int idade, ano;
 	printf("Digite o ano que voc� nasceu\n");
 	scanf("%d", &ano);
 	
 	idade= 2022-ano;
 	
 	if("idade=16"){
 		printf("Voce poder� votar! %d \n", idade);
 	} else {
 		printf("Voce n�o podera votar! %d \n", idade);
 	}
 	
 		system("pause");
 		
 	}
 			
