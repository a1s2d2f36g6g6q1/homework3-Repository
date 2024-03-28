#include <stdio.h>

void print_one(int *ptr, int rows);
// 포인터를 받아 배열을 출력하는 함수

int main() {
    int one[] = {0, 1, 2, 3, 4};
    // 배열 선언

    printf("-----------------------------------------\n");
    printf("----- [Suh Dong-Woo] [2021041094] ----- \n");
    printf("-----------------------------------------\n");

    printf("one = %p\n", one);
    printf("&one = %p\n", &one);
    printf("&one[0] = %p\n", &one[0]);
    printf("\n");
    // 배열의 주소, 자체 주소, 첫번째 원소와 주소

    printf("------------------------------------\n");
    printf(" print_one(&one[0], 5) \n"); // 배열 첫 원소 주소와 크기 5 전달
    printf("------------------------------------\n");
    print_one(&one[0], 5);

    printf("------------------------------------\n");
    printf(" print_one(one, 5) \n"); // 배열 이름과 크기 5 전달
    printf("------------------------------------\n");
    print_one(one, 5);

    return 0;
}

void print_one(int *ptr, int rows) {
    /* print out a one-dimensional array using a pointer */

    int i;
    printf ("Address \t Contents\n");
    for (i = 0; i < rows; i++)
        printf("%p \t %5d\n", ptr + i, *(ptr + i));
    
    printf("\n");
}