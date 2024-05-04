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
	printf("┴┬┴／＼　／　　　　　　＼\n");
	printf("┬┴／　　　　　　　／　　　）\n");
	printf("┴┬▏　　　　　　　　●　　▏\n");
	printf("┬┴▏　　　　　　　　　　　▔█\n"); 
	printf("┴◢██◣　　　　　　 ＼＿＿／\n");
	printf("┬█████◣　　　　　　　／\n");
	printf("┴█████████████◣\n");
	printf("◢██████████████▆▄\n");
	printf("◢██████████████▆▄\n");
	printf("█◤◢██◣◥█████████◤＼\n");
	printf("◥◢████　████████◤　　 ＼\n");
	printf("┴█████　██████◤　　　　　 ＼\n");
	printf("┬│　　　│█████◤　　　　　　　　▏\n");
	printf("┴│　　　│　　　　　　　　　　　　　　▏\n");
	printf("┬／　　　／　　　　／▔▔▔＼　　　　 ／\n");
	printf("*／＿＿_／＼　　　／　　　　　 ＼　　／＼\n");
	printf("┬┴┬┴┬┴＼ 　　 ＼_　　　　　＼／　　＼\n");
	printf("┴┬┴┬┴┬┴ ＼＿＿＿＼　　　　 ＼／▔＼＼／▔＼\n");
	printf("�蹠蹠蹠蹠蹠蹠蹠蹠蹠蹠蹠蹠蹠艟@　　 ／　 ／▔＼　\n");
	system("pause");                                /*螢幕畫面暫停，並等待使用者按任意鍵 */
	system("cls");                                  /*清除螢幕*/
	
	
	char ps[5]="2024";
	char en[5];
	int n=1,r,p,m=0;
	char e,t,c
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
			printf("* * * * * * * * * * * * * * * * *");  
			printf("*  輸入A/a→畫出n階直角三角形   *");
			printf("*  輸入B/b→顯示九九乘法表      *");
			printf("*  輸入C/c→結束                *");
			printf("* * * * * * * * * * * * * * * * *");
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
 
