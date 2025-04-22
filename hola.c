#include <stdio.h>
#include <string.h>

int main() {
    char equipos[4][30]; // Almacena los nombres de los equipos
    int puntos[4] = {0}, diferencia[4] = {0}; // Puntos y diferencia de goles
    int opci, val, len;

    do {
        printf("=====\n");
        printf("1. Ingresar nombres de equipos\n");
        printf("2. Generar partidos\n");
        printf("3. Registrar resultados\n");
        printf("4. Mostrar finalistas\n");
        printf("5. Salir\n");
        printf("=====\n");

        do {
            printf("Ingrese una opción:\n");
            fflush(stdin);
            val = scanf("%d", &opci);
            if (val != 1) {
                printf("Ingrese un valor correcto..\n");
            }
        } while (val != 1);

        switch (opci) {
        case 1:
            // Ingreso de los nombres de los equipos
            for (int i = 0; i < 4; i++) {
                printf("Ingrese el nombre del equipo %d: ", i + 1);
                fflush(stdin);
                fgets(equipos[i], 30, stdin);
                len = strlen(equipos[i]) - 1;
                if (equipos[i][len] == '\n') {
                    equipos[i][len] = '\0'; // Eliminamos el salto de línea
                }
            }
            break;

        case 2:
            // Generación de los partidos de forma ordenada
            printf("Generando los partidos del cuadrangular:\n");
            for (int i = 0; i < 3; i++) {
                for (int j = i + 1; j < 4; j++) {
                    printf("Partido: %s vs %s\n", equipos[i], equipos[j]);
                }
            }
            break;

        case 3:
            // Registro de resultados de los partidos
            printf("Ingrese los resultados de los partidos:\n");
            for (int i = 0; i < 3; i++) {
                for (int j = i + 1; j < 4; j++) {
                    int goles1, goles2;

                    printf("Partido: %s vs %s\n", equipos[i], equipos[j]);
                    printf("Ingrese los goles del equipo %s: ", equipos[i]);
                    scanf("%d", &goles1);
                    printf("Ingrese los goles del equipo %s: ", equipos[j]);
                    scanf("%d", &goles2);

                    // Actualizar puntos y diferencia de goles
                    if (goles1 > goles2) {
                        puntos[i] += 3;
                    } else if (goles2 > goles1) {
                        puntos[j] += 3;
                    } else {
                        puntos[i] += 1;
                        puntos[j] += 1;
                    }

                    diferencia[i] += (goles1 - goles2);
                    diferencia[j] += (goles2 - goles1);
                }
            }
            break;

        case 4:
            // Ordenar equipos por puntos y diferencia de goles
            for (int i = 0; i < 4; i++) {
                for (int j = i + 1; j < 4; j++) {
                    if (puntos[i] < puntos[j] || 
                        (puntos[i] == puntos[j] && diferencia[i] < diferencia[j])) {
                        // Intercambiar puntos, diferencia y nombres
                        int tempPuntos = puntos[i];
                        puntos[i] = puntos[j];
                        puntos[j] = tempPuntos;

                        int tempDiferencia = diferencia[i];
                        diferencia[i] = diferencia[j];
                        diferencia[j] = tempDiferencia;

                        char tempEquipo[30];
                        strcpy(tempEquipo, equipos[i]);
                        strcpy(equipos[i], equipos[j]);
                        strcpy(equipos[j], tempEquipo);
                    }
                }
            }

            // Mostrar los resultados en formato tabla
            printf("Tabla de posiciones:\n");
            
            printf("Equipo\t\tPuntos\t\tGol Diferencia\n");
            for (int i = 0; i < 4; i++) {
                printf("%s\t\t%d\t\t%d\n", equipos[i], puntos[i], diferencia[i]);
            }

            // Mostrar los finalistas
            printf("\nLos equipos que pasan a la final son:\n");
            printf("1. %s\n", equipos[0]);
            printf("2. %s\n", equipos[1]);
            break;

        case 5:
            printf("Saliendo...\n");
            break;

        default:
            printf("Opción inválida.\n");
            break;
        }
    } while (opci != 5);

    return 0;
}
