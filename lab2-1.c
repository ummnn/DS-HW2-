#include <stdio.h>

int main()
{
    printf("[----- [이동현]    [2019038027] -----]\n");

    char charType;      //char형 변수 charType 생성
    int integerType;    //int형 변수 integerType 생성
    float floatType;    //float형 변수 floatType 생성
    double doubleType;  //double형 변수 doubleType 생성

    printf("Size of char: %ld byte\n",sizeof(charType));        //char형 변수의 크기를 측정하기 위해 sizeof로 변수 charType의 크기를 측정 후 츌력 (1byte)
    printf("Size of int: %ld bytes\n",sizeof(integerType));     //int형 변수의 크기를 측정하기 위해 sizeof로 변수 integerType의 크기를 측정 후 츌력 (4byte)
    printf("Size of float: %ld bytes\n",sizeof(floatType));     //float형 변수의 크기를 측정하기 위해 sizeof로 변수 floatType의 크기를 측정 후 츌력 (4byte)
    printf("Size of double: %ld bytes\n",sizeof(doubleType));   //double형 변수의 크기를 측정하기 위해 sizeof로 변수doubleType의 크기를 측정 후 츌력 (8byte)

    printf("-----------------------------------------\n");

    printf("Size of char: %ld byte\n",sizeof(char));        //char형 타입의 크기를 측정하기 위해 sizeof로 변수형 char의 크기를 직접 측정 후 츌력 (1byte)
    printf("Size of int: %ld bytes\n",sizeof(int));         //int형 타입의 크기를 측정하기 위해 sizeof로 변수형 int의 크기를 직접 측정 후 츌력 (4byte)
    printf("Size of float: %ld bytes\n",sizeof(float));     //float형 타입의 크기를 측정하기 위해 sizeof로 변수형 float의 크기를 직접 측정 후 츌력 (4byte)
    printf("Size of double: %ld bytes\n",sizeof(double));   //double형 타입의 크기를 측정하기 위해 sizeof로 변수형 double의 크기를 직접 측정 후 츌력 (8byte)

    printf("-----------------------------------------\n");

    printf("Size of char*: %ld byte\n",sizeof(char*));      //char형 데이터를 가리키는 포인터 변수의 사이즈는 4byte (주소가 저장되는 곳의 사이즈)
    printf("Size of int*: %ld bytes\n",sizeof(int*));       //int형 데이터를 가리키는 포인터 변수의 사이즈는 4byte (주소가 저장되는 곳의 사이즈)
    printf("Size of float*: %ld bytes\n",sizeof(float*));   //float형 데이터를 가리키는 포인터 변수의 사이즈는 4byte (주소가 저장되는 곳의 사이즈)
    printf("Size of double*: %ld bytes\n",sizeof(double*)); //double형 데이터를 가리키는 포인터 변수의 사이즈는 4byte (주소가 저장되는 곳의 사이즈)
    return 0;
}