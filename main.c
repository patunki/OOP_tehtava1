#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int game(int r);

int main() {
    srand(time(NULL));
    int maximum;
    printf("Aseta maksimiluku: ");
    scanf(" %d", &maximum);
    int r = rand() % maximum;
    printf("Arvaa numero 0-%d: ",maximum);
    int exit = game(r);

    return exit;
}

int game( int r){
    int arvaus;
    int maara = 0;

        while (1) {
        scanf(" %d", &arvaus);
        maara++;
        if (arvaus == r) {
            printf("OIKEIN!! Arvasit numeron %d. Arvasit %d kertaa\n", r,maara);
            break;
        } else if (arvaus < r) {
            printf("Ylemmäs\n");
        } else {
            printf("Alemmas\n");
        }
    }
    return maara;
}
