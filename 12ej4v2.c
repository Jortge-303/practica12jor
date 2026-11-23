#include <stdio.h>

struct Cancion {
    char nombre[60];
    char artista[60];
    int duracion;       
    float calificacion;
};

void mostrar(struct Cancion c) {
    printf("  Cancion:      %s\n", c.nombre);
    printf("  Artista:      %s\n", c.artista);
    printf("  Duracion:     %d seg\n", c.duracion);
    printf("  Calificacion: %.1f\n", c.calificacion);
}

void mostrarListaGeneral(struct Cancion lista[], int tam) {
    printf("\n--- LISTA GENERAL DE CANCIONES ---\n");
    for (int i = 0; i < tam; i++) {
        printf("\nCancion #%d:\n", i + 1);
        mostrar(lista[i]);
    }
}

void mostrarMasLarga(struct Cancion lista[], int tam) {
    int indiceMayor = 0;

    for (int i = 1; i < tam; i++) {
        if (lista[i].duracion > lista[indiceMayor].duracion) {
            indiceMayor = i;
        }
    }

    printf("\n--- CANCION MAS LARGA ---\n");
    mostrar(lista[indiceMayor]);
}

void mostrarMejorCalificada(struct Cancion lista[], int tam) {
    int indiceMejor = 0;

    for (int i = 1; i < tam; i++) {
        if (lista[i].calificacion > lista[indiceMejor].calificacion) {
            indiceMejor = i;
        }
    }

    printf("\n--- CANCION CON CALIFICACION MAS ALTA ---\n");
    mostrar(lista[indiceMejor]);
}

int main() {
    struct Cancion canciones[] = {
        {"Summer's Gone", "Honeydip", 412, 9.1},
        {"Junkie Shuffle", "Archive", 641, 9.3},
        {"New Noise", "Refused", 310, 8.6},
        {"Le temps de l'amour", "Francoise Hardy", 145, 8.7},
        {"Ballade No. 1 in G Minor, Op. 23", "Frederic Chopin (piano Krystian Zimerman)", 576, 9.6}
    };

    int totalCanciones = sizeof(canciones) / sizeof(canciones[0]);
    int opcion;

    do {
        printf("\n|||||||||||||||||||||||||||||\n");
        printf("   MIS CANCIONES FAVORITAS    \n");
        printf("|||||||||||||||||||||||||||||\n");
        printf("1. Lista general\n");
        printf("2. Cancion mas larga\n");
        printf("3. Calificacion mas alta\n");
        printf("4. Regresar\n");
        printf("0. Terminar\n");
        printf("Elige una opcion: ");

        if (scanf("%d", &opcion) != 1) {
            printf("\nOpcion invalida, intenta de nuevo.\n");
            while (getchar() != '\n');
            opcion = -1;
            continue;
        }

        switch (opcion) {
            case 1:
                mostrarListaGeneral(canciones, totalCanciones);
                break;
            case 2:
                mostrarMasLarga(canciones, totalCanciones);
                break;
            case 3:
                mostrarMejorCalificada(canciones, totalCanciones);
                break;
            case 4:
                printf("\nRegresando al menu principal...\n");
                break;
            case 0:
                printf("\nFin del programa, buen dia\n");
                break;
            default:
                printf("\nOpcion invalida, intenta de nuevo.\n");
        }
    } while (opcion != 0);

    return 0;
}
