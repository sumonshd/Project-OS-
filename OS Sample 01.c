#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include <time.h>


void wlcm(); /** Welcome **/
void menu(); /** MENU **/
void systemready(); /**Getting System Ready**/
void stopwatch();/**StopWatch**/
void home();/**Home**/
void tm();/**Time show**/
void RefrshTime();/**refreshTimeFunction**/
void contacts();/**ContactsDatabase**/
void game();/**Game**/
void dateview();


int main()
{
    //wlcm();

    system("CLS");
    //systemready();

    system("CLS");
    home();

    system("CLS");
    menu();

    //stopwatch();


    return 0;
}


/******************
*  WELCOME Screen *
******************/
void wlcm()
{
    system("COLOR 4E");
    int i;
    char s[127]={"\n\n\n\t***************\n\t*  WELCOME TO *\n\t* BLACK-C.one *\n\t***************\n\n\n\n\n  The TINY virtual Mobile view OS!\n"};
    for(i=0;i<127;i++)
    {
        printf("%C", s[i]);
        Sleep(80);
    }

}


/***********************
* Getting SYSTEM Ready *
***********************/
void systemready()
{
    Sleep(500);
    system("CLS");
    char s[53]={"Please  wait...We are Getting System Ready for you:\n\n"};
    int i;
    for(i=0;i<53; i++)
    {
        system("COLOR 3B");
        printf("%c", s[i]);
        Sleep(70);

    }

    for(i=0;i<101;i++)
    {
        printf("LOADING  %d percent", i);
        Sleep(10);
        system("CLS");

    }


    system("CLS");
    system("COLOR 4F");

    printf("\n\n\n\n\n\tSystem is ready to work..!");

    Sleep(1500);

}

/*********
*  Menu  *
*********/
void menu()
{
    char choise;
    printf("......  Menu  ......\n\n");
    printf("\t1.Stop Watch\n"); /**item 01**/
    printf("\t2.Clock\n");/**Clock**/
    printf("\t3.Game!\n");/**Game**/
    printf("\th.Home\n");/**Home**/
    printf("\tx.Exit\n");/**ShutDown**/

    choise=getche();
    system("CLS");
    switch(choise)
    {

    case '1':
    {
        system("COLOR 3B");
        stopwatch();
        break;
    }


    case 'x':
        {

            system("COLOR 3B");
            printf("\n\tShutting Down...!\n\n\n\n\n");
            char s[50]={"    ________________________________"};
            int i;
            for(i=0;i<50;i++)
            {
            printf("%c", s[i]);
            Sleep(90);
            }
            system("CLS");
            exit(0);


        }

        case'h':
        {

            return home();
            break;
        }

        case '2':
            {
                tm();
                break;
            }

        case '3':
            {
                game();
                break;
            }
    default:
        {

            system("COLOR 4F");
            printf("\n\tInvalid  Enter!!\n\n\n\tWatch CAREFULLY and try again...\n\n\n");
            Sleep(2000);

            system("CLS");
            menu();
        }



    }

}




/************
* STOPWATCH *
************/

void stopwatch()
{
    int j, m=0, s=0, h=0,i, ms=0 ;

   for(h=0; h<11; h++)
   {
       for(m=0; m<60; m++)
       {
           for(s=0; s<60; s++)
           {
               char c;
               printf("      BLACK-C   Stopwatch\n\t     V1.0\n\n\n\tH:%d  M:%d  S:%d\n\n\n\n\nInstructions:\nPress any key to exit Stopwatch\n\nPress p to pause\n\n", h, m, s);
               Sleep(1000);

               if (kbhit())
               {
                   if('p'==getch())
                   {
                       system("pause");
                   }else
                   {
                        system("CLS");
                        menu();
                    }
               }
               system("CLS");
           }
       }
   }
}

/*******
* Home *
*******/
void home()
{

    system("CLS");
    system("COLOR 1D");
    printf("N:x\t\t     B:80\n\n\n\n\n\n\tNo sim!\n\n\n\n\n\n");


    dateview();



    printf("\n\n\n\nMenu(m)\t      Contacts(c)");



    char choise;
    choise=getche();
    system("CLS");
    switch(choise)
    {
    case 'm':
        {
            menu();
            break;
        }


    case 'c':
        {
            contacts();
            break;
        }

            default:
        {
            system("CLS");
            home();
        }
    }



    Sleep(500);
    system("CLS");
    home();
}

/*****
*TIME*
*****/
void tm()
{

    struct tm *local, *gm;
    time_t t;

    t = time(NULL);
    local=localtime(&t);
    printf("  BLACK.C   Clock\n\tv1.0\n\n\n\n  Time==> %d: %d: %d\n\n\n\n\n\n\nPress any key to exit Clock\n\n", local->tm_hour, local->tm_min, local->tm_sec);

    if(kbhit())
    {

        home();
    }else
    {
        RefrshTime();
    }



}

void contacts()
{
            char b;
            printf("Sorry No contacts found!\n\n\n\n\n\n\nPress h to return HOME\n\n");
            b=getche();
            system("CLS");
            switch(b)
            {
            case 'h':
                {
                    home();
                    break;
                }
            default:
                 {

            system("COLOR 4F");
            printf("\n\tInvalid  Enter!!\n\n\n\tWatch CAREFULLY and try again...\n\n\n");
            Sleep(2000);

            system("CLS");
            contacts();
                 }

            }
}


void RefrshTime()
{
    Sleep(940);
    system("CLS");
    tm();
}


void game()
{
    int a[66]={5, 6, 7, 8, 9, 0, 4, 3, 2, 1, 5, 6, 7, 8, 9, 0, 4, 3, 2, 1, 5, 6, 7, 8, 9, 0, 4, 3, 2, 1, 5, 6, 7, 8, 9, 0, 4, 3, 2, 1,5, 6, 7, 8, 9, 0, 4, 3, 2, 1,5, 6, 7, 8, 9, 0, 4, 3, 2, 1, 0, 2};
    int b[66]={5, 6, 7, 8, 9, 0, 4, 3, 2, 1, 5, 6, 7, 8, 9, 0, 4, 3, 2, 1, 5, 6, 7, 8, 9, 0, 4, 3, 2, 1, 5, 6, 7, 8, 9, 0, 4, 3, 2, 1,5, 6, 7, 8, 9, 0, 4, 3, 2, 1,5, 6, 7, 8, 9, 0, 4, 3, 2, 1, 0, 2};
    int i, j, r, c;

    struct tm *local, *gm;
    time_t t;

    t = time(NULL);
    local=localtime(&t);


    i=local->tm_sec;
    j=i+1;
    r=a[i]+a[j];
    printf("%d + %d = ?\n\n", a[i], a[j]);

    scanf("%d", &c);
    printf("\n\n\n\n\n\n\n\n\n\nTime: %d: %d", local->tm_hour, local->tm_min, local->tm_sec);

    if(c==r)
    {

            system("CLS");

            printf("\n\n\n\t   Great..!!\n\n\n\n\n\n\n");
            Sleep(1000);
            system("CLS");

            game();
    }else
    {
        printf("Game Over!\n\n");
        return 0;
    }
}


void dateview()

    {

    struct tm *local, *gm;
    time_t t;

    t = time(NULL);
    local=localtime(&t);
    printf("    Date: %d: %d: %d\n", local->tm_year+1900, local->tm_mon+1, local->tm_mday);




}


































































































