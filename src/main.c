#include <stdio.h>
#include <stdlib.h>
#include "calc.h"
#include "utils.h"

int main(void) {
    double a, b;
    char op;

    printf("=== C Calculator ===\n");
    printf("Enter Expression (ex: 3 + 5): ");

    if (scanf("%lf %c %lf", &a, &op, &b) != 3) {
        printf("Invalid input format.\n");
        return 1;
    }

    double result = 0;
    switch (op) {
        case '+':
            result = add(a, b);
            break;
        case '-':
            result = subtract(a, b);
            break;
        case '*':
            result = multiply(a, b);
            break;
        case '/':
            result = divide(a, b);
            break;
        default:
            printf("Invalid Operator: %c\n", op);
            return 1;
    }
    print_result(result);
    return 0;
}