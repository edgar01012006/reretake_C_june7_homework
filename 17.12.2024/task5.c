#include <stdio.h>
#include <stdlib.h>

union Endian{
    unsigned int num;
    unsigned char c;
};

int main () {
    union Endian b;
    b.num = 0x1A2B3C4D; 
    if (b.c == 0x1A) {
        printf("Big Endian");
    }
    else if (b.c == 0x4D){
        printf("Little Endian");
    }
    return 0;
}
