//
// Created by Sebastian Goebel on 07.06.2020.
//

#ifndef PROJECT_HEADER_H
#define PROJECT_HEADER_H

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

void titel();

#endif //PROJECT_HEADER_H
