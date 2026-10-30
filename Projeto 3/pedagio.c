#include <stdio.h>
#include <string.h>

int main() {
    int carros[7];
    char dias[7][15] = {"Segunda-feira", "Terca-feira", "Quarta-feira", "Quinta-feira", "Sexta-feira", "Sabado", "Domingo"};
    int i, maior_qtd, total_carros = 0;

    printf("=== SISTEMA DE PEDAGIO ===\n\n");
    
    for (i = 0; i < 7; i++) {
        do {
            printf("Digite a quantidade de carros para %s: ", dias[i]);
            scanf("%d", &carros[i]);
            if (carros[i] < 0) {
                printf("Erro: A quantidade de carros nao pode ser negativa. Tente novamente.\n");
            }
        } while (carros[i] < 0); 
        
        total_carros += carros[i];
    }

    maior_qtd = carros[0];

    for (i = 1; i < 7; i++) {
        if (carros[i] > maior_qtd) {
            maior_qtd = carros[i];
        }
    }

    printf("\n=== RELATORIO SEMANAL DE CARROS ===\n");
    
    for (i = 0; i < 7; i++) {
        if (carros[i] == maior_qtd) {
            printf("--> %-15s: %d carros <== DIA DE PICO!\n", dias[i], carros[i]);
        } else {
            printf("    %-15s: %d carros\n", dias[i], carros[i]);
        }
    }

    printf("\nTotal de carros na semana: %d\n", total_carros);
    printf("O maior movimento da semana foi de %d carros nos dias destacados acima.\n\n", maior_qtd);

    printf("Obrigado por utilizar o sistema de pedagio!\n");
    return 0;
}