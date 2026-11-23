#include <stdio.h>

#define TAM 3

struct Cancion {
    int numero;
    int duracion;
    float calificacion;
};

int main() {
    struct Cancion canciones[TAM] = {
        {1, 210, 9.5f},
        {2, 185, 8.0f},
        {3, 240, 10.0f}
    };

    int sumaDuraciones = 0;

    for (int i = 0; i < TAM; i++) {
        printf("Cancion %d - Duracion: %d seg - Calificacion: %.1f\n",
               canciones[i].numero,
               canciones[i].duracion,
               canciones[i].calificacion);
        sumaDuraciones += canciones[i].duracion;
    }

    printf("\nSuma total de las duraciones: %d seg\n", sumaDuraciones);

    return 0;
}
