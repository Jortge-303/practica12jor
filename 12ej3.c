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

    int mayor = 0;

    for (int i = 1; i < TAM; i++) {
        if (canciones[i].duracion > canciones[mayor].duracion) {
            mayor = i;
        }
    }

    printf("La cancion mas larga es:\n");
    printf("Numero: %d\n", canciones[mayor].numero);
    printf("Duracion: %d seg\n", canciones[mayor].duracion);

    return 0;
}
