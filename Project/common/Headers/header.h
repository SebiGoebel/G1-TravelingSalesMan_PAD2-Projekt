//
// Created by Sebastian Goebel on 07.06.2020.
//

#ifndef PROJECT_HEADER_H
#define PROJECT_HEADER_H

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

//city,"city_ascii","lat","lng","country","iso2","iso3","admin_name","capital","population","id"

typedef struct City{
    char city[60];
    char city_ascii[60];
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

//printet den Titel und Ascii-Art aus
void titel();

//prototype -> würde mit liste funktionieren
//(wenn wir es mit einem array machen dann müssen wir diese Funktion auskommentieren oder löschen)
void ausgabe(City *anfang);

//reads the csv into an array
void readCSV_nixgehen(const char *filename);
void readCSV(const char *filename);

#endif //PROJECT_HEADER_H
