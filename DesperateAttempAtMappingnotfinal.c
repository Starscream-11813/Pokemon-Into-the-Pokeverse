#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#include <direct.h>
#include <io.h>
void delay(unsigned int mseconds)
{
    clock_t goal = mseconds + clock();
    while (goal > clock());
}
int main()
{
    int x,y,p;
    char last_tile=' ';
    char map[14][37]=
    {
        "##########GAZIPUR CITY MAP###########",
        "# POKEMON-GYM            MOVE-TUTOR #",
        "#                                   #",
        "#                                 P #",
        "#                                 O #",
        "# E                               K #",
        "# X                $              E #",
        "# I                               M #",
        "# T    ##############             A #",
        "#      #<^>|<^|>|<^>#             R #",
        "#      ##############             T #",
        "#                                   #",
        "# POKEMON-LEAGUE     POKEMON-CENTRE #",
        "#####################################"
    };
    for(int i=0; i<14; i++)
    {
        for(int j=0; j<37; j++)
        {
            if(map[i][j]=='$')
            {
                x=i;
                y=j;
            }
        }
    }
    char control;
    for(int i=0; i<14; i++)
    {
        for(int j=0; j<37; j++)
        {
            printf("%c",map[i][j]);
        }
        printf("\n");
    }
    while(1)
    {
        if(kbhit())
        {
            control=getch();
            system("cls");
            if(control=='w' && x!=1)
            {
                map[x][y]=last_tile;
                last_tile=map[x-1][y];
                map[x-1][y]='$';
                x=x-1;
            }
            if(control=='a' && y!=1)
            {
                map[x][y]=last_tile;
                last_tile=map[x][y-1];
                map[x][y-1]='$';
                y=y-1;
            }
            if(control=='s' && x!=12)
            {
                map[x][y]=last_tile;
                last_tile=map[x+1][y];
                map[x+1][y]='$';
                x=x+1;
            }
            if(control=='d' && y!=35)
            {
                map[x][y]=last_tile;
                last_tile=map[x][y+1];
                map[x][y+1]='$';
                y=y+1;
            }
            for(int i=0; i<14; i++)
            {
                for(int j=0; j<37; j++)
                {
                    printf("%c",map[i][j]);
                }
                printf("\n");
            }

        }
        if(x==1 && y>1 && y<13)
        {
            char *str="\033[1;91mWould you like to enter the gym ?\n1.YES\n2.NO\033[0m\n";
            int i=0;
            while (str[i] != '\0')
            {
                putchar(str[i]);
                fflush(stdout);
                delay(100);
                i++;
            }
            //printf("\033[1;91mWould you like to enter the gym ?\n1.YES\n2.NO\033[0m\n");
            scanf("%d", &p);
            if(p==1)
            {
                continue;
            }
            else
            {
                map[x][y]=last_tile;
                last_tile=' ';
                x=1;
                y=13;
            }

        }
        if(x==1 && y>24 && y<35)
        {
            char *str="\033[1;92mThe move tutor is out of town\033[0m\n\033[1;92mPlease come back later\033[0m";
            int i=0;
            while (str[i] != '\0')
            {
                putchar(str[i]);
                fflush(stdout);
                delay(100);
                i++;
            }
            //printf("\033[1;92mThe move tutor is out of town\033[0m\n");
            //printf("\033[1;92mPlease come back later\033[0m");
            map[x][y]=last_tile;
            last_tile=' ';
            x=1;
            y=24;

        }
        if(x==12 && y>20 && y<35)
        {
            int i=0;
            char *str="\033[1;94mWelcome to the Pokemon Center!\033[0m\n";
            while (str[i] != '\0')
            {
                putchar(str[i]);
                fflush(stdout);
                delay(90);
                i++;
            }
            //printf("\033[1;94mWelcome to the Pokemon Center\033[0m\n");
            delay(2000);
            i=0;
            char *str1="\033[1;94mWe have restored your Pokemons to full health!\033[0m\n\033[1;94mThanks for coming!\033[0m\n\033[1;94mWe hope to see you again soon!\033[0m\n";
            while (str1[i] != '\0')
            {
                putchar(str1[i]);
                fflush(stdout);
                delay(100);
                i++;
            }
            //printf("\033[1;94mWe have restored your Pokemons to full health!\033[0m\n");
            //printf("\033[1;94mThanks for coming!\033[0m\n");
            //printf("\033[1;94mWe hope to see you again soon!\033[0m\n");
            map[x][y]=last_tile;
            last_tile=' ';
            x=12;
            y=20;

        }
        if(x==12 && y>1 && y<16)
        {
            printf("\033[1;95mWelcome to the Pokemon League\033[0m\n");
            delay(1000);
            printf("\033[1;95mWHAT????!!!!!\033[0m\n");
            printf("\033[1;95mIt seems like you don't have the gym badge!\033[0m\n");
            printf("\033[1;95mPlease come back after you have defeated the gym leader.\033[0m\n");
            map[x][y]=last_tile;
            last_tile=' ';
            x=12;
            y=16;

        }

        if(y==2 && x>4 && x<9)
        {
            char *str="\033[1;93mWould you like to exit the game ?\033[0m\n";
            int i=0;
            while (str[i] != '\0')
            {
                putchar(str[i]);
                fflush(stdout);
                delay(100);
                i++;
            }
            //printf("\033[1;93mWould you like to exit the game ?\033[0m\n");
            printf("\033[1;93m1.Yes\033[0m\n");
            printf("\033[1;93m2.No\033[0m\n");
            scanf("%d",&p);
            if(p==1)
            {
                continue;
            }
            else
            {
                map[x][y]=last_tile;
                last_tile=' ';
                x=5;
                y=3;
            }

        }
        if(y==34 && x>2 && x<11)
        {
            char *str="\033[1;96mWelcome to the Pokemon Mart\033[0m\n\033[1;96mWould you like to buy anything ?\033[0m\n";
            int i=0;
            while (str[i] != '\0')
            {
                putchar(str[i]);
                fflush(stdout);
                delay(100);
                i++;
            }
            //printf("\033[1;96mWelcome to the Pokemon Mart\033[0m\n");
            //printf("\033[1;96mWould you like to buy anything ?\033[0m\n");
            printf("\033[1;32m1.Potion\033[0m\n");
            printf("\033[1;31m2.X Attack\033[0m\n");
            printf("\033[1;34m3.X Defense\033[0m\n");
            printf("\033[1;96m4.Exit\033[0m\n");


            scanf("%d",&p);
            if(p==1)
            {
                continue;
            }
            if(p==2)
            {
                continue;
            }
            if(p==3)
            {
                continue;
            }
            else
            {
                map[x][y]=last_tile;
                last_tile=' ';
                x=6;
                y=33;
            }

        }


    }
    return 0;
}

