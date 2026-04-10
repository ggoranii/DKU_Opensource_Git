#include <stdio.h>
#include "Calc.h"

double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    if (b == 0) {
        fprintf(stderr, "Error\n");
        return 0; // 0으로 나누기 예외 처리
    }
    return a / b;
}