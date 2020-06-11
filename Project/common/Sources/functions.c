//
// Created by Sebastian Goebel on 07.06.2020.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../Headers/header.h"

#define FILENAME "worldcities.csv"

/*
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
*/

//titel und ascii-art
//@Sebi
void titel()
{
    printf("  _[]_\n");
    printf(" <(^_^)>\n");
    printf("  ([])\n");
    printf("  / |\n");
    printf("--------------------------------\n");
    printf("   _________                ____\n");
    printf("  /                        // ||\n");
    printf(" /                        //  ||\n");
    printf("/                        //   ||\n");
    printf("|                             ||\n");
    printf("|                             ||\n");
    printf("|                             ||\n");
    printf(" \\       ___                  ||\n");
    printf("  \\        |                  ||\n");
    printf("   \\       |                  ||\n");
    printf("    --------                 ----\n");
    printf("---------------------------------\n");
    printf("G1_TravellingSalesMan\n");
    printf("=================================\n");
}

//-------------------------------------------------------------------------------------------

/*
typedef struct City{
    char city[60];
    char cityascii[60];
    double lat;//latitude
    double lng;//longitude
    char country[60];
    char iso2[10];
    char iso3[10];
    char admin_name[60];
    char capital[10];
    int population;
    int id;

    struct City* next;
}City;
*/

//Gibt die Liste aus
//@Sebi
void ausgabe(City *anfang)
{
    City *aktuell = anfang;

    printf("ID: Cityname, country, population\n");

    while (aktuell != NULL){
        printf("%10d: %60s, %60s, %8d\n",
                aktuell->id,
                aktuell->city_ascii,
                aktuell->country,
                aktuell->population);
        aktuell = aktuell->next;
    }

}

//-------------------------------------------------------------------------------------------

/*
typedef struct City{
    char city[60];
    char cityascii[60];
    double lat;//latitude
    double lng;//longitude
    char country[60];
    char iso2[10];
    char iso3[10];
    char admin_name[60];
    char capital[10];
    int population;
    int id;

    struct City* next;
}City;
*/



/**
 * gibt an wie groß ein Array für ein File sein muss
 * @Sebi
 */
int arrayGroesse(const char *filename){
    FILE *fPointer = fopen(filename, "r");

    if (fPointer == NULL)
    {
        printf("could not open %s\n", filename);
        return 0;
    }

    int zeilencounter = 0;
    for(char c = getc(fPointer); c != EOF; c = getc(fPointer))
    {
        if(c == '\n')
        {
            zeilencounter++;
        }
    }
    rewind(fPointer);
    return zeilencounter;
}
