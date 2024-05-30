#include<stdio.h>                                     /*把stdio.h這個檔案含括進來*/
#include<stdlib.h>                                    /*把stdlib.h這個檔案含括進來*/
#include<string.h>                                    /*把string.h這個檔案含括進來*/
#include<conio.h>                                     /*載入conio.h標頭檔*/ 
#include<time.h>                                      /*取得時間與日期、對時間與日期資料操作及格式化的標頭檔*/

void son(void);
int i,j,z;

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
    printf("請輸入4位密碼:");
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
            printf("請再次輸入");
        }
        else
        {
            printf("錯3次!再見!\a");
            return 0;
        }
    }
    while(1)
    {
        system("cls");                                 /*清除螢幕，螢幕出現主選單*/
        printf("------------------------------\n");
        printf("|  a. 輸入學生成績          |\n");
        printf("|  b. 顯示學生成績          |\n");
        printf("|  c. 搜尋學生成績          |\n");
        printf("|  d. 成績排名              |\n");
        printf("|  e. 系統結束              |\n");
        printf("------------------------------\n");
        fflush(stdin);
        sw=getche();
