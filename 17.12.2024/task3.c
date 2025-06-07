#include <stdio.h>
//#include <stdlib.h>

double add(double num1, double num2) { return num1 + num2; }
double sub(double num1, double num2) { return num1 - num2; }
double mul(double num1, double num2) { return num1 * num2; }
double div(double num1, double num2) {
    if (num2 == 0) {
        return -1;
    } 
    return num1 / num2; 
}

int main() {
    double num1 = 0;
    double num2 = 0;
    char op = '\0';

    printf("Enter the first number\n");
    scanf("%lf", &num1);
    printf("Enter the second number\n");
    scanf("%lf", &num2);
    printf("Enter an operation\n");
    scanf(" %c", &op);
    switch(op) {
        case '+':
            printf("%lf", add(num1, num2));
            break;
        case '-':
            printf("%lf", sub(num1, num2));
            break;
        case '*':
            printf("%lf", mul(num1, num2));
            break;
        case '/':
            printf("%lf", div(num1, num2));
            break;
        default:
            printf("invalid operation\n");
            break;
    }

}
