#include<stdio.h>                                     /*��stdio.h�o���ɮקt�A�i�ӡA���Ѽзǿ�J��X�\��*/
#include<stdlib.h>                                    /*��stdlib.h�o���ɮקt�A�i�ӡA���ѱ`�Ϊ��w��Ʀp�ʺA���s���t�B�{�Ǳ��*/
#include<string.h>                                    /*��string.h�o���ɮקt�A�i�ӡA���Ѧr�Ŧ�ާ@���*/
#include<conio.h>                                     /*���Jconio.h���Y�ɡA�Ω󱱨�x��J��X*/
#include<time.h>                                      /*���o�ɶ��P����B��ɶ��P�����ƾާ@�ή榡�ƪ����Y��*/

void son(void);                                       /*�ŧi�@�ӦW��son�����*/
int i,j,z;                                            /*�����ܶqi, j, z*/

int main(void)                                        /*�D���main()�q�o�}�l*/
{
    printf("�{���]�p�@�~4\n");                        /*�@�~4 part 1:�ӤH���檺�ʭ�*/
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
	
	
	int n=0, math[10], sic[10], eng[10];              /*��l���ܶq�A�ǥͦ��Z�Ʋ�*/
    int ok, math1[10], sic1[10], eng1[10];            /*�ƧǮɨϥΪ��ƥ����Z�Ʋ�*/
    float avg[10];                                    /*�ǥͥ������Z�Ʋ�*/
    float avg1[10];                                   /*�ƧǮɨϥΪ��ƥ��������Z�Ʋ�*/
    char name[10][9], number[10][9];                  /*�ǥͩm�W�M�Ǹ��Ʋ�*/
    char sw, name1[10][9], number1[10][9];            /*�ƧǮɨϥΪ��ƥ��m�W�M�Ǹ��Ʋ�*/
    char find[9];                                     /*�Ω�j�����m�W�Ʋ�*/
    char h[9], r[9];                                  /*�ƧǮɪ��{�ɦr�Ŧ�*/
    float v;                                          /*�ƧǮɪ��{�ɯB�I��*/
    int k, u, l;                                      /*�ƧǮɪ��{�ɾ���ܶq*/
    
    son();                                            /*�ե�son���*/
    printf("�п�J4��K�X:");                         /*���ܥΤ��J�K�X*/
    
    while(1)
    {
        int passworld;                                /*�Ω�s�x��J���K�X*/
        int count = 0;                                /*�p�ƾ��A�Ω�p���J�K�X������*/
        
        scanf("%d",&passworld);                       /*Ū���Τ��J���K�X*/
        count++;                                      /*�W�[�p�ƾ�*/
        if(passworld==2024)                           /*�ˬd�K�X�O�_���T*/
        {
            break;                                    /*���T�h���X�`��*/
        }
        else if(count<3)                              /*�p�G�K�X���~�B��J���Ƥ֩�3��*/
        {
            printf("�ЦA����J");                    /*���ܥΤ�A����J*/
        }
        else                                          /*��J���~�F��3��*/
        {
            printf("��3��!�A��!\a");                 /*���ܥΤ���~���ƹF��3���õ����{��*/
            return 0;
        }
    }
    
    while(1)
    {
        system("cls");                                 /*�M���ù��A�ù��X�{�D���*/
        printf("------------------------------\n");
        printf("|  a. ��J�ǥͦ��Z          |\n");
        printf("|  b. ��ܾǥͦ��Z          |\n");
        printf("|  c. �j�M�ǥͦ��Z          |\n");
        printf("|  d. ���Z�ƦW              |\n");
        printf("|  e. �t�ε���              |\n");
        printf("------------------------------\n");
        fflush(stdin);                                 /*�M����J�w�İ�*/
        sw=getche();                                   /*Ū���Τ��J���ﶵ*/
        
        switch(sw)
        { 
            case 'a':                              /*�ϥΪ̭Y��J��a���A�h�M���ù��A�X�{���ܦr�y�A�n�D��Jn�]5~10�^����ơC�̧�Ū�Jn���ǥͩm�W�B�Ǹ��]6���ơ^�B�ƾǡB���z�B�^�媺���Z�]0~100���^�C������J������A�^��D���C��J�L�{���A���@�B�J�o�Ϳ��~�A�ߨ�X�{���~�T���ín�D�勵�C*/
            case 'A':
            system("CLS");
            
            while(1)
            {
                printf("��J5��10�����: ");
                fflush(stdin);
                
                scanf("%d",&n);                     /*Ū���Τ��J���ǥͼƶq*/
                if(n >= 5 && n <= 10)               /*�ˬd��J���ƶq�O�_�b�d��*/
                {
                    break;                          /*�p�G�b�d�򤺡A���X�`��*/
                }
                else
                {
                    system("CLS");                 /*�M���ù��ô��ܿ��~*/
                    printf("���~�Ч勵\n\a"); 
                }
            }
            
            for(i = 0; i < n; i++)                 /*�`����J�ǥͫH���M���Z*/
            {
                system("CLS");
                puts("��J�ǥͩm�W:");
                fflush(stdin);
                gets(name[i]);                      /*Ū���ǥͩm�W*/
     
                while(1)
                { 
                    puts("��J�Ǹ�:");
                    fflush(stdin);
                    gets(number[i]);                /*Ū���ǥ;Ǹ�*/
                    count = strlen(number[i]);
                    if(count == 6)                  /*�ˬd�Ǹ����׬O�_��6��*/
                    {
                        break;
                    }
                    else
                    {
                        system("CLS");
                        printf("���~�Ч勵\n\a");
                    } 
                }
     
                while(1)
                {
                    puts("��J�ƾǦ��Z:");
                    fflush(stdin);
                    scanf("%d", &math[i]);         /*Ū���ƾǦ��Z*/
                    if(math[i] >= 0 && math[i] <= 100) /*�ˬd���Z�O�_�b�d��*/
                    {
                        break;
                    }
                    else
                    {
                        system("CLS");
                        printf("���~�Ч勵\n\a");
                    }
                }
     
                while(1)
                {
                    puts("��J���z���Z:");
                    fflush(stdin);
                    scanf("%d", &sic[i]);          /*Ū�����z���Z*/
                    if(sic[i] >= 0 && sic[i] <= 100) /*�ˬd���Z�O�_�b�d��*/
                    {
                        break;
                    }
                    else
                    {
                        system("CLS");
                        printf("���~�Ч勵\n\a");
                    }
                }
     
                while(1)
                {
                    puts("�п�J�^�妨�Z:");
                    fflush(stdin);
                    scanf("%d", &eng[i]);          /*Ū���^�妨�Z*/
                    if(eng[i] >= 0 && eng[i] <= 100) /*�ˬd���Z�O�_�b�d��*/
                    {
                        break;
                    }
                    else
                    {
                        system("CLS");
                        printf("���~�Ч勵\n\a");
                    }
                }
                
                avg[i] = (float)((math[i] + sic[i] + eng[i]) / 3); /*�p�⥭�����Z*/
            }
    
            system("pause");                      /*�Ȱ��{�ǡA���ݥΤ�ާ@*/
            break;
        
        case 'b':                                  /*��ϥΪ̿�J��b���A�h�M���ù��A�æb�ù��W��ܩҦ��ǥͪ��m�W�B�Ǹ��B�U�즨�Z�A�έӤH���������Z(���ܤ@��p��)*/
        case 'B':
            system("CLS");
            if(n == 0)                              /*�ˬd�O�_�w�g��J�ǥͦ��Z*/
            {
                printf("�а���a!");                 /*�p�G�S����J�A���ܥΤ����J���Z*/
                system("pause");
                break;
            }
    
            for(i = 0; i < n; i++)                 /*��ܩҦ��ǥͪ����Z�M������*/
            {
                printf("�m�W%6s  �Ǹ�%6s   �ƾ�%3d   ���z%3d   �^��%3d  ����%4.1f\n", name[i], number[i], math[i], sic[i], eng[i], avg[i]);
            }
            
            system("pause");                       /*�Ȱ��{�ǡA���ݥΤ�ާ@*/
            break;
        
        case 'c':                                  /*��ϥΪ̿�J��c���A�h�M���ù��A�æb�ù��W�X�{���ܰT���A�n�D��J�n�j�M���m�W*/
        case 'C':
            system("CLS");
            printf("��J�m�W:");
            gets(find);                            /*Ū���Τ��J���j�M�m�W*/
            for(i = 0; i < n; i++)                 /*�`���d��ǥͫH��*/
            {
                ok = strcmp(find, name[i]);
                if(ok == 0)                        /*�p�G���A��ܾǥͦ��Z�M������*/
                {
                    printf("�m�W%6s  �Ǹ�%6s   �ƾ�%3d   ���z%3d  

 �^��%3d  ����%4.1f\n", name[i], number[i], math[i], sic[i], eng[i], (float)(math[i] + sic[i] + eng[i]) / 3);
                    break;
                }
            }
            if(ok != 0)                            /*�p�G�����A���ܵL���*/
            {
                printf("��ƵL\n\a");
            }
            
            system("pause");                       /*�Ȱ��{�ǡA���ݥΤ�ާ@*/
            break;
    
        case 'd':                                  /*��ϥΪ̿�J��d���A�h�M���ù��A�b�ù��W�̥������Z�����C���ǦC�X�ǥͪ��m�W�B�Ǹ��Υ������Z*/
        case 'D':
            system("CLS");
            
            for(i = 0; i < n; i++)                 /*�ƥ����Z�M�ǥͫH���A�Ω�Ƨ�*/
            {
                avg1[i] = avg[i];
                strcpy(name1[i], name[i]);
                strcpy(number1[i], number[i]);
                math1[i] = math[i];
                sic1[i] = sic[i];
                eng1[i] = eng[i];
            }
            for(i = 0; i < n; i++)                 /*�ƧǦ��Z�A�ϥΫ_�w�ƧǪk*/
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
            for(i = 0; i < n; i++)                 /*��ܱƧǫ᪺���Z�M�ǥͫH��*/
            {
                printf("�m�W%6s  �Ǹ�%6s   �ƾ�%3d   ���z%3d   �^��%3d  ����%4.1f---\n", name1[i], number1[i], math1[i], sic1[i], eng1[i], avg1[i]);
            } 
            
            system("pause");                       /*�Ȱ��{�ǡA���ݥΤ�ާ@*/
            break;
        
        case 'e':                                  /*�ϥΪ̭Y��J��e���A�b�ù��W��X���T�w���}�H(y/n)���p�G�ϥΪ̿�J��n��,�h�^��D���*/
        case 'E':
            while(1)
            {
                system("cls");
                printf("�{������?(y/n)");
                fflush(stdin);
                sw = getche();
                if(sw == 'y' || sw == 'Y')
                {
                    printf("\n�{������\n");
                    system("pause");
                    return 0;                      /*�p�G�ϥΪ̿�J��y���A�h�����{�Ǧ^��@�~�t�ΡC�Y�O��L��A�A�ݤ@��*/
                }
                else if(sw == 'n' || sw == 'N')
                {
                    break;                         /*�p�G�ϥΪ̿�J��n���A�h��^�D���*/
                }
                else
                {
                    printf("\n�п�J(y/n)\n");
                    system("pause");
                    continue;                      /*�p�G��J��L�r�šA���ܭ��s��J*/
                }
            }
            break;
        } 
    }
    
    system("pause");                               /*�Ȱ��{�ǡA���ݥΤ�ާ@*/
    return 0;
}

