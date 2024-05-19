#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <time.h>

void displaySeats(char seat[][9]) 
{
    int i, j;
    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9; j++) {
            printf("%c", seat[i][j]);
        }
        printf("\n");
    }
}

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
	
	
	
	
    char ps[5] = "2024";                                  
    char en[5];                                   
    int n = 1, r, p, m = 0, i, j;
    char e, t, c;
    char sw;
    do {                                                 /*要求使用者輸入4個數字的密碼(密碼值預設為2024)*/
        printf("請輸入密碼:");
        scanf("%s", en);
        if (strcmp(ps, en) == 0) {                       /*若密碼等於預設值*/ 
            break;
        } else if (n == 3) {                          /*若連續錯三次，則顯示警告訊息並結束程式*/
            printf("▲ 錯%d次!請重新登入\n", n);
            printf("\a");
            return 0;
        } else {            
            printf("▲ 錯%d次!\n", n);
            n++;
        }
    } while (n <= 3);     

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
    scanf("%c", &sw);
        
    /*作業3 part 3:在9*9的預設座位中產生10個被預訂的亂數座位*/
    char seat[9][9];                       
    for (i = 0; i < 9; i++) {               /*顯示9*9的預設座位*/ 
        for (j = 0; j < 9; j++) {
            seat[i][j] = '-';    
        }
    } 
    for (i = 0; i < 9; i++) {               /*先假設預定座位為第一列全部加上第二列第一個*/
        seat[0][i] = '*'; 
    }
    seat[1][0] = '*';

    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9; j++) {           /*取隨機變數給m和k,並交換seat[i][j]和seat[m][k]*/ 
            int m = rand() % 9, k = rand() % 9;
            char tmp;
            tmp = seat[i][j];
            seat[i][j] = seat[m][k];
            seat[m][k] = tmp; 
        }    
    }

    switch (sw) {
        case 'A':                           /*若使用者輸入'A'或'a'，則顯示在9*9的預設座位中產生10個被預訂的亂數座位*/ 
        case 'a': 
            system("CLS");
            for (i = 0; i < 9; i++) {
                for (j = 0; j < 9; j++) {
                    printf("%c", seat[i][j]);     
                }
                printf("\n");
            } 
            system("pause");                    /*使用者按下任何鍵則清除螢幕，並回到主選單*/
            system("cls");
            goto menu;
                
        case 'B':
        case 'b': {
            int backToMenu = 0;
            while (!backToMenu) {
                system("CLS");
                int numSeats;
                printf("需要多少座位 (1-4)? ");
                scanf("%d", &numSeats);
                getchar(); 

                if (numSeats < 1 || numSeats > 4) {
                    printf("無效的座位數量。返回主菜單\n");
                    system("pause");
                    system("cls");
                    break;
                }

                int found = 0;
                int startRow = -1, startCol = -1;

                for (i = 0; i < 9 && !found; i++) {
                    for (j = 0; j < 9 - numSeats + 1 && !found; j++) {
                        int k;
                        for (k = 0; k < numSeats; k++) {
                            if (seat[i][j + k] != '-') break;
                        }
                        if (k == numSeats) {
                            startRow = i;
                            startCol = j;
                            found = 1;
                        }
                    }
                }
                
                if (!found && numSeats == 4) {
                    for (i = 0; i < 8 && !found; i++) {
                        for (j = 0; j < 9 - 2 + 1 && !found; j++) {
                            if (seat[i][j] == '-' && seat[i][j + 1] == '-' &&
                                seat[i + 1][j] == '-' && seat[i + 1][j + 1] == '-') {
                                startRow = i;
                                startCol = j;
                                found = 1;
                            }
                        }
                    }
                }
                
                if (found) {
                    if (numSeats < 4) {
                        for (i = 0; i < numSeats; i++) {
                            seat[startRow][startCol + i] = '@';
                        }
                    } else {
                        seat[startRow][startCol] = '@';
                        seat[startRow][startCol + 1] = '@';
                        seat[startRow + 1][startCol] = '@';
                        seat[startRow + 1][startCol + 1] = '@';
                    }

                    displaySeats(seat);
                    char response;
                    printf("你對這個安排滿意嗎？ (y/n): ");
                    response = getchar();
                    getchar();
                    
                    if (response == 'y' || response == 'Y') {
                        if (numSeats < 4) {
                            for (i = 0; i < numSeats; i++) {
                                seat[startRow][startCol + i] = '*';
                            }
                        } else {
                            seat[startRow][startCol] = '*';
                            seat[startRow][startCol + 1] = '*';
                            seat[startRow + 1][startCol] = '*';
                            seat[startRow + 1][startCol + 1] = '*';
                        }
                        backToMenu = 1;
                    } else {
                        if (numSeats < 4) {
                            for (i = 0; i < numSeats; i++) {
                                seat[startRow][startCol + i] = '-';
                            }
                        } else {
                            seat[startRow][startCol] = '-';
                            seat[startRow][startCol + 1] = '-';
                            seat[startRow + 1][startCol] = '-';
                            seat[startRow + 1][startCol + 1] = '-';
                        }
                    }
                } else {
                    printf("抱歉，沒有找到合適的座位。\n");
                }

                system("pause");
                system("cls");
            }
            goto menu;
        }   
        case 'C':
        case 'c': {
            system("CLS");
            char input[5];
            int row, col;

            printf("需要自選幾個座位？（1-4）：");
            scanf("%s", input);
            int numSeats = atoi(input);

            while (numSeats < 1 || numSeats > 4) {
                printf("請輸入有效的座位數量（1-4）：");
                scanf("%s", input);
                numSeats = atoi(input);
            }

            for (i = 0; i < numSeats; i++) {
                printf("請輸入座位選擇（例如：1-2，2-9）：");
                scanf("%s", input);
                sscanf(input, "%d-%d", &row, &col);

            while (row < 1 || row > 9 || col < 1 || col > 9 || seat[row - 1][col - 1] != '-') {
                printf("無效的輸入或座位已被佔用。請再試一次。\n");
                printf("請輸入座位選擇（例如：1-2，2-9）：");
                scanf("%s", input);
                sscanf(input, "%d-%d", &row, &col);
            }

            seat[row - 1][col - 1] = '@';

            // 顯示座位表
            printf("\n座位表：\n");
            displaySeats(seat);
            }

            printf("\n按任意鍵確認您的選擇並返回主選單。\n");
            getchar();  // 等待使用者按下任意鍵
            system("pause");
            system("cls");
            goto menu;
        }
        case 'D':                           /*作業3 part 6:若使用者輸入'D'或'd'，則在螢幕上輸出‘Continue? (y/n)’詢問是要重新輸入？*/
        case 'd':
            system("CLS");
            restart_c:
            printf("Continue?(y/n)");
            fflush(stdin);
            scanf("%c", &c);
            if (c == 'y' || c == 'Y') {            /*若使用者輸入‘Y’或‘y’,則回到主選單*/
                system("CLS");
                goto menu;
            }
            if (c == 'n' || c == 'N') {          /*若使用者輸入的是‘N’或‘n’。則結束程式回到作業系統*/
                return 0;
            } else {                          /*若是輸入其他鍵，則出現錯誤訊息並要求重新輸入*/
                printf("▲ 輸入錯誤,請重新輸入!\n");
                goto restart_c;
            }
    }    
    system("pause");
    system("cls");
    return 0;                                    /*函數回傳整數0,此數值由系統接收*/ 
}

