// hacer una matriz de punteros que apunten a las direcciones de una matriz
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int Matriz[5][5];
    int MatrizPaSumar[5][5];
    int MatrizSumada[5][5];
    int *P[5][5];
    int i,j;

    // CARGA DE VALORES A LAS MATRICES
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            Matriz[i][j] = rand() % 20;
        }
    }
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            MatrizPaSumar[i][j] = rand() % 20;
        }
    }


    // IMPRESION DE LA MATRICES
    printf("\n\n Impresion matrices originales");
    for(i = 0; i < 5; i++){
        printf("\n\t");
        for(j = 0; j < 5; j++){
            printf("%5d", Matriz[i][j]);
        }
    }
    printf("\n");
    for(i = 0; i < 5; i++){
        printf("\n\t");
        for(j = 0; j < 5; j++){
            printf("%5d", MatrizPaSumar[i][j]);
        }
    }

    // CARGA DE VALORES A LA MATRIZ DE PUNTEROS
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            P[i][j] = &Matriz[i][j];
        }
    }

    // IMPRESION DE LA MATRIZ POR MATRIZ DE PUNTEROS
    printf("\n\n Impresion matriz de punteros");
    printf("\n");
    for(i = 0; i < 5; i++){
        printf("\n\t");
        for(j = 0; j < 5; j++){
            printf("%5d", *(P[i][j]));
        }
    }

    // SUMA DE LAS MATRICES UTILIZANDO LA MATRIZ DE PUNTEROS (que dios nos ampare)
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            MatrizSumada[i][j] = *(P[i][j]) + MatrizPaSumar[i][j];
        }
    }

    // IMPRESION DE LA MATRIZ SUMADA
    printf("\n\n Impresion matrices sumadas");
    printf("\n");
    for(i = 0; i < 5; i++){
        printf("\n\t");
        for(j = 0; j < 5; j++){
            printf("%5d", MatrizSumada[i][j]);
        }
    }

}
