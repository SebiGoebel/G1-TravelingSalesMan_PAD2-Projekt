#include <stdio.h>

void titel();

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

int main() {
    titel();
    return 0;
}

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