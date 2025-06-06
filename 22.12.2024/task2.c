#include <stdio.h>

int isDigit(char sym) {
    if (sym >= '0' && sym <= '9') {
        return 1;
    }
    return 0;
}

int main () 
{
    char sym = 0;
    scanf("%c", &sym);
    printf("%d", isDigit(sym));
}   
