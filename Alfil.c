#include <stdio.h>
#include <stdlib.h>


int main() {
    int fil_pi, col_pi;
    char respuesta = 's'; 

    while (respuesta == 's') {
        printf("\n¿Desea iniciar el programa? (s/n): ");
        scanf(" %c", &respuesta); 
        
        if (respuesta == 's') {
            printf("Fila de inicio del alfil (1-8): ");
            scanf("%d", &fil_pi);
            printf("Columna de inicio del alfil (1-8): ");
            scanf("%d", &col_pi);
            printf("\n");
            
            for (int fila = 8; fila >= 1; fila--) {
                for (int columna = 1; columna <= 8; columna++) {
                    if (fila == fil_pi && columna == col_pi) {
                        printf("A ");
                    } else if (abs(fil_pi - fila) == abs(col_pi - columna)) {
                        printf("* ");
                    } else {
                        if ((fila + columna) % 2 == 0) {
                            printf("B ");
                        } else {
                            printf("N ");
                        }
                    }
                }
                printf("\n");
            }
        } else {
            printf("Fin del programa\n");
        }
    }

    return 0;
}
