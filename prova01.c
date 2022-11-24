#include <stdio.h>
#include <stdlib.h>

// definição do tamanho do vetor 
#define VETOR 10

//declaração da função que ordena o vetor
void insertion_sort(int *a);

//função principal do código
int main(int argc, char** argv)
{
    int i, vet[VETOR];

     {/* o vetor guarda 10 valores apos feita a leitura do código, na ordem digitada. O vetor tem um tamanho 10, assim então, será lido 10 números(valores)
     digitados pelo usuário, dessa maneira, enquanto o i, que é o contador de entradas dos valores, for menor ou igual ao tamanho do vetor
     o laço  "for" irá continuar pedindo para o usuário digitar números que vão ficar salvos no vetor chamado VETOR.*/}
    
    for(i = 0; i < VETOR; i++)
    {
        printf("Digite um valor: ");
        scanf("%d", &vet[i]);
    }

    // Pegar  os valores ordenados que será colocados em ordem crescente pela função void "insertion_sort(int *a)"
    
    insertion_sort(vet);

    {/*Imprime os valores ordenados do vetor. O laço "for" é usado para fazer a impressão dos números,em ordem, do tamanho certo do
    vetor que nessa caso é (10).Enquanto o contador i for menor que 10, ele é implementado em +1 assim passa para a próxima posição da sequência ordenada do vetor*/}
    
    printf("\nValores ordenados em ordem crescente:\n");
    
    for(i = 0; i < VETOR; i++)
    {
        printf("%d ", vet[i]);
    }
    system("pause");
    return 0;
}

 {/* A função de Ordenação por Inserção. nessa função apresentada temos um contador,o contador i, uma variável que irá compor o vetor ordenado,j,e uma variável
temporária, que vai guardar o número ate que apareça um menor que ele. Para que ele  então,  passe a  integrar o vetor ordenado.
 O laço chamado "for" faz está comparação entre os valores digitados, assim sendo que o menor já vai para a posição crescente do vetor
e o maior passa a ser temporário armazenado na variavel ' temporario' até que não tenha mais valor menor que esse(algum valor x). A função
 INSERTION SORT,ou ORDENAÇÃO POR INSERÇÃO é um método que irá percorrer um  um vetor de elementos da esquerda para a direita e da forma que ele vai avançando
vai ordenando os elementos à esquerda.*/}

void insertion_sort(int *a)
{
    int i, j, temporario;

    for(i = 1; i < VETOR; i++)
    {
        temporario = a[i];
        for(j = i-1; j >= 0 && temporario < a[j]; j--)
        {
            a[j+1] = a[j];
        }
        a[j+1] = temporario;
    }
}

