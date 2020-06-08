#include <stdio.h>
#include <stdlib.h>

#define LEN 100

typedef struct City{
    char cityname[60];//ascii
    double lng;//longitude
    double lat;//latitude
    char country[60];
    char capital[10];
    int population;
    int id;

    struct City* next;
}City;

#include <header.h>

int main() {

    City *anfang = NULL;

    //title und ascii-art
    titel();

    //Menu
    //@Sebi
    int menu_wahl;

    do{
        printf("MENU:\n");
        printf("----------------------------\n");
        printf("Bitte treffen Sie Ihre wahl:\n");
        printf(" - 1 - Alles Ausgeben\n");
        printf(" - 2 - Auswahl 2\n");
        printf(" - 3 - Auswahl 3\n");
        printf(" - 0 - Beenden\n");
        printf("----------------------------\n");

        //menu_wahl-Eingabe
        scanf(" %d", &menu_wahl);

        switch (menu_wahl) {
            case 0:
                printf("Progamm wird beendet\n\n");
                break;
            case 1:
                printf("Sie haben die Wahl 1 getroffen\n");
                break;
            case 2:
                printf("Sie haben die Wahl 2 getroffen\n");
                break;
            case 3:
                printf("Sie haben die Wahl 3 getroffen\n");
                break;
            default:
                printf("Keine gueltige Auswahl\n");
        }
    }while (menu_wahl != 0);

    return 0;
}
