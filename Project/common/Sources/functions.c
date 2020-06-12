//
// Created by Sebastian Goebel on 07.06.2020.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
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

int matrix[25][25], visited_cities[10], limit, cost = 0;

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

void sortieren_id(City citiessort[], int n)
{
    City temp;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(citiessort[j].id>citiessort[j+1].id)
            {
                temp.id=citiessort[j].id;
                citiessort[j].id=citiessort[j+1].id;
                citiessort[j+1].id=temp.id;

                strcpy(temp.country, citiessort[j].country);
                strcpy(citiessort[j].country, citiessort[j+1].country);
                strcpy(citiessort[j+1].country, temp.country);

                strcpy(temp.city_ascii, citiessort[j].city_ascii);
                strcpy(citiessort[j].city_ascii, citiessort[j+1].city_ascii);
                strcpy(citiessort[j+1].city_ascii, temp.city_ascii);
            }
        }
    }
    char dateiname[20];
    FILE* thefile;
    printf("Enter \"filename.csv\" or Enter \"0\" for no file: ");
    scanf(" %s", dateiname);
    if(strcmp(dateiname, "0"))
    {
        thefile=fopen(dateiname, "w");
        for(int i=0; i<20; i++)
        {
            fprintf(thefile,"%d, %s, %s\n", citiessort[i].id, citiessort[i].city_ascii, citiessort[i].country);
        }
        fclose(thefile);
    }else{
        printf("\nKeine File erstellt!\n");
    }
    for(int i=0; i<n;i++)
    {
        printf("%d STADT: %s  LAND: %s\n",  citiessort[i].id, citiessort[i].city_ascii,citiessort[i].country);
    }
}

void sortieren_pop(City citiessort[], int n)
{
    City temp;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(citiessort[j].population>citiessort[j+1].population)
            {
                temp.population=citiessort[j].population;
                citiessort[j].population=citiessort[j+1].population;
                citiessort[j+1].population=temp.population;

                strcpy(temp.country, citiessort[j].country);
                strcpy(citiessort[j].country, citiessort[j+1].country);
                strcpy(citiessort[j+1].country, temp.country);

                strcpy(temp.city_ascii, citiessort[j].city_ascii);
                strcpy(citiessort[j].city_ascii, citiessort[j+1].city_ascii);
                strcpy(citiessort[j+1].city_ascii, temp.city_ascii);
            }
        }
    }
    char dateiname[20];
    FILE* thefile;
    printf("Enter \"filename.csv\" or Enter \"0\" for no file: ");
    scanf(" %s", dateiname);
    if(strcmp(dateiname, "0"))
    {
        thefile=fopen(dateiname, "w");
        for(int i=0; i<20; i++)
        {
            fprintf(thefile,"%s, %s, %d\n", citiessort[i].city_ascii, citiessort[i].country, citiessort[i].population);
        }
        fclose(thefile);
    }else{
        printf("\nKeine File erstellt!\n");
    }
    for(int i=0; i<n;i++)
    {
        printf("STADT: %s  LAND: %s\nEinwohner: %d\n",  citiessort[i].city_ascii, citiessort[i].country, citiessort[i].population);
    }
}

void sortieren_name(City citiessort[], int n)
{
    City temp;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(0 < strcmp(citiessort[j].city_ascii, citiessort[j+1].city_ascii))
            {
                temp.lat=citiessort[j].lat;
                citiessort[j].lat=citiessort[j+1].lat;
                citiessort[j+1].lat=temp.lat;

                temp.lng=citiessort[j].lng;
                citiessort[j].lng=citiessort[j+1].lng;
                citiessort[j+1].lng=temp.lng;

                strcpy(temp.country, citiessort[j].country);
                strcpy(citiessort[j].country, citiessort[j+1].country);
                strcpy(citiessort[j+1].country, temp.country);

                strcpy(temp.city_ascii, citiessort[j].city_ascii);
                strcpy(citiessort[j].city_ascii, citiessort[j+1].city_ascii);
                strcpy(citiessort[j+1].city_ascii, temp.city_ascii);
            }
        }
    }
    char dateiname[20];
    FILE* thefile;
    printf("Enter \"filename.csv\" or Enter \"0\" for no file: ");
    scanf(" %s", dateiname);
    if(strcmp(dateiname, "0"))
    {
        thefile=fopen(dateiname, "w");
        for(int i=0; i<20; i++)
        {
            fprintf(thefile,"%s, %s, %f, %f\n", citiessort[i].city_ascii, citiessort[i].country, citiessort[i].lat, citiessort[i].lng);
        }
        fclose(thefile);
    }else{
        printf("\nKeine File erstellt!\n");
    }
    for(int i=0; i<n;i++)
    {
        printf("STADT: %s  LAND: %s LAT: %f LNG: %f\n", citiessort[i].city_ascii,citiessort[i].country, citiessort[i].lat, citiessort[i].lng);
    }
}

void suchen(City citiessuche[], char stadtname[], int n)
{
    for(int i=0; i<n; i++)
    {
        if(strcmp(citiessuche[i].city_ascii, stadtname))
        {
        }else{
            printf("\nStadt: %s\nLand: %s\nLongitude: %f\nLatitude: %f\nPopulation: %d\n", citiessuche[i].city_ascii, citiessuche[i].country, citiessuche[i].lng, citiessuche[i].lat, citiessuche[i].population);
        }
    }
}

