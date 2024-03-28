#include <stdio.h>
#include <stdlib.h>

void main() {
    int list[5];
    int *plist[5];
    // 똑같이 정수형배열, 포인터배열 선언

    list[0] = 10;
    list[1] = 11;
    // 정수배열 0, 1번 자리 값 대입

    plist[0] = (int*)malloc(sizeof(int));
    // plist[0] 이 가리키는 메모리에 값 저장

    printf("-----------------------------------------\n");
    printf("----- [Suh Dong-Woo] [2021041094] ----- \n");
    printf("-----------------------------------------\n");

    printf("list[0] \t= %d\n", list[0]);// 배열 첫 원소 값
    printf("list \t\t= %p\n", list);// 배열 자체 메모리 주소
    printf("&list[0] \t= %p\n", &list[0]);// 첫번째 원소 주소
    printf("list + 0 \t= %p\n", list+0); // 0을 더한 주소 (list[0]=list자체주소)
    printf("list + 1 \t= %p\n", list+1);// 1을 더한 주소 (두번째원소)
    printf("list + 2 \t= %p\n", list+2);// 2를 더한 주소 (세번째원소)
    printf("list + 3 \t= %p\n", list+3);// 3을 더한 주소 (네번째원소)
    printf("list + 4 \t= %p\n", list+4);// 4를 더한 주소 (다섯번째원소)
    printf("&list[4] \t= %p\n", &list[4]);// 마지막 원소 주소

    free(plist[0]);
    // 메모리 해제
}