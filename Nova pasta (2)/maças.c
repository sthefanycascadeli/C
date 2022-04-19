#include<stdio.h>
#include<locale.h>

 main(){
 		setlocale(LC_ALL,"Portuguese");
 	float quantidade, total;
 	printf("Entre com a quantidade comprada:\n");
 	scanf("%d", &quantidade);
 	
 	if(quantidade>= 12)
 		total=quantidade*0.25;
  } else {
 	
 		total= quantidade*0.30;
 	}
 	
 	printf ("O total será: %f \n",total);
 		system("pause");	
}
