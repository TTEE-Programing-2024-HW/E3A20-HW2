#include<stdio.h>                                     /*��stdio.h�o���ɮקt�A�i��*/
#include<stdlib.h>                                    /*��stdlib.h�o���ɮקt�A�i��*/
#include<string.h>                                    /*��string.h�o���ɮקt�A�i��*/
#include<conio.h>                                     /*���Jconio.h���Y��*/ 
#include<time.h>                                      /*���o�ɶ��P����B��ɶ��P�����ƾާ@�ή榡�ƪ����Y��*/

void son(void);
int i,j,z;

int main(void)                                        /*�D���main()�q�o�}�l*/
{
	printf("�{���]�p�@�~3\n");                        /*�@�~3 part 1:�ӤH���檺�ʭ�*/
	printf("\n");
	printf("�r�s�r�s���â@�ġ��â@\n");
	printf("�s�r�s�r�j�@�@�j�v�v�v�v�@\n");
	printf("�r�s�r���@�@���@�@�@�@�@�@�B\n");
	printf("�s�r�A�@�@�@�@�@�@�@���@�@�@�^\n");
	printf("�r�s�j�@�@�@�@�@�@�@�@���@�@�j\n");
	printf("�s�r�j�@�@�@�@�@�@�@�@�@�@�@�v�i\n"); 
	printf("�r���i�i���@�@�@�@�@�@ �@�ġġ�\n");
	printf("�s�i�i�i�i�i���@�@�@�@�@�@�@��\n");
	printf("�r�i�i�i�i�i�i�i�i�i�i�i�i�i��\n");
	printf("���i�i�i�i�i�i�i�i�i�i�i�i�i�i�g�e\n");
	printf("���i�i�i�i�i�i�i�i�i�i�i�i�i�i�g�e\n");
	printf("�i�����i�i�����i�i�i�i�i�i�i�i�i���@\n");
	printf("�����i�i�i�i�@�i�i�i�i�i�i�i�i���@�@ �@\n");
	printf("�r�i�i�i�i�i�@�i�i�i�i�i�i���@�@�@�@�@ �B\n");
	printf("�s�x�@�@�@�x�i�i�i�i�i���@�@�@�@�@�@�@�@�j\n");
	printf("�r�x�@�@�@�x�@�@�@�@�@�@�@�@�@�@�@�@�@�@�j\n");
	printf("�s�A�@�@�@�A�@�@�@�@���v�v�v�@�@�@�@�@ �A\n");
	printf("*�A�ġ�_���B�@�@�@�A�@�@�@�@�@ �@�@�@���@\n");
	printf("�s�r�s�r�s�r�@ �@�@ �@_�@�@�@�@�@�B���@�@�B\n");
	printf("�r�s�r�s�r�s�r �@�ġġĢ@�@�@�@�@ �B���v�@�B���v�@\n");
	printf("����������������������������@�@�@ �A�@ ���v�B�@\n");
	system("pause");                                /*�ù��e���Ȱ��A�õ��ݨϥΪ̫����N�� */
	system("cls");                                  /*�M���ù�*/
	
	int passworld,count=0;
    int n=0,math[10],sic[10],eng[10];
    int ok,math1[10],sic1[10],eng1[10];
    float avg[10];
    float avg1[10];
    char name[10][9],number[10][9];
    char sw,name1[10][9],number1[10][9];
    char find[9];
    char h[9],r[9];
    float v;
    int k,u,l;
    
    son();
    printf("�п�J4��K�X:");
    while(1)
    {
        scanf("%d",&passworld);
        count++;
        if(passworld==2024)
        {
            break;
        }
        else if(count<3)
        {
            printf("�ЦA����J");
        }
        else
        {
            printf("��3��!�A��!\a");
            return 0;
        }
    }
    while(1)
    {
        system("cls");                                 /*�M���ù��A�ù��X�{�D���*/
        printf("------------------------------\n");
        printf("|  a. ��J�ǥͦ��Z          |\n");
        printf("|  b. ��ܾǥͦ��Z          |\n");
        printf("|  c. �j�M�ǥͦ��Z          |\n");
        printf("|  d. ���Z�ƦW              |\n");
        printf("|  e. �t�ε���              |\n");
        printf("------------------------------\n");
        fflush(stdin);
        sw=getche();
