#include <stdio.h>

int main()
{
    printf("[----- [�̵���]    [2019038027] -----]\n");

    char charType;      //char�� ���� charType ����
    int integerType;    //int�� ���� integerType ����
    float floatType;    //float�� ���� floatType ����
    double doubleType;  //double�� ���� doubleType ����

    printf("Size of char: %ld byte\n",sizeof(charType));        //char�� ������ ũ�⸦ �����ϱ� ���� sizeof�� ���� charType�� ũ�⸦ ���� �� ���� (1byte)
    printf("Size of int: %ld bytes\n",sizeof(integerType));     //int�� ������ ũ�⸦ �����ϱ� ���� sizeof�� ���� integerType�� ũ�⸦ ���� �� ���� (4byte)
    printf("Size of float: %ld bytes\n",sizeof(floatType));     //float�� ������ ũ�⸦ �����ϱ� ���� sizeof�� ���� floatType�� ũ�⸦ ���� �� ���� (4byte)
    printf("Size of double: %ld bytes\n",sizeof(doubleType));   //double�� ������ ũ�⸦ �����ϱ� ���� sizeof�� ����doubleType�� ũ�⸦ ���� �� ���� (8byte)

    printf("-----------------------------------------\n");

    printf("Size of char: %ld byte\n",sizeof(char));        //char�� Ÿ���� ũ�⸦ �����ϱ� ���� sizeof�� ������ char�� ũ�⸦ ���� ���� �� ���� (1byte)
    printf("Size of int: %ld bytes\n",sizeof(int));         //int�� Ÿ���� ũ�⸦ �����ϱ� ���� sizeof�� ������ int�� ũ�⸦ ���� ���� �� ���� (4byte)
    printf("Size of float: %ld bytes\n",sizeof(float));     //float�� Ÿ���� ũ�⸦ �����ϱ� ���� sizeof�� ������ float�� ũ�⸦ ���� ���� �� ���� (4byte)
    printf("Size of double: %ld bytes\n",sizeof(double));   //double�� Ÿ���� ũ�⸦ �����ϱ� ���� sizeof�� ������ double�� ũ�⸦ ���� ���� �� ���� (8byte)

    printf("-----------------------------------------\n");

    printf("Size of char*: %ld byte\n",sizeof(char*));      //char�� �����͸� ����Ű�� ������ ������ ������� 4byte (�ּҰ� ����Ǵ� ���� ������)
    printf("Size of int*: %ld bytes\n",sizeof(int*));       //int�� �����͸� ����Ű�� ������ ������ ������� 4byte (�ּҰ� ����Ǵ� ���� ������)
    printf("Size of float*: %ld bytes\n",sizeof(float*));   //float�� �����͸� ����Ű�� ������ ������ ������� 4byte (�ּҰ� ����Ǵ� ���� ������)
    printf("Size of double*: %ld bytes\n",sizeof(double*)); //double�� �����͸� ����Ű�� ������ ������ ������� 4byte (�ּҰ� ����Ǵ� ���� ������)
    return 0;
}