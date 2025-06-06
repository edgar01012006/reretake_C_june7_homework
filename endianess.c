#include <stdio.h>

int main() 
{
    unsigned int x = 1;
    /*
    Little endian 
     0   1   2   3
    0x1 0x0 0x0 0x0

    Big endian 
    0x0 0x0 0x0 0x1
    */
    char* c = (char*)&x;

    if (*c) {
        printf("Little endian\n");
    } else {
        printf("Big endian\n");
    }
}
