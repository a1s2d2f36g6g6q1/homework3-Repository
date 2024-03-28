#include <stdio.h>

#define MAX_SIZE 100
// 최대크기 상수 정의
float sum1(float list[], int); // 배열 자체를 받아 합을 계산
float sum2(float *list, int);  // 배열 포인터를 받아 합을 계산
float sum3(int n, float *list); // 배열 크기, 배열 포인터를 받아 합을 계산

float input[MAX_SIZE], answer;
int i;

void main(void){
    for (i = 0; i < MAX_SIZE; i++)
        input[i] = i;
        // 배열에 0~99까지 값을 초기화
    
    printf("-----------------------------------------\n");
    printf("----- [Suh Dong-Woo] [2021041094] ----- \n");
    printf("-----------------------------------------\n");

    /* for checking call by reference */
    printf("--------------------------------------\n");
    printf(" sum1(input, MAX_SIZE) \n");
    printf("--------------------------------------\n");
    printf("input \t= %p\n", input);

    answer = sum1(input, MAX_SIZE);
    printf("The sum is: %f\n\n", answer);
    // sum1 계산 후 출력
    
    printf("--------------------------------------\n");
    printf(" sum2(input, MAX_SIZE) \n");
    printf("--------------------------------------\n");
    printf("input \t= %p\n", input);
    
    answer = sum2(input, MAX_SIZE);
    printf("The sum is: %f\n\n", answer);
    // sum2 계산 후 출력
    
    printf("--------------------------------------\n");
    printf(" sum3(MAX_SIZE, input) \n");
    printf("--------------------------------------\n");
    printf("input \t= %p\n", input);
    
    answer = sum3(MAX_SIZE, input);
    printf("The sum is: %f\n\n", answer);
    // sum3 계산 후 출력
}

float sum1(float list[], int n) {
    printf("list\t= %p\n", list);
    printf("&list\t= %p\n\n", &list);

    int i;
    float tempsum = 0;
    for(i = 0;i < n;i++) 
        tempsum += list[i];
    
    return tempsum;
}

float sum2(float *list, int n) {
    printf("list\t= %p\n", list);
    printf("&list\t= %p\n\n", &list);

    int i;
    float tempsum = 0;
    for(i = 0;i < n;i++)
        tempsum += *(list + i);
    
    return tempsum;
}


/* stack variable reuse test */
float sum3(int n, float *list) {
    printf("list\t= %p\n", list);
    printf("&list\t= %p\n\n", &list);

    int i;
    float tempsum = 0;
    for(i = 0;i < n;i++)
        tempsum += *(list +i);

    return tempsum;
}