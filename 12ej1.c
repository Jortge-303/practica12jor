#include <stdio.h>

struct Cancion {
    int numero;
    int duracion;
    float calificacion;
};

int main() {
    struct Cancion favorita;

    favorita.numero = 1;
    favorita.duracion = 210;
    favorita.calificacion = 9.5f;

    printf("Numero: %d\n", favorita.numero);
    printf("Duracion: %d seg\n", favorita.duracion);
    printf("Calificacion: %.1f\n", favorita.calificacion);

    return 0;
}
