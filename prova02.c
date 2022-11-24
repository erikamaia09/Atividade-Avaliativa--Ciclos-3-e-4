#include <stdio.h>

//definição do tamanho do vetor

#define tamanho 10
 /*Função de ordenação do vetor digitado. 
 Um vetor , j , que sua composição serão os algoritmos ordenados em ordem crescente.
 Nessa função o laço ''for'' faz a passagem das posições do vetor e a condicional faz a comparação entre os valores existentes.
 A função bubblesort faz a passagem pel o vetor diversas vezes, a cada vez fazendo flutuar para o topo o maior elemento da sequência. */

void bubblesort(int* vetor, int n) {
	int i, j, temporario;
	for (i = n-1; i >= 1; i--) {
		for (j = 0; j < i; j++) {
			if (vetor[j] > vetor[j+1]) {
				temporario = vetor[j];
				vetor[j] = vetor[j+1];
				vetor[j+1] = temporario;
			}
		}
	}
}

/* Função principal, que declara um vetor de 10 posições e automaticamenta já da seus valores de forma aleatórias. Temos um laço ' for'
 que repassa os valores declarados, até o tamanho máximo do vetor, para serem armazanados na variavel (vet[i]).*/
int main() {
	int vet[tamanho] = {5,2,7,8,10,6,1,4,9,3};
	int i;
	bubblesort(vet,tamanho);
	for (i = 0; i < tamanho; i++) {
		printf("%d ", vet[i]);
	}
	return(0);
}