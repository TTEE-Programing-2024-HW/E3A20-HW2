#include<stdio.h>                                     /*��stdio.h�o���ɮקt�A�i��*/
#include<stdlib.h>                                    /*��stdlib.h�o���ɮקt�A�i��*/
#include<string.h>                                    /*��string.h�o���ɮקt�A�i��*/
#include<conio.h>                                     /*���Jconio.h���Y��*/
int main(void)                                        /*�D���main()�q�o�}�l*/
{
	printf("�{���]�p�@�~2\n");                        /*�@�~2 part 1:�ӤH���檺�ʭ�*/
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
	int n=1,r,p,m=0;
	char e,t,c;
	char sw;
	
do{                                                 /*�n�D�ϥΪ̿�J4�ӼƦr���K�X(�K�X�ȹw�]��2024)*/
		printf("�п�J�K�X:");
		scanf("%s",en);
		if(strcmp(ps,en)==0){
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

			system("CLS");                          /*�@�~2 part 2:�M���ù��A�ù��X�{�D���*/
			menu:                              
			puts("* * * * * * * * * * * * * * * * *");  
			puts("*  ��JA/a���e�Xn�������T����   *");
			puts("*  ��JB/b����ܤE�E���k��      *");
			puts("*  ��JC/c������                *");
			puts("* * * * * * * * * * * * * * * * *");
			printf("enter case:");                 /*�n�D�ϥΪ̿�J�@�Ӧr��(�p�D���ҥ�)*/
			fflush(stdin);
			scanf("%c",&sw);
			switch(sw)
			{
				case 'A':                          /*�@�~2 part 3:�Y�ϥΪ̿�J��A���Ρ�a���A�h�M���ù��A�ín�D��J�@�ӡ�a���졥n�����r��ch*/
				case 'a':
					system("CLS");
					restart_a:
					printf("�п�J�@�Ӧr��(a~n)\n");
					fflush(stdin);
				    scanf("%c",&e);
				    fflush(stdin);
				    r=e;  
				    p=e;  
				    
					if(e>='a'&&e<='n')             /*�ھڿ�J����{�@�����T����*/ 
					{
					    for(int i=0;i<=(r-97);i++)
					    {
					        p=i;
					        for(int n=1;n<=(r-97)-i;n++)
					        {
					            printf(" ");
					        }
					        for(int j=0;j<=i;j++)
					        {  
					            printf("%c",e-p);
					            p--;                 
					        }
					        printf("\n");
					    }
					}
					else                           /*�Ych���b��a���ܡ�n���϶��A�h�X�{ĵ�i�T���ín�D���s��Jch*/
					{
						printf("�� ��J���~,�Э��s��J!\n");
						goto restart_a;
					}
						system("pause");           /*�ϥΪ̫��U������h�M���ù��A�æ^��D���*/ 
						system("cls");
						goto menu;
				case 'B':                          /*�@�~2 part 4:�Y�ϥΪ̿�J��B���Ρ�b���A�n�D�ϥΪ̿�J�@��1��9�����n*/
				case 'b':
				restart_b:
					printf("�п�J�@�ӼƦr(1~9):");	
					scanf("%d",&m);
					if(m>=1&&m<=9)                 /*�ھڿ�J�Ȳ���1*1��n*n���E�E���k��*/
					{
					    for(int a=1;a<=m;a++)
						{
						    for(int b=1;b<=m;b++)
							{
						        printf("%d*%d=%d ",a,b,a*b);
					        }
					        printf("\n");
					    }
				    }
				    else                          /*�Yn���b1��9�A�h�X�{ĵ�i�T���ín�D���s��Jn*/
					{
					    printf("�� ��J���~,�Э��s��J!\n");
					    printf("\a");
					    goto restart_b;
				    }
				system("pause");                  /*�ϥΪ̫��U������h�M���ù��A�æ^��D���*/
				system("CLS");
				goto menu;
				case 'C':                         /*�@�~2 part 5:�Y�ϥΪ̿�J��C���Ρ�c���A�b�ù��W��X��Continue? (y/n)���߰ݬO�n���s��J�H*/
				case 'c':
					restart_c:
					printf("Continue?(y/n)");
					fflush(stdin);
					scanf("%c",&c);
					if(c=='y'||c=='Y')            /*�Y�ϥΪ̿�J��Y���Ρ�y��,�h�^��D���*/
					{
						system("CLS");
						goto menu;
					}
					if(c=='n' || c=='N')          /*�Y�ϥΪ̿�J���O��N���Ρ�n���C�h�����{���^��@�~�t��*/
					{						
						return 0;
					}
					else                          /*�Y�O��J��L��A�h�X�{���~�T���ín�D���s��J*/
					{
						printf("�� ��J���~,�Э��s��J!\n");
						goto restart_c;
					}
				default:                          /*�Y�O��J�D��A���Ρ�a����B���Ρ�b����C���Ρ�c���A�h�X�{���~�T���ín�D���s��J*/ 
					printf("�� ��J���~,�Э��s��J!\n");
					system("pause");
					system("CLS");
					goto menu;
		}

    system("pause");
	system("cls");
	
	printf("�߱o:\n");
	printf("���ѬO�ĤG�����{���@�~�A�ڪ�F�T�Ӥp�ɤ~\n");
	printf("����github���]�w�A�o�����@�~���׬۸����\n");
	printf("�@���j�j�����ɤF�\�h�A���O��ڨӻ��A�o�O\n");
	printf("�@�ӫD�`�n���D�ԡA�������ڧ�W�ҩҾǪ��U\n");
	printf("�ص{���V�X�å[�H�B�ΡA�ٯ����ۤv�F���٦�\n");
	printf("���ǳ������٤��Ӽ��x�A�Ʀܵo�{�ۤv���~��\n");
	printf("�a��åB�勵���A�ҥH�n�n�n�ⴤ�C�����@�~\n");
	printf("�A�o�˵{���~���i�B!");
	
	system("pause");
	return 0;                                    /*��Ʀ^�Ǿ��0,���ƭȥѨt�α���*/ 
} 
	
