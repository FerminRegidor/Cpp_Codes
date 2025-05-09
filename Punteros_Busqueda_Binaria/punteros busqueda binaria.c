// hacer un ordenamiento de un vector de punteros para luego hacer
// busqueda binaria y mostrar la posicion del vector de punteros y
// la posicion original donde se encontro el valor

#include <stdio.h>
#include <stdlib.h>

#define N 6

int main(){
    int VEC[N] = {4, 5, 1, 2, 7, 8};
    int * P[N], * AUX;
    int i, j, valor, flag = 0;
    int BAJO, ALTO, MED;
    BAJO = 0;
    ALTO = N-1;

    // CARGA DEL VECTOR DE PUNTEROS
    for(i = 0; i < N; i++){
        *(P+i) = VEC+i;
    };
    // ORDENAMIENTO DEL VECTOR DE PUNTEROS
    for(i = 0; i < N; i++){
        for(j = 0; j < N-i-1; j++){
            if(*(*(P+j)) > *(*(P+j+1))){
                AUX = *(P+j);
                *(P+j) = *(P+j+1);
                *(P+j+1) = AUX;
            }
        }
    }
    // IMPRESION VECTOR DE PUNTEROS
    for(i = 0; i < N; i++){
        printf("\n\t Direccion almacenada: %p", P+i);
        printf("\n\t Valor %d: %d", i+1, *(*(P+i)));
    }
      getchar();
    // IMPRESION VECTOR ORIGINAL
    for(i = 0; i < N; i++){
        printf("\n\t Direccion original: %p", VEC+i);
        printf("\n\t Valor %d: %d", i+1, VEC[i]);
    }
      getchar();

    // BUSQUEDA BINARIA AAAAAAAAAAAAAAAAAAAAAAA
    printf("\n\n\t Decime el valor que queres buscar: ");
    scanf("%d", &valor);

    while(BAJO <= ALTO && flag == 0){
        MED = (BAJO + ALTO)/2;
        if(*(*(P+MED)) == valor){
            flag = 1;
        }
        if(valor < *(*(P+MED))){
            ALTO = MED - 1;
        } else {
            BAJO = MED + 1;
        }
    }

    if(flag == 1){
        printf("\t Valor encontrado en posicion %p", *(P+MED));
    } else {
        printf("\t Valor no encontrado");
    }
    getchar();

}
