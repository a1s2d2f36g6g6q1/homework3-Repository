#include <stdio.h>
#include <stdlib.h>

void main() {
    int **x;

    printf("-----------------------------------------\n");
    printf("----- [Suh Dong-Woo] [2021041094] ----- \n");
    printf("-----------------------------------------\n");

    printf("sizeof(x) = %lu\n", sizeof(x));
    printf("sizeof(*x) = %lu\n", sizeof(*x));
    printf("sizeof(**x) = %lu\n", sizeof(**x));
}