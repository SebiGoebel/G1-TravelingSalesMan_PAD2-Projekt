//
// Created by Sebastian Goebel on 07.06.2020.
//

#ifndef PROJECT_HEADER_H
#define PROJECT_HEADER_H


//Überschrift aus CSV:
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

//gibt die größe eines Arrays an um ein file vollständig lesen zu können
int arrayGroesse(const char *filename);

//sortiert das Array nach ID und printet es - zusaetzlich kann eine csv datei erstellt werden
void sortieren_id(City citiessort[], int n);

//sortiert das Array nach Bevoelkerung und printet es - zusaetzlich kann eine csv datei erstellt werden
void sortieren_pop(City citiessort[], int n);

//sortiert das Array nach Staedtenamen und printet es - zusaetzlich kann eine csv datei erstellt werden
void sortieren_name(City citiessort[], int n);

#endif //PROJECT_HEADER_H
