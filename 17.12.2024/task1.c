#include <stdio.h>

void convertCelToFah(float Cel) {
    printf("%f", (Cel * 9/5) + 32);
}

int main() {
    float Cel = 0;
    do {
        scanf("%f", &Cel);
    } while(Cel < -273.15);
    convertCelToFah(Cel);
}
