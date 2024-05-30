#include<stdio.h>                                     /*把stdio.h這個檔案含括進來，提供標準輸入輸出功能*/
#include<stdlib.h>                                    /*把stdlib.h這個檔案含括進來，提供常用的庫函數如動態內存分配、程序控制等*/
#include<string.h>                                    /*把string.h這個檔案含括進來，提供字符串操作函數*/
#include<conio.h>                                     /*載入conio.h標頭檔，用於控制台輸入輸出*/
#include<time.h>                                      /*取得時間與日期、對時間與日期資料操作及格式化的標頭檔*/

void son(void);                                       /*宣告一個名為son的函數*/
int i,j,z;                                            /*全局變量i, j, z*/

int main(void)                                        /*主函數main()從這開始*/
{
    printf("程式設計作業4\n");                        /*作業4 part 1:個人風格的封面*/
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
	
	
	int n=0, math[10], sic[10], eng[10];              /*初始化變量，學生成績數組*/
    int ok, math1[10], sic1[10], eng1[10];            /*排序時使用的備份成績數組*/
    float avg[10];                                    /*學生平均成績數組*/
    float avg1[10];                                   /*排序時使用的備份平均成績數組*/
    char name[10][9], number[10][9];                  /*學生姓名和學號數組*/
    char sw, name1[10][9], number1[10][9];            /*排序時使用的備份姓名和學號數組*/
    char find[9];                                     /*用於搜索的姓名數組*/
    char h[9], r[9];                                  /*排序時的臨時字符串*/
    float v;                                          /*排序時的臨時浮點數*/
    int k, u, l;                                      /*排序時的臨時整數變量*/
    
    son();                                            /*調用son函數*/
    printf("請輸入4位密碼:");                         /*提示用戶輸入密碼*/
    
    while(1)
    {
        int passworld;                                /*用於存儲輸入的密碼*/
        int count = 0;                                /*計數器，用於計算輸入密碼的次數*/
        
        scanf("%d",&passworld);                       /*讀取用戶輸入的密碼*/
        count++;                                      /*增加計數器*/
        if(passworld==2024)                           /*檢查密碼是否正確*/
        {
            break;                                    /*正確則跳出循環*/
        }
        else if(count<3)                              /*如果密碼錯誤且輸入次數少於3次*/
        {
            printf("請再次輸入");                    /*提示用戶再次輸入*/
        }
        else                                          /*輸入錯誤達到3次*/
        {
            printf("錯3次!再見!\a");                 /*提示用戶錯誤次數達到3次並結束程序*/
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
        fflush(stdin);                                 /*清除輸入緩衝區*/
        sw=getche();                                   /*讀取用戶輸入的選項*/
        
        switch(sw)
        { 
            case 'a':                              /*使用者若輸入‘a’，則清除螢幕，出現提示字句，要求輸入n（5~10）的整數。依序讀入n筆學生姓名、學號（6位整數）、數學、物理、英文的成績（0~100分）。全部輸入完畢後，回到主選單。輸入過程中，任一步驟發生錯誤，立刻出現錯誤訊息並要求改正。*/
            case 'A':
            system("CLS");
            
            while(1)
            {
                printf("輸入5到10的整數: ");
                fflush(stdin);
                
                scanf("%d",&n);                     /*讀取用戶輸入的學生數量*/
                if(n >= 5 && n <= 10)               /*檢查輸入的數量是否在範圍內*/
                {
                    break;                          /*如果在範圍內，跳出循環*/
                }
                else
                {
                    system("CLS");                 /*清除螢幕並提示錯誤*/
                    printf("錯誤請改正\n\a"); 
                }
            }
            
            for(i = 0; i < n; i++)                 /*循環輸入學生信息和成績*/
            {
                system("CLS");
                puts("輸入學生姓名:");
                fflush(stdin);
                gets(name[i]);                      /*讀取學生姓名*/
     
                while(1)
                { 
                    puts("輸入學號:");
                    fflush(stdin);
                    gets(number[i]);                /*讀取學生學號*/
                    count = strlen(number[i]);
                    if(count == 6)                  /*檢查學號長度是否為6位*/
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
                    puts("輸入數學成績:");
                    fflush(stdin);
                    scanf("%d", &math[i]);         /*讀取數學成績*/
                    if(math[i] >= 0 && math[i] <= 100) /*檢查成績是否在範圍內*/
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
                    puts("輸入物理成績:");
                    fflush(stdin);
                    scanf("%d", &sic[i]);          /*讀取物理成績*/
                    if(sic[i] >= 0 && sic[i] <= 100) /*檢查成績是否在範圍內*/
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
                    puts("請輸入英文成績:");
                    fflush(stdin);
                    scanf("%d", &eng[i]);          /*讀取英文成績*/
                    if(eng[i] >= 0 && eng[i] <= 100) /*檢查成績是否在範圍內*/
                    {
                        break;
                    }
                    else
                    {
                        system("CLS");
                        printf("錯誤請改正\n\a");
                    }
                }
                
                avg[i] = (float)((math[i] + sic[i] + eng[i]) / 3); /*計算平均成績*/
            }
    
            system("pause");                      /*暫停程序，等待用戶操作*/
            break;
        
        case 'b':                                  /*當使用者輸入’b’，則清除螢幕，並在螢幕上顯示所有學生的姓名、學號、各科成績，及個人的平均成績(取至一位小數)*/
        case 'B':
            system("CLS");
            if(n == 0)                              /*檢查是否已經輸入學生成績*/
            {
                printf("請執行a!");                 /*如果沒有輸入，提示用戶先輸入成績*/
                system("pause");
                break;
            }
    
            for(i = 0; i < n; i++)                 /*顯示所有學生的成績和平均分*/
            {
                printf("姓名%6s  學號%6s   數學%3d   物理%3d   英文%3d  平均%4.1f\n", name[i], number[i], math[i], sic[i], eng[i], avg[i]);
            }
            
            system("pause");                       /*暫停程序，等待用戶操作*/
            break;
        
        case 'c':                                  /*當使用者輸入‘c’，則清除螢幕，並在螢幕上出現提示訊息，要求輸入要搜尋的姓名*/
        case 'C':
            system("CLS");
            printf("輸入姓名:");
            gets(find);                            /*讀取用戶輸入的搜尋姓名*/
            for(i = 0; i < n; i++)                 /*循環查找學生信息*/
            {
                ok = strcmp(find, name[i]);
                if(ok == 0)                        /*如果找到，顯示學生成績和平均分*/
                {
                    printf("姓名%6s  學號%6s   數學%3d   物理%3d  

 英文%3d  平均%4.1f\n", name[i], number[i], math[i], sic[i], eng[i], (float)(math[i] + sic[i] + eng[i]) / 3);
                    break;
                }
            }
            if(ok != 0)                            /*如果未找到，提示無資料*/
            {
                printf("資料無\n\a");
            }
            
            system("pause");                       /*暫停程序，等待用戶操作*/
            break;
    
        case 'd':                                  /*當使用者輸入‘d’，則清除螢幕，在螢幕上依平均成績的高低順序列出學生的姓名、學號及平均成績*/
        case 'D':
            system("CLS");
            
            for(i = 0; i < n; i++)                 /*備份成績和學生信息，用於排序*/
            {
                avg1[i] = avg[i];
                strcpy(name1[i], name[i]);
                strcpy(number1[i], number[i]);
                math1[i] = math[i];
                sic1[i] = sic[i];
                eng1[i] = eng[i];
            }
            for(i = 0; i < n; i++)                 /*排序成績，使用冒泡排序法*/
            {
                for(j = 0; j < n - 1; j++)
                {
                    if(avg[j] < avg[j + 1])
                    {
                        v = avg[j];
                        avg[j] = avg[j + 1];
                        avg[j + 1] = v;
                        
                        v = avg1[j];
                        avg1[j] = avg1[j + 1];
                        avg1[j + 1] = v;
                        
                        strcpy(h, name1[j]);
                        strcpy(name1[j], name1[j + 1]);
                        strcpy(name1[j + 1], h);
                        
                        strcpy(r, number1[j]);
                        strcpy(number1[j], number1[j + 1]);
                        strcpy(number1[j + 1], r);
                        
                        k = math1[j];
                        math1[j] = math1[j + 1];
                        math1[j + 1] = k;
                        
                        u = sic1[j];
                        sic1[j] = sic1[j + 1];
                        sic1[j + 1] = u;
                        
                        l = eng1[j];
                        eng1[j] = eng1[j + 1];
                        eng1[j + 1] = l;
                    }
                }
            }
            for(i = 0; i < n; i++)                 /*顯示排序後的成績和學生信息*/
            {
                printf("姓名%6s  學號%6s   數學%3d   物理%3d   英文%3d  平均%4.1f---\n", name1[i], number1[i], math1[i], sic1[i], eng1[i], avg1[i]);
            } 
            
            system("pause");                       /*暫停程序，等待用戶操作*/
            break;
        
        case 'e':                                  /*使用者若輸入‘e’，在螢幕上輸出‘確定離開？(y/n)’如果使用者輸入‘n’,則回到主選單*/
        case 'E':
            while(1)
            {
                system("cls");
                printf("程式結束?(y/n)");
                fflush(stdin);
                sw = getche();
                if(sw == 'y' || sw == 'Y')
                {
                    printf("\n程式結束\n");
                    system("pause");
                    return 0;                      /*如果使用者輸入‘y’，則結束程序回到作業系統。若是其他鍵，再問一次*/
                }
                else if(sw == 'n' || sw == 'N')
                {
                    break;                         /*如果使用者輸入‘n’，則返回主選單*/
                }
                else
                {
                    printf("\n請輸入(y/n)\n");
                    system("pause");
                    continue;                      /*如果輸入其他字符，提示重新輸入*/
                }
            }
            break;
        } 
    }
    
    system("pause");                               /*暫停程序，等待用戶操作*/
    return 0;
}

