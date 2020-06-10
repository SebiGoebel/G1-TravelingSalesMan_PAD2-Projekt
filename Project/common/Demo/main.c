#include <stdio.h>
#include <stdlib.h>

#include <header.h>

int main() {

    City *cities = NULL;

    char  *filename = "../../worldcities.csv";

    //title und ascii-art
    titel();

    //reads CSV into array
    readCSV(filename);

    //Menu
    //@Sebi
    int menu_wahl;

    do{
        printf("MENU:\n");
        printf("----------------------------\n");
        printf("Bitte treffen Sie Ihre wahl:\n");
        printf(" - 1 - Auswahl 1\n");
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
