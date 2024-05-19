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

int main(void)                                        /*�D���main()�q�o�}�l*/
{
    char ps[5] = "2024";                                  
    char en[5];                                   
    int n = 1, r, p, m = 0, i, j;
    char e, t, c;
    char sw;
    do {                                                 /*�n�D�ϥΪ̿�J4�ӼƦr���K�X(�K�X�ȹw�]��2024)*/
        printf("�п�J�K�X:");
        scanf("%s", en);
        if (strcmp(ps, en) == 0) {                       /*�Y�K�X����w�]��*/ 
            break;
        } else if (n == 3) {                          /*�Y�s����T���A�h���ĵ�i�T���õ����{��*/
            printf("�� ��%d��!�Э��s�n�J\n", n);
            printf("\a");
            return 0;
        } else {            
            printf("�� ��%d��!\n", n);
            n++;
        }
    } while (n <= 3);     

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
    scanf("%c", &sw);
        
    /*�@�~3 part 3:�b9*9���w�]�y�줤����10�ӳQ�w�q���üƮy��*/
    char seat[9][9];                       
    for (i = 0; i < 9; i++) {               /*���9*9���w�]�y��*/ 
        for (j = 0; j < 9; j++) {
            seat[i][j] = '-';    
        }
    } 
    for (i = 0; i < 9; i++) {               /*�����]�w�w�y�쬰�Ĥ@�C�����[�W�ĤG�C�Ĥ@��*/
        seat[0][i] = '*'; 
    }
    seat[1][0] = '*';

    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9; j++) {           /*���H���ܼƵ�m�Mk,�å洫seat[i][j]�Mseat[m][k]*/ 
            int m = rand() % 9, k = rand() % 9;
            char tmp;
            tmp = seat[i][j];
            seat[i][j] = seat[m][k];
            seat[m][k] = tmp; 
        }    
    }

    switch (sw) {
        case 'A':                           /*�Y�ϥΪ̿�J'A'��'a'�A�h��ܦb9*9���w�]�y�줤����10�ӳQ�w�q���üƮy��*/ 
        case 'a': 
            system("CLS");
            for (i = 0; i < 9; i++) {
                for (j = 0; j < 9; j++) {
                    printf("%c", seat[i][j]);     
                }
                printf("\n");
            } 
            system("pause");                    /*�ϥΪ̫��U������h�M���ù��A�æ^��D���*/
            system("cls");
            goto menu;
                
        case 'B':
        case 'b': {
            int backToMenu = 0;
            while (!backToMenu) {
                system("CLS");
                int numSeats;
                printf("�ݭn�h�֮y�� (1-4)? ");
                scanf("%d", &numSeats);
                getchar(); 

                if (numSeats < 1 || numSeats > 4) {
                    printf("�L�Ī��y��ƶq�C��^�D���\n");
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
                    printf("�A��o�Ӧw�ƺ��N�ܡH (y/n): ");
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
                    printf("��p�A�S�����X�A���y��C\n");
                }

                system("pause");
                system("cls");
            }
            goto menu;
        }   
        case 'C':
        case 'c': {
            system("CLS");
            int row, col;
            char input[5];
            int valid = 1;

            while (1) {
                // ���ܨϥΪ̿�J�y����
                printf("�п�J�y���ܡ]�Ҧp�G1-2�A2-9�^�G ");
                fgets(input, sizeof(input), stdin);
                    
                // �ѪR��J���y��
                if (sscanf(input, "%d-%d", &row, &col) != 2 || row < 1 || row > 9 || col < 1 || col > 9 || seat[row - 1][col - 1] != '-') {
                    // �p�G��J�榡���~�ήy��w�Q��ܡA��ܿ��~�T��
                    printf("�L�Ī���J�ήy��w�Q���ΡC�ЦA�դ@���C\n");
                } else {
                    // �p�G��J���T�A�аO�y�쬰 '@'
                    seat[row - 1][col - 1] = '@';
                    break;
                }
            }
                
            // ��ܮy���
            displaySeats(seat);
            printf("�����N��T�{�z����ܨê�^�D���C\n");
            getchar();
                
            // �N '@' ������ '*'
            for (i = 0; i < 9; i++) {
                for (j = 0; j < 9; j++) {
                    if (seat[i][j] == '@') {
                        seat[i][j] = '*';
                    }
                }
            }

            system("cls");
            break;
        }
        case 'D':                           /*�@�~3 part 6:�Y�ϥΪ̿�J'D'��'d'�A�h�b�ù��W��X��Continue? (y/n)���߰ݬO�n���s��J�H*/
        case 'd':
            system("CLS");
            restart_c:
            printf("Continue?(y/n)");
            fflush(stdin);
            scanf("%c", &c);
            if (c == 'y' || c == 'Y') {            /*�Y�ϥΪ̿�J��Y���Ρ�y��,�h�^��D���*/
                system("CLS");
                goto menu;
            }
            if (c == 'n' || c == 'N') {          /*�Y�ϥΪ̿�J���O��N���Ρ�n���C�h�����{���^��@�~�t��*/
                return 0;
            } else {                          /*�Y�O��J��L��A�h�X�{���~�T���ín�D���s��J*/
                printf("�� ��J���~,�Э��s��J!\n");
                goto restart_c;
            }
    }    
    system("pause");
    system("cls");
    return 0;                                    /*��Ʀ^�Ǿ��0,���ƭȥѨt�α���*/ 
}

