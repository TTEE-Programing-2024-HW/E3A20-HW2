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
        
        switch(sw)
        { 
            case'a':                              /*使用者若輸入‘a’，則清除螢幕，出現提示字句，要求輸入n（5~10）的整數。依序讀入n筆學生姓名、學號（6位整數）、數學、物理、英文的成績（0~100分）。全部輸入完畢後，回到主選單。輸入過程中，任一步驟發生錯誤，立刻出現錯誤訊息並要求改正。*/
            case'A':
            system("CLS");
            
            while(1)
            {
                printf("輸入5到10的整數");
                fflush(stdin);
                
                scanf("%d",&n);
                if(n>=5&&n<=10)
                {
                    break;
                }
                    else
                    {
                        system("CLS");
                        printf("錯誤請改正\n\a"); 
                    }
            }
            
            for(i=0;i<n;i++)
            {
                system("CLS");
                puts("輸入學生姓名");
                fflush(stdin);
                gets(name[i]);
     
            while(1)
            { 
                puts("輸入學號");
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
                        printf("錯誤請改正\n\a");
                    } 
            }
     
            while(1)
            {
                puts("輸入數學成績");
                fflush(stdin);
                
                scanf("%d",&math[i]);
                if(math[i]>=0&&math[i]<=100)
                {
                    break;
                }
                    else
                    {
                        system("CLS");
                        printf("錯誤請改正\n\a");
                    }
            }
     
            while(1)
            {
                puts("輸入物理成績");
                fflush(stdin);
                
                scanf("%d",&sic[i]);
                if(sic[i]>=0&&sic[i]<=100)
                {
                    break;
                }
                    else
                    {
                        system("CLS");
                        printf("錯誤請改正\n\a");
                    }
            }
     
            while(1)
            {
                puts("請輸入英文成績");
                fflush(stdin);
                
                scanf("%d",&eng[i]);
                if(eng[i]>=0&&eng[i]<=100)
                {
                    break;
                }
                    else
                    {
                        system("CLS");
                        printf("錯誤請改正\n\a");
                    }
            }
            
            
            avg[i]=(float)((math[i]+sic[i]+eng[i])/3);
            }
    
    
        system("pause");
        break;
        
        
        case'b':            /*當使用者輸入’b’，則清除螢幕，並在螢幕上顯示所有學生的姓名、學號、各科成績，及個人的平均成績(取至一位小數)*/
        case'B':
        system("CLS");
        if(n==0)
        {
            printf("請執行a!");
            system("pause");
            break;
        }
    
    
        for(i=0;i<n;i++)
        {
            printf("姓名%6s  學號%6s   數學%3d   物理%3d   英文%3d  平均%4.1f\n",name[i],number[i],math[i],sic[i],eng[i],avg[i]);
        }
        
        system("pause");
        break;
        
    
        
        
        
        
        
        
