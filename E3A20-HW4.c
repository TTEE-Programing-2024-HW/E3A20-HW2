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
        
        switch(sw)
        { 
            case'a':                              /*�ϥΪ̭Y��J��a���A�h�M���ù��A�X�{���ܦr�y�A�n�D��Jn�]5~10�^����ơC�̧�Ū�Jn���ǥͩm�W�B�Ǹ��]6���ơ^�B�ƾǡB���z�B�^�媺���Z�]0~100���^�C������J������A�^��D���C��J�L�{���A���@�B�J�o�Ϳ��~�A�ߨ�X�{���~�T���ín�D�勵�C*/
            case'A':
            system("CLS");
            
            while(1)
            {
                printf("��J5��10�����");
                fflush(stdin);
                
                scanf("%d",&n);
                if(n>=5&&n<=10)
                {
                    break;
                }
                    else
                    {
                        system("CLS");
                        printf("���~�Ч勵\n\a"); 
                    }
            }
            
            for(i=0;i<n;i++)
            {
                system("CLS");
                puts("��J�ǥͩm�W");
                fflush(stdin);
                gets(name[i]);
     
            while(1)
            { 
                puts("��J�Ǹ�");
                fflush(stdin);
                
                gets(number[i]);
                count=strlen(number[i]);
                if(count==6)
                {
                    break;
                }
                    else
                    {
                        system("CLS");
                        printf("���~�Ч勵\n\a");
                    } 
            }
     
            while(1)
            {
                puts("��J�ƾǦ��Z");
                fflush(stdin);
                
                scanf("%d",&math[i]);
                if(math[i]>=0&&math[i]<=100)
                {
                    break;
                }
                    else
                    {
                        system("CLS");
                        printf("���~�Ч勵\n\a");
                    }
            }
     
            while(1)
            {
                puts("��J���z���Z");
                fflush(stdin);
                
                scanf("%d",&sic[i]);
                if(sic[i]>=0&&sic[i]<=100)
                {
                    break;
                }
                    else
                    {
                        system("CLS");
                        printf("���~�Ч勵\n\a");
                    }
            }
     
            while(1)
            {
                puts("�п�J�^�妨�Z");
                fflush(stdin);
                
                scanf("%d",&eng[i]);
                if(eng[i]>=0&&eng[i]<=100)
                {
                    break;
                }
                    else
                    {
                        system("CLS");
                        printf("���~�Ч勵\n\a");
                    }
            }
            
            
            avg[i]=(float)((math[i]+sic[i]+eng[i])/3);
            }
    
    
        system("pause");
        break;
        
        
        case'b':            /*��ϥΪ̿�J��b���A�h�M���ù��A�æb�ù��W��ܩҦ��ǥͪ��m�W�B�Ǹ��B�U�즨�Z�A�έӤH���������Z(���ܤ@��p��)*/
        case'B':
        system("CLS");
        if(n==0)
        {
            printf("�а���a!");
            system("pause");
            break;
        }
    
    
        for(i=0;i<n;i++)
        {
            printf("�m�W%6s  �Ǹ�%6s   �ƾ�%3d   ���z%3d   �^��%3d  ����%4.1f\n",name[i],number[i],math[i],sic[i],eng[i],avg[i]);
        }
        
        system("pause");
        break;
        
    
        
        
        
        
        
        
