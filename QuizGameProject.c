#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>
#include <string.h>

void help();
void read_scoreboard();
void reset_score();
void password();
void view_score(float score, char playername[20]);

int  main()
{
    system("color F3");
    char playername[50];
    float score;
    printf("\n\n\n\n\n");
    printf("                   Register Your Name: ");
    gets(playername);
    password();
    fflush(stdin);
    MainMenu:
    system("cls");

    char questions,choice;
    int count=0;


    printf("\n\n\n\n\t\t                  _______________________________________________________");
    printf("\n\n\t\t                            WELCOME %s TO THE QUIZ GAME !!!!",playername);
    printf("\n \t\t                       ........................................");
    printf("\n\t \t                         ____________________________________");
    printf("\n \t\t                       ........................................");
    printf("\n\n\t\t                              !!! BECOME A MILLIONAIRE !!!    ") ;

    printf("\n\t                          ________________________________________________________");
    printf("\n\n\t                              > Press S to Start the Game");
    printf("\n\t                              > Press V to View the Scoreboard  ");
    printf("\n\t                              > press H for Help and Instructions");
    printf("\n\t                              > Press R to Reset the score");
    printf("\n\t                              > press E to Exit");
    fflush(stdin);
    printf("\n\t                              > Enter Your Choice : ", choice );


    choice=toupper(getchar());
    fflush(stdin);

    if (choice=='H')
    {
        system("cls");
        help();
        getch();
        goto MainMenu;
    }

    else if
    (choice=='V')
    {
        system("cls");
        read_scoreboard();
        getch();
        goto MainMenu;
    }
    else if
    (choice=='R')
    {
        system("cls");
        reset_score();
        getch();
        goto MainMenu;
    }




    else if (choice=='E')
        exit(1);
    else if(choice=='S')
    {
        system("cls");
        printf("\n\n\t\t               !!!!!!!!!!!!! ALL THE BEST !!!!!!!!!!!!!");
        printf("\n\n\n \t[There will be 10 Questions.....If any Question is answered wrong then the game will end here.]");
        printf("\n\n\n \tPress 1  to start the game!\n");
        printf("\n\n\tPress any other key to return to the main menu!");
        printf("\n\n\tEnter your choice:");
        if (toupper(getchar())=='1')
        {
            goto Ques;
        }
        else
        {
            goto MainMenu;
            system("cls");
        }


Ques:
        system("cls");
        count=0;
        for(int i=1; i<=10; i++)
        {
            system("cls");
            questions=i;

            switch(questions)
            {
            case 1:

                printf("\n\n\n\n       1.Which country first invented cricket?");
                printf("\n\n          A) Bangladesh \tB) Australia  \n\n \t  C) England  \t\tD) India");
                printf("\n\n\n        Enter your choice(A/B/C/D):");
                fflush(stdin);
                if (toupper(getchar())=='C')
                {
                    printf("\n\n\n       Correct!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\n\n        Wrong!!! The correct answer is C) England.");
                    getch();
                    goto CountScore;
                    break;
                }


            case 2:
                printf("\n\n\n\n       2.Nelson Mandela was President of which country?");
                printf("\n\n         A) South Africa \t B)Brazil \n\n\t C) China \t         D) Bangladesh");
                printf("\n\n\n       Enter your choice(A/B/C/D):");
                fflush(stdin);
                if (toupper(getchar())=='A')
                {
                    printf("\n\n\n      Correct!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\n\n       Wrong!!! The correct answer is A) South Africa.");
                    getch();
                    goto CountScore;
                    break;
                }



            case 3:
                printf("\n\n        3.How many keyword's are there  in C Language?");
                printf("\n\n         A)0 \t B) 32 \n\n  \t C)48 \t D)255");
                printf("\n\n\n       Enter your choice(A/B/C/D):");
                fflush(stdin);
                if (toupper(getchar())=='B')
                {
                    printf("\n\n\n       Correct!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\n\n       Wrong!!! The correct answer is B) 32.");
                    getch();
                    goto CountScore;
                    break;
                }
            case 4:
                printf("\n\n         4.Sizeof()is a-------?");
                printf("\n\n         A)function \t B)variable \n\n \t C)Both a&b \t D)operator");
                printf("\n\n\n       Enter your choice(A/B/C/D): ");
                fflush(stdin);
                if (toupper(getchar())=='D')
                {
                    printf("\n\n\n       Correct!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\n\n        Wrong!!! The correct answer is D)operator");
                    getch();
                    goto CountScore;
                    break;
                }


            case 5:
                printf("\n\n             5.Why is 'Break'  statement  is used ?");
                printf("\n\n             A)Quit a program \t B)Quit the correct itration \n\n \t     C)none \t\t D)Both a&b");
                printf("\n\n\n           Enter your choice(A/B/C/D): ");
                fflush(stdin);
                if (toupper(getchar())=='B')
                {
                    printf("\n\n\n           Correct!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\n\n          Wrong!!! The correct answer is  B) Quit the correct itration");
                    getch();
                    goto CountScore;
                    break;
                }
            case 6:
                printf("\n\n            6.what will strcmp('apple','Apple')  return?");
                printf("\n\n            A)>0 \t B)<0 \n\n \t    C) nothing \t D) 0");
                printf("\n\n\n          Enter your choice(A/B/C/D): ");
                fflush(stdin);
                if (toupper(getchar())=='B')
                {
                    printf("\n\n\n          Correct!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\n\n          Wrong!!! The correct answer is B) <0");
                    getch();
                    goto CountScore;
                    break;
                }


            case 7:
                printf("\n\n          7.What is the range of int data type??");
                printf("\n\n          A)0 to 255 \t\t B)-127 to 128 \n\n \t  C)-32768 to 32767 \t D)none");
                printf("\n\n\n        Enter your choice(A/B/C/D): ");
                fflush(stdin);
                if (toupper(getchar())=='C')
                {
                    printf("\n\n\n         Correct!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\n\n         Wrong!!! The correct answer is C) -32768 to 32767");
                    getch();
                    goto CountScore;
                    break;
                }


            case 8:
                printf("\n\n         8.What is the smallest ocean in the world?");
                printf("\n\n         A) Indian \t  B) Pacific \n\n \t C) Atlantic \t  D) Arctic");
                printf("\n\n\n       Enter your choice(A/B/C/D): ");
                fflush(stdin);
                if (toupper(getchar())=='D')
                {
                    printf("\n\n\n      Correct!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\n\n      Wrong!!! The correct answer is D) Arctic");
                    getch();
                    goto CountScore;
                    break;
                }


            case 9:
                printf("\n\n        9.Who is the best Lab Instructor of CSE115 in NSU?");
                printf("\n\n        A) Shabbir Ahmed \t B) Minhazul Hoque  \n\n \tC) Shubroto Chowdhury \t D) Fahimul Hoque Shubho");
                printf("\n\n\n      Enter your choice(A/B/C/D): ");
                fflush(stdin);
                if (toupper(getchar())=='D')
                {
                    printf("\n\n\n       Correct!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\n\n         How can you possibly get this wrong!!");
                    getch();
                    goto CountScore;
                    break;
                }

            case 10:
                printf("\n\n         10.What is the best CSE 115 faculty in NSU?");
                printf("\n\n         A) TNS1 \t   B) MLE \n\n \t C) ARA2  \t   D) RJP");
                printf("\n\n\n       Enter your choice(A/B/C/D): ");
                fflush(stdin);
                if (toupper(getchar())=='A')
                {
                    printf("\n\n\n        Correct!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\n\n       Sorry it is TNS1 undoubtely!! ");
                    getch();
                    goto CountScore;
                    break;
                }




            }
        }


CountScore:
        system("cls");
        score=(float)count*100000;
        if(score>0.00 && score<1000000)
        {
            printf("\n\n\t\t**************** CONGRATULATION *************");
            printf("\n\n\t\t\t       You won $%.2f",score);
            goto label;
        }

        else if(score==1000000.00)

        {
            printf("\n\n\t\t**************** CONGRATULATION ************");
            printf("\n\n\t\t     !!!!!!YOU ARE A MILLIONAIRE!!!!!!!!!");
            printf("\n\n\t\t\t You won $%.2f",score);
            printf("\n\n\t\t\t Thank You!!");
        }
        else
        {
            printf("\n\n\t**** SORRY YOU DIDN'T WIN ANY CASH ****");
            printf("\n\t\t\n\t   Thanks for your participation!");
            goto label;
        }

label:

        puts("\n\n\n    Press any key to go to the MAIN MENU");
        puts("\n    Press 2 to EXIT the game");
        printf("\n    Enter your choice:");

        fflush(stdin);

        if (toupper(getchar())=='2')
        {   view_score(score,playername);
            fflush(stdin);
            exit(1);
        }
        else
        {
            view_score(score,playername);
            fflush(stdin);
            goto MainMenu;;
        }
    }
}
void help()
{
    printf("\n                                     ........");
    printf("\n                                     |!HELP!| ");
    printf("\n                                     ........ \n\n");
    printf("\n -------------------------------------------------------------------------");
    printf("\n .........................................................................");
    printf("\n    There will be 10 questions to answer:");
    printf("\n\n #  Each questions will have 4 options:");
    printf("\n #  Option A, B, C and D");
    printf("\n #  For each questions correct you will get price money.");
    printf("\n #  You will be asked questions continuously if you keep giving the right answers. ");
    printf("\n #  You can win up to ONE MILLION DOLLARS if all questions are answered correct. ");
    printf("\n #  No negative marking for wrong answers. ");
    printf("\n -------------------------------------------------------------------------");
    printf("\n .........................................................................");
    printf("\n                          !!!!BEST OF LUCK!!!!");
    printf("\n -------------------------------------------------------------------------");
    printf("\n .........................................................................");
    printf("\n");
}

