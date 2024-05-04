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

