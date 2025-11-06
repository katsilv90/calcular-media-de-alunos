#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int conta, quant;
    float nota, total, media;
    conta=0;
    total = 0.0;

    printf("Indique pelo menos 2 notas.\n");
    printf("Indique quantas notas quer inserir para fazer a média: ");
    scanf("%d", &quant);
    if (quant >= 2 && quant <= 20) {
        for (int i = 0; i < quant; i++) {
            do {
                printf("Insira a nota %d (entre 0 e 20): ", i + 1);
                scanf("%f", &nota);

                if (nota < 0 || nota > 20) {
                    printf("Nota inválida. Insira uma nota de 0 a 20\n");
                }
            } while (nota < 0 || nota > 20);
            total += nota;
        }
        media = total / quant;

        printf("A média das notas é: %.2f\n", media);
    }
    else{
        printf("Por favor digite um valor entre (1 e 20).\n");
    }
    system("pause");
    return 0;
}