void password()
{
    char pw[10];
    while(1)
    {

        system("cls");

        printf("\n\n\n\n\n\t\t     Password:");
        gets(pw);
        if(strcmp(pw,"NSU")==0)
        {
            printf("\n        \"Login Succesfull!\"\n");
            break;
        }
        else
        {
            printf(" \n\n    Invalid Password!!!! Please try again.");
        }
        getch();
    }

}




void view_score(float score, char playername[20])
{
    system("cls");
    float sc;
    char nm[20];
    FILE *f;
    f=fopen("score.txt","r");
    fscanf(f,"%s%f",&nm,&sc);

    {
        sc=score;
        f=fopen("score.txt","a");
        fprintf(f,"\n%s\n%.2f\n",playername,sc);
        fclose(f);
    }
}



void read_scoreboard()
{


    FILE *f;
    f=fopen("score.txt","r");
    char c;
    while((c=getc(f))!=EOF)
        putchar(c);
    fclose(f);

}

void reset_score()
{
    FILE *f;
    f=fopen("score.txt","w");
    if(f != NULL)
    {

        fclose(f);
    }
    else
    {
        printf("");
    }
    printf("   \n \n  \n \t                     SCOREBOARD HAS BEEN RESETTED SUCCESFULLY!");
    printf("   \n         \t             -----------------------------------------");
}
