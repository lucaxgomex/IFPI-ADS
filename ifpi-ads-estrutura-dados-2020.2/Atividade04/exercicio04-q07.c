#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(void)
{

    setlocale(LC_ALL, "");

    int n;
    printf("Quantidade de elementos: ");
    scanf("%d", &n);

    int vet[n];
    int maior = 0, menor = 0, posMaior = 0, posMenor = 0;
    for (int i = 0; i < n; i++)
    {
        printf("Valor %d > ", i);
        scanf("%d", &vet[i]);

        if (i == 0)
        {
            maior = vet[i];
            menor = vet[i];
        }
    }
    for (int j = 0; j < n; j++)
    {

        if (vet[j] > maior)
        {
            maior = vet[j];
            posMaior = j;
        }

        if (vet[j] < menor)
        {
            menor = vet[j];
            posMenor = j;
        }
    }

    printf("\n --- Resultados --- \n");
    printf("Maior = %d na Posicao: %d\n", maior, posMaior);
    printf("Menor = %d na Posicao: %d\n", menor, posMenor);

    system("pause");
    return 0;
}