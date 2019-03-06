#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

//17.Crie um programa que receba a idade e o peso de 20 pessoas. Calcular e imprimir a média dos pesos da mesma faixa etária.
//As faixas etárias são: de 1 a 10 anos, de 11 a 20 anos, de 21 a 30 anos e acima de 30.


struct Pessoa{
	float peso;
	int idade;
};

int main(int argc, char *argv[]) {

	int i=0;
	struct Pessoa n[50];
	float peso;
	int idade=0;

	float soma1;
	float soma2;
	float soma3;
	float soma4;


	int cont1=1;
	int cont2=1;
	int cont3=1;
	int cont4=1;



	for(i=0;i<5;i++){
		printf("Digite o peso: ");
		scanf("%f",&peso);

		printf("Digite a idade");
		scanf("%d",&idade);

		printf("\n\n");
		n[i].idade = idade;
		n[i].peso = peso;

	}
	for(i=0;i<5;i++){


		if(n[i].idade <= 10){
			soma1 += n[i].peso;
			cont1 ++;

		}
		else if(n[i].idade <= 20){
			soma2 += n[i].peso;
			cont2 += 1;

		}

		else if(n[i].idade <= 30){
			soma3 += n[i].peso;
			cont3 += 1;
		}

		else if(n[i].idade >= 30){
			soma4 += n[i].peso;
			cont4 += 1;

		}

	}
		if(cont1-1 > 0)
		printf("01 a 10 = %.2f \n ",soma1/(cont1-1.00));

		if(cont2-1 >0)
		printf("11 a 20 = %.2f\n ",soma2/(cont2-1.00));

		if(cont3-1 >0)
		printf("21 a 30 = %.2f \n ",soma3/(cont3-1.00));

		if(cont4-1 >0)
		printf("acima de 30 = %.2f \n ",soma4/(cont4-1.00));

}
