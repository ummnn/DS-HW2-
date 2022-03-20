#include <stdio.h>


int main()
{
    printf("[----- [�̵���]    [2019038027] -----]\n");

    int i;      //int�� ���� i����
    int *ptr;   //������ ���� ptr����
    int **dptr; //���������� ���� dptr ����
    i = 1234;   //i�� 1234 ����

    printf("[checking values before ptr = &i] \n"); //ptr�� �ּҰ� �Ҵ� �� �������� �� üũ
    printf("value of i == %d\n", i);                //i�� �� ���(1234)
    printf("address of i == %p\n", &i);             //i�� �ּҰ� ���
    printf("value of ptr == %p\n", ptr);            //ptr�� �� ���(�ʱ�ȭ ���� ���� �����Ⱚ)
    printf("address of ptr == %p\n", &ptr);         //ptr�� �ּҰ� ���

    ptr = &i; /* ptr is now holding the address of i */ //ptr�� i�ּҰ� �Ҵ�
    printf("\n[checking values after ptr = &i] \n");    //ptr�� i�� �ּҰ� �Ҵ� �� �������� �� üũ
    printf("value of i == %d\n", i);         //i�� �� ���(1234)
    printf("address of i == %p\n", &i);      //i�� �ּҰ� ���
    printf("value of ptr == %p\n", ptr);     //ptr�� �� ��� (i�� �ּ�)
    printf("address of ptr == %p\n", &ptr);  //ptr�� �ּҰ� ���
    printf("value of *ptr == %d\n", *ptr);   //ptr�� ����Ű�� ���� �� ��� (i�� �� 1234)

    dptr = &ptr; /* dptr is now holding the address of ptr */ //dptr�� ptr�� �ּҰ� �Ҵ�
    printf("\n[checking values after dptr = &ptr] \n"); //dptr�� ptr�� �ּҰ� �Ҵ� �Ŀ� �������� �� üũ
    printf("value of i == %d\n", i);            //i�� �� ���(1234)
    printf("address of i == %p\n", &i);         //i�� �ּҰ� ���
    printf("value of ptr == %p\n", ptr);        //ptr�� �� ��� (i�� �ּ�)
    printf("address of ptr == %p\n", &ptr);     //ptr�� �ּҰ� ���
    printf("value of *ptr == %d\n", *ptr);      //ptr�� ����Ű�� ���� �� ��� (i�� �� 1234)
    printf("value of dptr == %p\n", dptr);      //dptr�� �� ��� (ptr�� �ּ�)
    printf("address of dptr == %p\n", &dptr);   //dptr�� �ּҰ� ���
    printf("value of *dptr == %p\n", *dptr);    //*dptr�� ����Ű�� ���� �� ���(ptr�� �� = i�� �ּ�)
    printf("value of **dptr == %d\n", **dptr);  //dptr�� ����Ű�� ���� ��(ptr)�� ����Ű�� ���� ��(i�� ��1234) ���

    *ptr = 7777; /* changing the value of *ptr */   //ptr�� ����Ű�� ���� ��(i�� ��)�� 7777�� ����
    printf("\n[after *ptr = 7777] \n");         //ptr�� ����Ű�� ���� ��(i�� ��)�� 7777�� ���� ���� �������� �� üũ
    printf("value of i == %d\n", i);            //i�� �� ��(7777)
    printf("value of *ptr == %d\n", *ptr);      //ptr�� ����Ű�� ���� �� ���(i�ǰ� 7777)
    printf("value of **dptr == %d\n", **dptr);  //dptr�� ����Ű�� ���� ��(ptr)�� ����Ű�� ���� ��(i�� ��7777)

    **dptr = 8888; /* changing the value of **dptr */ //dptr�� ����Ű�� ���� ��(ptr)�� ����Ű�� ���� ��(i�� ��)�� 8888�� ����
    printf("\n[after **dptr = 8888] \n");       //**dptr�� 8888�� ���� = i�� �� ����
    printf("value of i == %d\n", i);            //i�� �� ���(8888)
    printf("value of *ptr == %d\n", *ptr);      //ptr�� ����Ű�� ���� ��(i�� ��) ���
    printf("value of **dptr == %d\n", **dptr);  //dptr�� ����Ű�� ���� ��(ptr)�� ����Ű�� ���� ��(i�� ��) ���

    return 0;
}