#include <stdio.h>
#include <ctype.h>
#include "Utils.h"

// 문자열이 유효한 숫자인지 확인
int is_number(const char *str) {
     int has_dot = 0;
    if (*str == '-' || *str == '+') str++;
    while (*str) {
        if (*str == '.') {
            if (has_dot) return 0;
            has_dot = 1;
        } else if (!isdigit((unsigned char)*str)) {
            return 0;
        }
        str++;
    }
    return 1;
}

// 계산 결과 출력
void print_result(double result) {
    printf("Result: %.2lf\n", result);
}