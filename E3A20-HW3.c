#include<stdio.h>                                     /*��stdio.h�o���ɮקt�A�i��*/
#include<stdlib.h>                                    /*��stdlib.h�o���ɮקt�A�i��*/
#include<string.h>                                    /*��string.h�o���ɮקt�A�i��*/
#include<conio.h>                                     /*���Jconio.h���Y��*/ 
#include<time.h>                                      /*���o�ɶ��P����B��ɶ��P�����ƾާ@�ή榡�ƪ����Y��*/
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
	
	char ps[5]="2024";                                  
	char en[5];                                   
	int n=1,r,p,m=0,i,j;
	char e,t,c;
	char sw;
do{                                                 /*�n�D�ϥΪ̿�J4�ӼƦr���K�X(�K�X�ȹw�]��2024)*/
		printf("�п�J�K�X:");
		scanf("%s",en);
		if(strcmp(ps,en)==0){                       /*�Y�K�X����w�]��*/ 
		break;
		}		
			else if(n==3){                          /*�Y�s����T���A�h���ĵ�i�T���õ����{��*/
			printf("�� ��%d��!�Э��s�n�J\n",n);
			printf("\a");
				return 0;
				}
			else{			
			printf("�� ��%d��!\n",n);
			n++;
			}
				
	}while(n<=3);	 

			system("CLS");                          /*�@�~3 part 2:�M���ù��A�ù��X�{�D���*/
			menu:                              
			puts("* * * * *[�� �� �t ��]* * * * *");  
			puts("*       a. ��ܲ{���y��       *");
			puts("*       b. �q���Ʀ�           *");
			puts("*       c. �ۥD���           *");
			puts("*       d. ��쵲��           *");
			puts("* * * * * * * * * * * * * * * *");
			printf("�п�J�@�ӿﶵ:");              /*�n�D�ϥΪ̿�J�@�Ӧr��(�p�D���ҥ�)*/
			fflush(stdin);
			scanf("%c",&sw);
			                                        /*�@�~3 part 3:�b9*9���w�]�y�줤����10�ӳQ�w�q���üƮy��*/
            char seat [9][9];                       
			for(i=0;i<9;i++)                        /*���9*9���w�]�y��*/ 
			{
				for(j=0;j<9;j++)
				{
					seat[i][j]='-';	 
				}
					
			} 
			for(i=0;i<9;i++)                        /*�����]�w�w�y�쬰�Ĥ@�C�����[�W�ĤG�C�Ĥ@��*/
			{
				seat[0][i]='*'; 
			}
			seat[1][0]='*';
	        
	        for(i=0;i<9;i++)
	        {
	            
	            for(j=0;j<9;j++)                    /*���H���ܼƵ�m�Mk,�å洫seat[i][j]�Mseat[m][k]*/ 
				{
					int m=rand()%9,k=rand()%9;
					char tmp;
					tmp=seat[i][j];
					seat[i][j]=seat[m][k];
					seat[m][k]=tmp; 
				}	
			}
			switch(sw)
			{
				case 'A':                           /*�Y�ϥΪ̿�J'A'��'a'�A�h��ܦb9*9���w�]�y�줤����10�ӳQ�w�q���üƮy��*/ 
				case 'a': 
			    system("CLS");
				for(i=0;i<9;i++)
				{
					for(j=0;j<9;j++)
					{
						printf("%c",seat[i][j]);	 
					}
					printf("\n");
				} 
				system("pause");                    /*�ϥΪ̫��U������h�M���ù��A�æ^��D���*/
				system("cls");
				goto menu;

