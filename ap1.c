#include <stdio.h>
#include <stdlib.h>

void main(){
    int list[5];   
    int *plist[5] = {NULL,};
	// 일반 정수 리스트와 포인터 리스트를 만듬

    plist[0] = (int *)malloc(sizeof(int));
    //plist[0] 에 메모리 할당

    list[0] = 1;
    list[1] = 100;

    *plist[0] = 200;
    // plist[0] 이 가리키는 메모리에 값 저장

    printf("-----------------------------------------\n");
    printf("----- [Suh Dong-Woo] [2021041094] ----- \n");
    printf("-----------------------------------------\n");

    printf("list[0] = %d\n", list[0]);
    printf("&list[0] = %p\n", &list[0]);
    printf("list = %p\n", list);
    printf("&list = %p\n", &list);
    // list[0] 의 값과 주소, list 배열 전체의 주소 출력 (list[0]과 동일)

    printf("----------------------------------------\n\n");
    printf("list[1] = %d\n", list[1]);
    printf("&list[1] = %p\n", &list[1]);
    printf("*(list+1) = %d\n", *(list + 1));
    printf("list+1 = %p\n", list+1);
    //list[1]의 값 주소, 포인터연산을 통한 간접접근, 주소

    printf("----------------------------------------\n\n");
    printf("*plist[0] = %d\n", *plist[0]);
    printf("&plist[0] = %p\n", &plist[0]);
    printf("&plist = %p\n", &plist);
    printf("plist = %p\n", plist);
    printf("plist[0] = %p\n", plist[0]);
    printf("plist[1] = %p\n", plist[1]);
    printf("plist[2] = %p\n", plist[2]);
    printf("plist[3] = %p\n", plist[3]);
    printf("plist[4] = %p\n", plist[4]);
    // plist[0]이 가리키는 메모리 값과 주소 (plist 배열 자체 주소 X), 각 요소 주소 출력

    free(plist[0]);
    // 메모리 해제
}