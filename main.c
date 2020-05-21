#include <stdio.h>
#include <stdlib.h>

#include "header.h"
#include "functions.c"


int main()
{
    int a=0;
    char name[180];
    printf("G1-TravelingSalesManProblem\n");


    FILE *myfile;
    char *filename="worldcities.csv";
    myfile=fopen(filename, "r");

    if (NULL == myfile){
        printf("could not open %s",filename);
        exit(-1);
    }
    while(EOF!=fscanf(myfile,"%s", name))
    {
        printf("%s\n", name);
    }

    fclose(myfile);

    scanf("%d", &a);
/*  Test:
    int x = addieren(2,3);
    printf("%d + %d = %d", 2, 3, x);
    return x;
*/
    return 0;
}
