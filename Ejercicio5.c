#include <stdio.h>

// Función para calcular el determinante de una matriz 3x3
int calcularDeterminante(int matriz[3][3]) {
    int determinante = matriz[0][0] * (matriz[1][1] * matriz[2][2] - matriz[1][2] * matriz[2][1])
                     - matriz[0][1] * (matriz[1][0] * matriz[2][2] - matriz[1][2] * matriz[2][0])
                     + matriz[0][2] * (matriz[1][0] * matriz[2][1] - matriz[1][1] * matriz[2][0]);
    return determinante;
}

int main() {
    int matriz[3][3];
    int i, j;

    printf("Ingrese los elementos de la matriz 3x3 (fila por fila):\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    int determinante = calcularDeterminante(matriz);

    printf("Determinante: %d\n", determinante);

    if (determinante != 0) {
        printf("La matriz es regular.\n");
    } else {
        printf("La matriz no es regular.\n");
    }

    return 0;
}
