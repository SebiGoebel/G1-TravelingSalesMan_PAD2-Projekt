#include <stdio.h>
#include <stdlib.h>

#include "header.h"
#include "functions.c"

typedef struct{
    char cityname[60];//ascii
    double lng;//longitude
    double lat;//latitude
    char country[60];
    char capital[10];
    int population;
    int id;

    struct City* next;
}City;

int main()
{
    int x=0;
    int y=0;
    char name[180];
    printf("G1-TravelingSalesManProblem\n");


    FILE *myfile;
    char *filename="worldcities.csv";
    myfile=fopen(filename, "r");

    if (NULL == myfile){
        printf("could not open %s",filename);
        exit(-1);
    }
//    while(EOF!=fscanf(myfile,"%s", name))
//    {
//        printf("%s\n", name);
//    }

    //Hauptmenue
    do
    {
      printf("0-- Programm beenden\n");
      printf("1-- \n");
      printf("2-- \n");
      printf("3-- \n");
      printf("4-- \n");
      printf("5-- \n");

      printf("Ihre Eingabe:");
      scanf("%d", &x);

      switch(x)
      {
        case 1:
            printf("1\n");
            break;
        case 2:
            printf("2\n");
            break;
        case 3:
            printf("3\n");
            break;
        case 4:
            printf("4\n");
            break;
        case 5:
            printf("5\n");
            break;
        case 0:
            return 0;
            break;

      }

    }while(y == 0);

    fclose(myfile);


/*  Test:
    int x = addieren(2,3);
    printf("%d + %d = %d", 2, 3, x);
    return x;
*/

}
