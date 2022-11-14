#include<stdlib.h>
#include<stdio.h>
#include <locale.h>

		int main ()
		{
			setlocale(LC_ALL, "Portuguese");
			
			int animal=0,cont=0,caoP=0,caoG=0,gato=0,roedor=0,idade=0,idadeC=0,totalC;;
			float  gastoH=0,mediaC=0,gastosR[5],maior=0, menor=999,ali=0;
			
			for(cont=1;cont<=5;cont++)
			{	
				do{
				
					printf("\nInforme o tipo de animal que sera cadastrado: (1- Cao Pequeno, 2- Cao Grande, 3- Gato, 4- Roedor):");
        			scanf("%d",&animal);	
					switch(animal)
					{
						case 1: caoP++;
							break;
						case 2: caoG++;
							break;
						case 3: gato++;
							break;
						case 4: roedor++;
							break;
						default: printf("\nInforme uma opcao correta\n");				
					}
				}while(animal ==0 || animal>4);
				printf("\nInforme a idade do seu animal:");
				scanf("%d",&idade);
				totalC = caoP + caoG;
				if(animal==1 || animal==2)
					{
						idadeC = idadeC + idade;
					
					}
				printf("\nInforme o gasto mensal com Alimentação:");
				scanf("%f",&ali);
					if(animal==4)
				{
					gastosR[cont] = ali;
				}
				printf("\nInforme o seu gasto mensal com Higiene:");
				scanf("%f",&gastoH);
				if(maior<gastoH)
				{
					maior = gastoH;
				}
				if(menor>gastoH)
				{
					menor = gastoH;
				}
			
		}
			
			mediaC = idadeC /totalC;
			printf("\nNumero de Cães pequenos é: %d",caoP);
			printf("\nNumero de Gatos é: %d",gato);
			printf("\nA idade média de todos os cães é:%.2f anos",mediaC);
			printf("\nO maior gasto com Higiene foi:%.1f",maior);
			printf("\nO menor gasto com Higiene foi:%.1f",menor);
		
}
