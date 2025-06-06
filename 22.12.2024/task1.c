#include <stdio.h>

int main() 
{
    const char sym = '*';
    //const char empty = ' ';
    int test = 0;
    scanf("%d", &test);

    for (int i = 0; i < test; ++i) {
        for(int j = 0; j < test; ++j) {
            if (i == 0 || i == test - 1) {
                printf("%c", sym);       
            } 
            else {
                if (j == 0 || j == test - 1) {
                    printf("%c", sym);
                }
                else {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
}
