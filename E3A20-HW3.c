#include<stdio.h>                                     /*把stdio.h這個檔案含括進來*/
#include<stdlib.h>                                    /*把stdlib.h這個檔案含括進來*/
#include<string.h>                                    /*把string.h這個檔案含括進來*/
#include<conio.h>                                     /*載入conio.h標頭檔*/ 
#include<time.h>                                      /*取得時間與日期、對時間與日期資料操作及格式化的標頭檔*/
int main(void)                                        /*主函數main()從這開始*/
{
	printf("程式設計作業3\n");                        /*作業3 part 1:個人風格的封面*/
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
	int n=1,r,p,m=0,i,j;
	char e,t,c;
	char sw;
do{                                                 /*要求使用者輸入4個數字的密碼(密碼值預設為2024)*/
		printf("請輸入密碼:");
		scanf("%s",en);
		if(strcmp(ps,en)==0){                       /*若密碼等於預設值*/ 
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

			system("CLS");                          /*作業3 part 2:清除螢幕，螢幕出現主選單*/
			menu:                              
			puts("* * * * *[選 位 系 統]* * * * *");  
			puts("*       a. 顯示現有座位       *");
			puts("*       b. 電腦排位           *");
			puts("*       c. 自主選位           *");
			puts("*       d. 選位結束           *");
			puts("* * * * * * * * * * * * * * * *");
			printf("請輸入一個選項:");              /*要求使用者輸入一個字元(如主選單所示)*/
			fflush(stdin);
			scanf("%c",&sw);
			                                        /*作業3 part 3:在9*9的預設座位中產生10個被預訂的亂數座位*/
            char seat [9][9];                       
			for(i=0;i<9;i++)                        /*顯示9*9的預設座位*/ 
			{
				for(j=0;j<9;j++)
				{
					seat[i][j]='-';	 
				}
					
			} 
			for(i=0;i<9;i++)                        /*先假設預定座位為第一列全部加上第二列第一個*/
			{
				seat[0][i]='*'; 
			}
			seat[1][0]='*';
	        
	        for(i=0;i<9;i++)
	        {
	            
	            for(j=0;j<9;j++)                    /*取隨機變數給m和k,並交換seat[i][j]和seat[m][k]*/ 
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
				case 'A':                           /*若使用者輸入'A'或'a'，則顯示在9*9的預設座位中產生10個被預訂的亂數座位*/ 
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
				system("pause");                    /*使用者按下任何鍵則清除螢幕，並回到主選單*/
				system("cls");
				goto menu;