void travellingsalesman_csv(City citiessuche[], int anzahl, int n)
{
    char stadteingabe[20];
    char tsmfilename[20];
    printf("Filename.csv: ");
    scanf(" %s", tsmfilename);
    FILE* file2;
    file2=fopen(tsmfilename, "w");

    for(int i=0; i<anzahl; i++)
    {
        printf("Stadtname: ");
        scanf(" %[^\n]s", stadteingabe);

        for(int j=0; i<n; j++)
        {
            if(strcmp(citiessuche[i].city_ascii, stadteingabe))
            {
            }
            else
            {
                //city_ascii, country, lat, lng
                fprintf(file2, " %s, %s, %f, %f\n", citiessuche[i].city_ascii, citiessuche[i].country, citiessuche[i].lat, citiessuche[i].lng);
            }
        }

    }fclose(file2);
}

void TravellingSalesman(char* filename, int numOfCities){

    int groesse = arrayGroesse(filename);
    TSPCity cities[groesse+1];

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

        char *trennung = ", ";
        char *piece = strtok(zeile, trennung);

        //unterteilt jede zeile in einzelne daten
        while(piece != NULL){
            if(datensatz == 0) strcpy(cities[counter].city_ascii, piece);
            if(datensatz == 1) strcpy(cities[counter].country, piece);
            if(datensatz == 2) cities[counter].lat = atof(piece);
            if(datensatz == 3) cities[counter].lng = atof(piece);

            datensatz++;
            piece = strtok(NULL, trennung);
        }
        datensatz = 0;
        counter++;
    }

    printf("Es wurden %d Datensaetze eingelesen!\n", counter);
    /*
    printf("TEST:\n");
    printf("Test: %s\n", cities[2].city_ascii);
    printf("Test: %s\n", cities[2].country);
    printf("Test: %f\n", cities[2].lat);
    printf("Test: %f\n", cities[2].lng);
    printf("\n\n");
    */
    //Distanz-Matrix einlesen
    double Dist[numOfCities][numOfCities];
    for(int i = 0; i < numOfCities; i++){
        for(int j = 0; j < numOfCities; j++){
            Dist[i][j] = getDistance(cities[i], cities[j]);
        }
        visited_cities[i] = 0;
    }


    /*
    //TEST --> Matrix ausgeben
    printf("\nTEST Matrix ausgeben:\n");
    for(int i = 0; i < numOfCities; i++)
    {
        for(int j = 0; j < numOfCities; j++)
        {
            printf("%2.3f ", Dist[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
    */


    int i, j;
    limit = numOfCities;


    for(i = 0; i < limit; i++)
    {
        for(j = 0; j < limit; j++)
        {
            matrix[i][j] = Dist[i][j];
        }
    }


    printf("\nKosten-Matrix:\n");

    //prints matrix
    for(i = 0; i < limit; i++)
    {
        printf("\n");
        for(j = 0; j < limit; j++)
        {
            printf("%d ", matrix[i][j]);
        }
    }


    printf("\n\nPath:\t");
    minimum_cost(0);
    printf("\n\nMinimum Cost: \t");
    printf("%d\n", cost);

}

void minimum_cost(int city)
{
    int nearest_city;
    visited_cities[city] = 1;
    printf("%d ", city + 1);
    nearest_city = tsp(city);
    if(nearest_city == 999)
    {
        nearest_city = 0;
        printf("%d", nearest_city + 1);
        cost = cost + matrix[city][nearest_city];
        return;
    }
    minimum_cost(nearest_city);
}

int tsp(int c)
{
    int count, nearest_city = 999;
    int minimum = 999, temp;
    for(count = 0; count < limit; count++)
    {
        if((matrix[c][count] != 0) && (visited_cities[count] == 0))
        {
            if(matrix[c][count] < minimum)
            {
                minimum = matrix[count][0] + matrix[c][count];
            }
            temp = matrix[c][count];
            nearest_city = count;
        }
    }

    if(minimum != 999)
    {
        cost = cost + temp;
    }

    return nearest_city;
}



//NOT IN USE
double getDistance(TSPCity city1, TSPCity city2)
{
    double distance = 0;

    //für die x-Achse
    double x = 0;
    if(city1.lat <= city2.lat)
    {
        x = city2.lat-city1.lat;
    }
    else
    {
        x = city1.lat-city2.lat;
    }

    //für die y-Achse
    double y = 0;
    if(city1.lng <= city2.lng)
    {
        y = city2.lng-city1.lng;
    }
    else
    {
        y = city1.lng-city2.lng;
    }

    //Satz des Pytagoras
    //für 2 hoch 4 --> 2^4
    //pow(2,4);
    distance = sqrt(pow(x,2) + pow(y,2));
    return distance;
}

int faktorie(int zahl){
    if(zahl > 1){
        return zahl*faktorie(zahl-1);
    }
    else
    {
        return 1;
    }
}

double getSmaller(double a, double b){
    if(a<=b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

double getBigger(double a, double b){
    if(a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}