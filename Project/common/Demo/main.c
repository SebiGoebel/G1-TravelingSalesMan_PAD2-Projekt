#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <header.h>

int main() {

    //title und ascii-art
    titel();

    char  *filename = "../../worldcities.csv";

    /**
     * liest die CSV aus und spiechert es in einem array
     * @Sebi
     */
    //----------------------------------------

    //bestimmt die groesse des Arrays
    int groesse = arrayGroesse(filename);
    City cities[groesse+1];

    FILE *fPointer = fopen(filename, "r");

    char zeile[200];
    int counter = 0;
    int datensatz = 0;


    /**
     * fgets() --> teilt csv in einzelne zeilen
     * strtok()--> teilt einzelne zeilen in einzelne Strings
     */

    //liest in das array ein
    fgets(zeile, sizeof(zeile), fPointer);
    while(fgets(zeile, sizeof(zeile), fPointer) != NULL){

        char *trennung = "\",\"";
        char *piece = strtok(zeile, trennung);

        //unterteilt jede zeile in einzelne daten
        while(piece != NULL){
            if(datensatz == 0) strcpy(cities[counter].city, piece);
            if(datensatz == 1) strcpy(cities[counter].city_ascii, piece);
            if(datensatz == 2) cities[counter].lat = atof(piece);
            if(datensatz == 3) cities[counter].lng = atof(piece);
            if(datensatz == 4) strcpy(cities[counter].country, piece);
            if(datensatz == 5) strcpy(cities[counter].iso2, piece);
            if(datensatz == 6) strcpy(cities[counter].iso3, piece);
            if(datensatz == 7) strcpy(cities[counter].admin_name, piece);
            if(datensatz == 8) strcpy(cities[counter].capital, piece);
            if(datensatz == 9) cities[counter].population = atoi(piece);
            if(datensatz == 10)cities[counter].id = atoi(piece);

            datensatz++;
            piece = strtok(NULL, trennung);
        }
        datensatz = 0;
        counter++;
    }

    printf("Es wurden %d Datensaetze eingelesen!\n", counter);


    //TEST:
    //printf("Test: %s\n", cities[1].city);


    //--------------------------------------



    /**
     * MENU
     * @Sebi
     */
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
