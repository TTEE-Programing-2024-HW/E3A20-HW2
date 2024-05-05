#include<stdio.h>                                     /*把stdio.h這個檔案含括進來*/
#include<stdlib.h>                                    /*把stdlib.h這個檔案含括進來*/
#include<string.h>                                    /*把string.h這個檔案含括進來*/
#include<conio.h>                                     /*載入conio.h標頭檔*/
int main(void)                                        /*主函數main()從這開始*/
{
	printf("程式設計作業2\n");                        /*作業2 part 1:個人風格的封面*/
	printf("\n");
	printf("┴┬┴┬／￣＼＿／￣＼\n");
	printf("┬┴┬┴▏　　▏▔▔▔▔＼\n");
	printf("┴┬┴／＼　／　　　　　　﹨\n");
	printf("┬┴∕　　　　　　　／　　　）\n");
	printf("┴┬▏　　　　　　　　●　　▏\n");
	printf("┬┴▏　　　　　　　　　　　▔█\n"); 
	printf("┴◢██◣　　　　　　 ＼＿＿／\n");
	printf("┬█████◣　　　　　　　／\n");
	printf("┴█████████████◣\n");
	printf("◢██████████████▆▄\n");
	printf("◢██████████████▆▄\n");
	printf("█◤◢██◣◥█████████◤＼\n");
	printf("◥◢████　████████◤　　 ＼\n");
	printf("┴█████　██████◤　　　　　 ﹨\n");
	printf("┬│　　　│█████◤　　　　　　　　▏\n");
	printf("┴│　　　│　　　　　　　　　　　　　　▏\n");
	printf("┬∕　　　∕　　　　／▔▔▔＼　　　　 ∕\n");
	printf("*∕＿＿_／﹨　　　∕　　　　　 ＼　　／＼\n");
	printf("┬┴┬┴┬┴＼ 　　 ＼_　　　　　﹨／　　﹨\n");
	printf("┴┬┴┬┴┬┴ ＼＿＿＿＼　　　　 ﹨／▔＼﹨／▔＼\n");
	printf("╥╥╥╥╥╥╥╥╥╥╥╥╥╥＼　　 ∕　 ／▔﹨　\n");
	system("pause");                                /*螢幕畫面暫停，並等待使用者按任意鍵 */
	system("cls");                                  /*清除螢幕*/
	
	char ps[5]="2024";                                  
	char en[5];                                   
	int n=1,r,p,m=0;
	char e,t,c;
	char sw;
	
do{                                                 /*要求使用者輸入4個數字的密碼(密碼值預設為2024)*/
		printf("請輸入密碼:");
		scanf("%s",en);
		if(strcmp(ps,en)==0){
		break;
		}		
			else if(n==3){                          /*若連續錯三次，則顯示警告訊息並結束程式*/
			printf("▲ 錯%d次!請重新登入\n",n);
			printf("\a");
				return 0;
				}
			else{			
			printf("▲ 錯%d次!\n",n);
			n++;
			}
				
	}while(n<=3);	 

			system("CLS");                          /*作業2 part 2:清除螢幕，螢幕出現主選單*/
			menu:                              
			puts("* * * * * * * * * * * * * * * * *");  
			puts("*  輸入A/a→畫出n階直角三角形   *");
			puts("*  輸入B/b→顯示九九乘法表      *");
			puts("*  輸入C/c→結束                *");
			puts("* * * * * * * * * * * * * * * * *");
			printf("enter case:");                 /*要求使用者輸入一個字元(如主選單所示)*/
			fflush(stdin);
			scanf("%c",&sw);
			switch(sw)
			{
				case 'A':                          /*作業2 part 3:若使用者輸入‘A’或‘a’，則清除螢幕，並要求輸入一個‘a’到‘n’的字元ch*/
				case 'a':
					system("CLS");
					restart_a:
					printf("請輸入一個字元(a~n)\n");
					fflush(stdin);
				    scanf("%c",&e);
				    fflush(stdin);
				    r=e;  
				    p=e;  
				    
					if(e>='a'&&e<='n')             /*根據輸入值顯現一直角三角形*/ 
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
					else                           /*若ch不在‘a’至‘n’區間，則出現警告訊息並要求重新輸入ch*/
					{
						printf("▲ 輸入錯誤,請重新輸入!\n");
						goto restart_a;
					}
						system("pause");           /*使用者按下任何鍵則清除螢幕，並回到主選單*/ 
						system("cls");
						goto menu;
				case 'B':                          /*作業2 part 4:若使用者輸入‘B’或‘b’，要求使用者輸入一個1至9的整數n*/
				case 'b':
				restart_b:
					printf("請輸入一個數字(1~9):");	
					scanf("%d",&m);
					if(m>=1&&m<=9)                 /*根據輸入值產生1*1至n*n的九九乘法表*/
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
				    else                          /*若n不在1至9，則出現警告訊息並要求重新輸入n*/
					{
					    printf("▲ 輸入錯誤,請重新輸入!\n");
					    printf("\a");
					    goto restart_b;
				    }
				system("pause");                  /*使用者按下任何鍵則清除螢幕，並回到主選單*/
				system("CLS");
				goto menu;
				case 'C':                         /*作業2 part 5:若使用者輸入‘C’或‘c’，在螢幕上輸出‘Continue? (y/n)’詢問是要重新輸入？*/
				case 'c':
					restart_c:
					printf("Continue?(y/n)");
					fflush(stdin);
					scanf("%c",&c);
					if(c=='y'||c=='Y')            /*若使用者輸入‘Y’或‘y’,則回到主選單*/
					{
						system("CLS");
						goto menu;
					}
					if(c=='n' || c=='N')          /*若使用者輸入的是‘N’或‘n’。則結束程式回到作業系統*/
					{						
						return 0;
					}
					else                          /*若是輸入其他鍵，則出現錯誤訊息並要求重新輸入*/
					{
						printf("▲ 輸入錯誤,請重新輸入!\n");
						goto restart_c;
					}
				default:                          /*若是輸入非‘A’或‘a’‘B’或‘b’‘C’或‘c’，則出現錯誤訊息並要求重新輸入*/ 
					printf("▲ 輸入錯誤,請重新輸入!\n");
					system("pause");
					system("CLS");
					goto menu;
		}

    system("pause");
	system("cls");
	
	printf("心得:\n");
	printf("今天是第二次的程式作業，我花了三個小時才\n");
	printf("完成github的設定，這次的作業難度相較於第\n");
	printf("一次大大的提升了許多，但是對我來說，這是\n");
	printf("一個非常好的挑戰，不僅讓我把上課所學的各\n");
	printf("種程式混合並加以運用，還能讓自己了解還有\n");
	printf("哪些部分我還不太熟悉，甚至發現自己錯誤的\n");
	printf("地方並且改正它，所以要好好把握每次的作業\n");
	printf("，這樣程式才能更進步!");
	
	system("pause");
	return 0;                                    /*函數回傳整數0,此數值由系統接收*/ 
} 
	
