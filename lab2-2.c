#include <stdio.h>


int main()
{
    printf("[----- [이동현]    [2019038027] -----]\n");

    int i;      //int형 변수 i선언
    int *ptr;   //포인터 변수 ptr선언
    int **dptr; //이중포인터 변수 dptr 선언
    i = 1234;   //i에 1234 저장

    printf("[checking values before ptr = &i] \n"); //ptr에 주소값 할당 전 변수들의 값 체크
    printf("value of i == %d\n", i);                //i의 값 출력(1234)
    printf("address of i == %p\n", &i);             //i의 주소값 출력
    printf("value of ptr == %p\n", ptr);            //ptr의 값 출력(초기화 되지 않은 쓰레기값)
    printf("address of ptr == %p\n", &ptr);         //ptr의 주소값 출력

    ptr = &i; /* ptr is now holding the address of i */ //ptr에 i주소값 할당
    printf("\n[checking values after ptr = &i] \n");    //ptr에 i의 주소값 할당 후 변수들의 값 체크
    printf("value of i == %d\n", i);         //i의 값 출력(1234)
    printf("address of i == %p\n", &i);      //i의 주소값 출력
    printf("value of ptr == %p\n", ptr);     //ptr의 값 출력 (i의 주소)
    printf("address of ptr == %p\n", &ptr);  //ptr의 주소값 출력
    printf("value of *ptr == %d\n", *ptr);   //ptr이 가리키는 곳의 값 출력 (i의 값 1234)

    dptr = &ptr; /* dptr is now holding the address of ptr */ //dptr에 ptr의 주소값 할당
    printf("\n[checking values after dptr = &ptr] \n"); //dptr에 ptr의 주소값 할당 후에 변수들의 값 체크
    printf("value of i == %d\n", i);            //i의 값 출력(1234)
    printf("address of i == %p\n", &i);         //i의 주소값 출력
    printf("value of ptr == %p\n", ptr);        //ptr의 값 출력 (i의 주소)
    printf("address of ptr == %p\n", &ptr);     //ptr의 주소값 출력
    printf("value of *ptr == %d\n", *ptr);      //ptr이 가리키는 곳의 값 출력 (i의 값 1234)
    printf("value of dptr == %p\n", dptr);      //dptr의 값 출력 (ptr의 주소)
    printf("address of dptr == %p\n", &dptr);   //dptr의 주소값 출력
    printf("value of *dptr == %p\n", *dptr);    //*dptr이 가리키는 곳의 값 출력(ptr의 값 = i의 주소)
    printf("value of **dptr == %d\n", **dptr);  //dptr이 가리키는 곳의 값(ptr)이 가리키는 곳의 값(i의 값1234) 출력

    *ptr = 7777; /* changing the value of *ptr */   //ptr이 가리키는 곳의 값(i의 값)을 7777로 변경
    printf("\n[after *ptr = 7777] \n");         //ptr이 가리키는 곳의 값(i의 값)을 7777로 변경 후의 변수들의 값 체크
    printf("value of i == %d\n", i);            //i의 값 츌룍(7777)
    printf("value of *ptr == %d\n", *ptr);      //ptr이 가리키는 곳의 값 출력(i의값 7777)
    printf("value of **dptr == %d\n", **dptr);  //dptr이 가리키는 곳의 값(ptr)이 가리키는 곳의 값(i의 값7777)

    **dptr = 8888; /* changing the value of **dptr */ //dptr이 가리키는 곳의 값(ptr)이 가리키는 곳의 값(i의 값)을 8888로 변경
    printf("\n[after **dptr = 8888] \n");       //**dptr을 8888로 변경 = i의 값 변경
    printf("value of i == %d\n", i);            //i의 값 출력(8888)
    printf("value of *ptr == %d\n", *ptr);      //ptr이 가리키는 곳의 값(i의 값) 출력
    printf("value of **dptr == %d\n", **dptr);  //dptr이 가리키는 곳의 값(ptr)이 가리키는 곳의 값(i의 값) 출력

    return 0;
}