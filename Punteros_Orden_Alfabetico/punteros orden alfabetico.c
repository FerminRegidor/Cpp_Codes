// hacer con punteros un ordenamiento alfabetico de una estructura

#include <stdio.h>

#define N 5

struct ALUMNOS {
    char Nombre[10];
    char Genero;
    int Edad;
};
void ordenamiento(struct ALUMNOS *);
int main(){
    struct ALUMNOS ALUMNO[N];
    struct ALUMNOS * P;



    for(P = ALUMNO; P < ALUMNO+N; P++){
        fflush(stdin);
        printf("\n\t NOMBRE: ");
        gets(P->Nombre);
        printf("\n\t GENERO: ");
        P->Genero = getchar();
        printf("\n\t EDAD: ");
        scanf("%d", &(P->Edad));
    }
    P = ALUMNO;
    ordenamiento(P);

    for(P = ALUMNO; P < ALUMNO + N; P++){
        printf("\n\t %s %c %d", P->Nombre, P->Genero, P->Edad); //ni a palo hago que sea lindo
    }

}

void ordenamiento(struct ALUMNOS * P){
    int I, J;
    struct ALUMNOS AUX = *P;

    for(I = 0; I < N; I++){
        for(J = 0; J < N-I-1; J++){
            if(strcmp((P+J)->Nombre, (P+J+1)->Nombre) > 0){
                AUX = *(P+J);
                *(P+J) = *(P+J+1);
                *(P+J+1) = AUX;
            }
        }
    }

}
