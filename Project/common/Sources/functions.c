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

//liest die CSV datei ein
//@Sebi
void readCSV_nixgehen(const char *filename)
{
    FILE *fPointer = fopen(filename, "r");

    if (fPointer == NULL)
    {
        printf("could not open %s\n", filename);
        return;
    }

    City *cities = malloc(sizeof(City));

    char tcity[60];
    char tcity_ascii[60];
    double tlat;//latitude
    double tlng;//longitude
    char tcountry[60];
    char tiso2[10];
    char tiso3[10];
    char tadmin_name[60];
    char tcapital[10];
    int tpopulation;
    int tid;

    //city,"city_ascii","lat","lng","country","iso2","iso3","admin_name","capital","population","id"

    int counter = 0;

    for(int i = 1;
        fscanf(fPointer, "%s,\"%s\",\"%lf\",\"%lf\",\"%s\",\"%s\",\"%s\",\"%s\",\"%s\",\"%d\",\"%d\"",
                            tcity, tcity_ascii, &tlat , &tlng, tcountry, tiso2, tiso3, tadmin_name, tcapital, &tpopulation, &tid)!= EOF;
        i++)
    {
        cities = realloc(cities, (i+1)*sizeof(City));

        strcpy(cities[i].city, tcity);
        strcpy(cities[i].city_ascii, tcity_ascii);
        cities[i].lat = tlat;
        cities[i].lng = tlng;
        strcpy(cities[i].country, tcountry);
        strcpy(cities[i].iso2, tiso2);
        strcpy(cities[i].iso3, tiso3);
        strcpy(cities[i].admin_name, tadmin_name);
        strcpy(cities[i].capital, tcapital);
        cities[i].population = tpopulation;
        cities[i].id = tid;

        counter++;
    }

    printf("Es wurden %d Datensätze eingelesen!\n", counter);

}


//array fehlt noch
//@Sebi
void readCSV(const char *filename)
{
    FILE *fPointer = fopen(filename, "r");

    if (fPointer == NULL)
    {
        printf("could not open %s\n", filename);
        return;
    }

    City *cities = malloc(sizeof(City));

    char zeile[200];
    int counter = 0;

    while(fgets(zeile, sizeof(zeile), fPointer) != NULL){
        fgets(zeile, sizeof(zeile), fPointer);
        printf("Zeile: %s\n", zeile);

        char trennung[] = "\",\"";
        char *piece = strtok(zeile, trennung);

        while(piece != NULL){
            //printf("%s\n", piece);
            piece = strtok(NULL, trennung);
        }
        counter++;
    }

    printf("Es wurden %d Datensaetze eingelesen!\n", counter);
}

