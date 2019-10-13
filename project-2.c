#include<stdio.h>
//#include <direct.h>
#include<string.h>
//#include <io.h>
#include<time.h>
#include<stdlib.h>
//#include <windows.h>
//#include <dos.h>
//#include <dir.h>
#include<SDL.h>
#include<SDL_mixer.h>

Mix_Music *bg1=NULL;
Mix_Music *bg2=NULL;
Mix_Music *bg3=NULL;
Mix_Music *bg4=NULL;
Mix_Music *bg5=NULL;
Mix_Music *bg6=NULL;
Mix_Music *bg7=NULL;
Mix_Music *bg8=NULL;
Mix_Music *bg9=NULL;
Mix_Music *bg10=NULL;
void LoadMusictown()
{
    //dice = Mix_LoadWAV("gunshot.wav");
    bg1 = Mix_LoadMUS("Town.mp3");
    if(bg1 == NULL)
    {
        printf("Music load failed");
    }

}
void LoadMusicmenu()
{
    //dice = Mix_LoadWAV("gunshot.wav");
    bg2 = Mix_LoadMUS("101-opening.mp3");
    if(bg2 == NULL)
    {
        printf("Music load failed");
    }

}
void LoadMusicfight1()
{
    //dice = Mix_LoadWAV("gunshot.wav");
    bg3 = Mix_LoadMUS("Music_Battle_Vs_Gym_Leader_rdblu.mp3");
    if(bg3 == NULL)
    {
        printf("Music load failed");
    }

}
void LoadMusicfight2()
{
    //dice = Mix_LoadWAV("gunshot.wav");
    bg4 = Mix_LoadMUS("Music_Battle_Vs_Wild_Pokemon_rdblu.mp3");
    if(bg4 == NULL)
    {
        printf("Music load failed");
    }

}
void LoadMusicfight3()
{
    //dice = Mix_LoadWAV("gunshot.wav");
    bg5 = Mix_LoadMUS("Music_Pokemon_Gym_rdblu.mp3");
    if(bg5 == NULL)
    {
        printf("Music load failed");
    }

}
void LoadMusicsupereffective()
{
    //dice = Mix_LoadWAV("gunshot.wav");
    bg6 = Mix_LoadMUS("Attack_Hit_Super_Effective_blkwht.mp3");
    if(bg6 == NULL)
        {
            printf("Music load failed");
        }

}
void LoadMusicnoteffective()
{
    //dice = Mix_LoadWAV("gunshot.wav");
    bg7 = Mix_LoadMUS("Attack_Hit_Weak_Not_Very_Effective_blkwht.mp3");
    if(bg7 == NULL)
        {
            printf("Music load failed");
        }

}
void LoadMusicvictory()
{
    //dice = Mix_LoadWAV("gunshot.wav");
    bg9 = Mix_LoadMUS("Music_Victory_Vs_Gym_Leader_rdblu.mp3");
    if(bg9 == NULL)
        printf("Music load failed");

}
void LoadMusicdefeat()
{
    //dice = Mix_LoadWAV("gunshot.wav");
    bg10 = Mix_LoadMUS("Music_Unknown_Buildup_rdblu.mp3");
    if(bg10 == NULL)
        printf("Music load failed");

}
void map();
void gym();
typedef struct skills
{
    char *Name;
    int Damage;
    int Type;
} attack;
typedef struct pokemon
{
    char *Name;
    int Type;
    int Level;
    int Offense;
    int Defense;
    int Maxhp;
    int Hp;
    attack attacks[4];
} Pokemon;
//Bag Items
int potion=1,superpotion=1,direhit=1,xattack=1,toughcandy=1,xdefense=1;
Pokemon my_pok,my_pok1,my_pok2,my_pok3;
char options[4][20]= {"-> START GAME",
                      "   CONTROLS",
                      "   CREDITS",
                      "   EXIT GAME"
                     };

void pause()
{
    system("pause");
}
void Delay(unsigned int mseconds)
{
    clock_t goal = mseconds + clock();
    while (goal > clock());
}
//For cleaning screen
void clean(void)
{
    system("cls");
}
//Text color to Red
void red()
{
    printf("\033[0;31m");
}
//Text color to Yellow
void yellow()
{
    printf("\033[0;33m");
}
void green()
{
    printf("\033[0;32m");
}
void blue()
{
    printf("\033[0;34m");
}
void purple()
{
    printf("\033[0;35m");
}
void cyan()
{
    printf("\033[0;36m");
}
void bred()
{
    printf("\033[1;31m");
}
void bgreen()
{
    printf("\033[1;32m");
}
void byellow()
{
    printf("\033[1;33m");
}
void bblue()
{
    printf("\033[1;34m");
}
void bpurple()
{
    printf("\033[1;35m");
}
void bcyan()
{
    printf("\033[1;36m");
}
void ured()
{
    printf("\033[4;31m");
}
void ugreen()
{
    printf("\033[4;32m");
}

void uyellow()
{
    printf("\033[4;33m");
}

void ublue()
{
    printf("\033[4;34m");
}

void upurple()
{
    printf("\033[4;35m");
}

void ucyan()
{
    printf("\033[4;36m");
}

void onred()
{
    printf("\033[41m");
}

void onyellow()
{
    printf("\033[43m");
}
void ongreen()
{
    printf("\033[42m");
}
void onblue()
{
    printf("\033[44m");
}
void onpurple()
{
    printf("\033[45m");
}
void oncyan()
{
    printf("\033[46m");
}
void onwhite()
{
    printf("\033[47m");
}
void ired()
{
    printf("\033[0;91m");
}
void igreen()
{
    printf("\033[0;92m");
}

void iyellow()
{
    printf("\033[0;93m");
}

void iblue()
{
    printf("\033[0;94m");
}

void ipurple()
{
    printf("\033[0;95m");
}

void icyan()
{
    printf("\033[0;96m");
}

void iwhite()
{
    printf("\033[0;97m");
}
void bired()
{
    printf("\033[1;91m");
}
void bigreen()
{
    printf("\033[1;92m");
}

void biyellow()
{
    printf("\033[1;93m");
}

void biblue()
{
    printf("\033[1;94m");
}

void bipurple()
{
    printf("\033[1;95m");
}

void bicyan()
{
    printf("\033[1;96m");
}

void biwhite()
{
    printf("\033[1;97m");
}
void onired()
{
    printf("\033[0;101m");
}
void onigreen()
{
    printf("\033[0;102m");
}

void oniyellow()
{
    printf("\033[0;103m");
}

void oniblue()
{
    printf("\033[0;104m");
}

void onipurple()
{
    printf("\033[10;95m");
}

void onicyan()
{
    printf("\033[0;106m");
}
void oniwhite()
{
    printf("\033[0;107m");
}
void oniblack()
{
    printf("\033[0;100m");
}
//Resets the text to default color
void reset()
{
    printf("\033[0m");
}

int main(int argc, char* args[])
{
    SDL_Init(SDL_INIT_AUDIO);
    Mix_Init(MIX_INIT_MP3);
    Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, 2, 2048) ;
    LoadMusicmenu();
    //Mix_pl`
    Mix_PlayMusic(bg2,-1);
    int x=0;
    FILE *fp;
    char i,c='1';
    Delay(1000);
    if((fp= fopen("pokemon (2).txt","r"))==NULL)
    {
        printf("Cannot open file.\n");
        exit(1);
    }
//red();
    for(;;)
    {
        i=fgetc(fp);
        if(i==EOF)
            break;
        //Delay(3);
        putchar(i);
    }
//reset();
    fclose(fp);
    Delay(10);
    //printing into the pokeverse
    printf("\n");
    for(i=0; i<4; i++)
    {
        printf("\n\n\t\t\t\t\t\t\t\t\t\t");
        Delay(500);
        puts(options[i]);
    }

    while(c!='\r')
    {
        interface:
            LoadMusicmenu();
        c=_getch();
        system("cls");
        if(c=='\r')
            break;
        else if(c=='w')
        {
            if(options[0][0]=='-')
            {
                options[0][0]=' ';
                options[0][1]=' ';
                options[3][0]='-';
                options[3][1]='>';
                x=3;
            }
            else if(options[1][0]=='-')
            {
                options[1][0]=' ';
                options[1][1]=' ';
                options[0][0]='-';
                options[0][1]='>';
                x=0;
            }
            else if(options[2][0]=='-')
            {
                options[2][0]=' ';
                options[2][1]=' ';
                options[1][0]='-';
                options[1][1]='>';
                x=1;
            }
            else if(options[3][0]=='-')
            {
                options[3][0]=' ';
                options[3][1]=' ';
                options[2][0]='-';
                options[2][1]='>';
                x=2;
            }

        }
        else if(c=='s')
        {
            if(options[0][0]=='-')
            {
                options[0][0]=' ';
                options[0][1]=' ';
                options[1][0]='-';
                options[1][1]='>';
                x=1;
            }
            else if(options[1][0]=='-')
            {
                options[1][0]=' ';
                options[1][1]=' ';
                options[2][0]='-';
                options[2][1]='>';
                x=2;
            }
            else if(options[2][0]=='-')
            {
                options[2][0]=' ';
                options[2][1]=' ';
                options[3][0]='-';
                options[3][1]='>';
                x=3;
            }
            else if(options[3][0]=='-')
            {
                options[3][0]=' ';
                options[3][1]=' ';
                options[0][0]='-';
                options[0][1]='>';
                x=0;
            }

        }
        char i;
        if((fp= fopen("pokemon (2).txt","r"))==NULL)
        {
            printf("Cannot open file.\n");
            exit(1);
        }
        byellow();
        for(;;)
        {
            i=fgetc(fp);
            if(i==EOF)
                break;
            putchar(i);
        }
        reset();
        fclose(fp);

        //printing into the pokeverse
        printf("\n");
        for(i=0; i<4; i++)
        {
            printf("\n\n\t\t\t\t\t\t\t\t\t\t");
            if(i==x)
            {
                ipurple();
                puts(options[i]);
                reset();
            }
            else
                puts(options[i]);
        }
    }
    if(x==0)
    {
        bgreen();
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tLOADING\n\n");
        printf("\t\t\t");
        //printf("\033[0;32m");
        for(int a=0; a<50; a++)
        {
            printf("\xdb ");
            Delay(60);

        }
        reset();
        printf("\n\n\n\t\t\t\t\t\t\t");
        pause();
        clean();
        //printf("\033[0m");
        map();
        goto interface;
    }
    else if(x==1)//controls
    {
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\tPress \033[1;36mW and S\033[0m to navigate through the Menu.\n");
        printf("\t\t\t\t\tPress \033[1;36mW, S, A and D\033[0m to move Upwards, Downwards, Left and Right directions respectively around the map.\n");
        printf("\t\t\t\t\tPress \033[1;36mEnter\033[0m to choose options.\n");
        printf("\n\n\t\t\t\t\t");
        pause();
        goto interface;
    }
    else if(x==2)//credit
    {
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\tProject for CSE-4202: Structured Programming Lab-II.\n");
        printf("\t\t\t\t\tDeveloped By:\n");
        printf("\t\t\t\t\t1) \033[1;32mSyed Rifat Raiyan\033[0m - \033[1;35m180041205\033[0m\n");
        printf("\t\t\t\t\t2) \033[1;36mSyed Mohammed Sartaj Ekram\033[0m - \033[1;35m180041204\033[0m\n");
        printf("\t\t\t\t\t3) \033[1;31mRidwan Mahbub\033[0m - \033[1;35m180041230\033[0m\n");
        printf("\n\n\t\t\t\t\t");
        pause();

        goto interface;
    }
    else
        return 0;

    return 0;
}
void map()
{
    LoadMusictown();
    Mix_HaltMusic();
    Mix_PlayMusic(bg1,-1);
    system("cls");
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
        "# T                               A #",
        "#                                 R #",
        "#                                 T #",
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
        if(_kbhit())
        {
            control=_getch();
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
                Delay(70);
                i++;
            }
            //printf("\033[1;91mWould you like to enter the gym ?\n1.YES\n2.NO\033[0m\n");
            scanf("%d", &p);
            if(p==1)
            {
                gym();
                //map();
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
                Delay(70);
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
                Delay(70);
                i++;
            }
            //printf("\033[1;94mWelcome to the Pokemon Center\033[0m\n");
            Delay(2000);
            i=0;
            char *str1="\033[1;94mWe have restored your Pokemons to full health!\033[0m\n\033[1;94mThanks for coming!\033[0m\n\033[1;94mWe hope to see you again soon!\033[0m\n";
            while (str1[i] != '\0')
            {
                putchar(str1[i]);
                fflush(stdout);
                Delay(80);
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
            Delay(1000);
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
            char *str="\033[1;93mWould you like to exit the map ?\033[0m\n";
            int i=0;
            while (str[i] != '\0')
            {
                putchar(str[i]);
                fflush(stdout);
                Delay(100);
                i++;
            }
            //printf("\033[1;93mWould you like to exit the game ?\033[0m\n");
            printf("\033[1;93m1.Yes\033[0m\n");
            printf("\033[1;93m2.No\033[0m\n");
            scanf("%d",&p);
            if(p==1)
            {
                break;
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
                Delay(100);
                i++;
            }
            //printf("\033[1;96mWelcome to the Pokemon Mart\033[0m\n");
            //printf("\033[1;96mWould you like to buy anything ?\033[0m\n");
            printf("\033[1;32m1.Healing Potion\033[0m\n");
            printf("\033[1;32m2.Super Potion\033[0m\n");
            printf("\033[1;31m3.X Attack\033[0m\n");
            printf("\033[1;31m4.Dire Hit\033[0m\n");
            printf("\033[1;34m5.X Defense\033[0m\n");
            printf("\033[1;34m6.Tough Candy XL\033[0m\n");
            printf("\033[1;96m7.Exit\033[0m\n");
            scanf("%d",&p);
            if(p==1)
            {
                //continue;
                printf("\nHealing Potion Purchased!\n");
                potion++;
            }
            if(p==2)
            {
                //continue;
                printf("\nSuper Potion Purchased!\n");
                superpotion++;
            }
            if(p==3)
            {
                //continue;
                printf("\nX Attack Purchased!\n");
                xattack++;
            }
            if(p==4)
            {
                printf("\nDire Hit Purchased!\n");
                direhit++;
            }
            if(p==5)
            {
                printf("\nX Defense Purchased!\n");
                xdefense++;
            }
            if(p==6)
            {
                printf("\nTough Candy XL Purchased!\n");
                toughcandy++;
            }
            if(p==7)
            {
                map[x][y]=last_tile;
                last_tile=' ';
                x=6;
                y=33;

            }
            else
            {

            }

        }


    }
    return ;
}

void gym()
{
    //786
    /*int string_type_to_int (char* type);
    char* int_type_to_string (int type);
    attack new_attack (char* name, int damage, char* type);
    void clean(void);
    void get_attack (attack att);
    void get_life (Pokemon pok);
    void get_Pokemon (int choice, Pokemon pok);
    Pokemon level_up(Pokemon pok);
    int effect (Pokemon pok, attack att);
    int hit (attack att, Pokemon pok1, Pokemon pok2);
    attack chosen_attack(Pokemon pok);
    int is_alive(Pokemon pok);
    int max(int a, int b);
    int min(int a, int b);
    attack att_CPU_rand (Pokemon pok);
    attack att_CPU_max (Pokemon pok1, Pokemon pok2);
    attack att_CPU_min (Pokemon pok1, Pokemon pok2);
    int combat (Pokemon pok1, Pokemon pok2, int diff);
    int difficulty (void);
    Pokemon chosen_pokemon (Pokemon pok1, Pokemon pok2, Pokemon pok3, Pokemon pok4);
    List add(Pokemon pok, List l);*/
    LoadMusicfight3();
    Mix_HaltMusic();
    Mix_PlayMusic(bg5,-1);
    LoadMusicfight1();
    Mix_HaltMusic();
    Mix_PlayMusic(bg3,-1);
    LoadMusicfight2();
    Mix_HaltMusic();
    Mix_PlayMusic(bg4,-1);
    int flag=0;
    int fl=0;

//Type Advantage chart Attack Type along Columns and Defense Type along Rows
    int eff[17][17]= {1,1,2,4,4,2,2,2,2,2,4,1,2,1,2,4,2,
                      4,1,2,1,2,2,2,4,2,2,2,4,2,1,2,2,2,
                      2,4,1,1,2,2,2,0,4,2,2,2,2,1,2,2,2,
                      1,4,2,1,2,2,1,4,1,2,1,4,2,1,2,1,2,
                      1,1,2,4,1,2,2,4,4,2,2,2,2,4,2,1,2,
                      2,2,2,2,4,2,1,2,1,1,1,4,0,2,4,4,1,
                      2,2,2,4,2,2,1,1,2,2,2,1,1,2,2,0,4,
                      4,2,4,1,2,2,4,2,0,2,1,4,2,2,2,4,2,
                      2,2,1,4,2,4,2,2,2,2,4,1,2,2,2,1,2,
                      2,2,2,2,2,4,4,2,2,1,2,2,2,2,0,1,2,
                      1,2,2,4,2,1,1,2,1,4,2,2,1,2,4,1,1,
                      4,2,2,2,4,1,2,1,4,2,4,2,2,2,2,1,2,
                      2,2,2,2,2,2,2,2,2,4,2,2,4,2,1,2,2,
                      2,2,2,2,2,2,2,2,2,2,2,2,2,4,2,1,0,
                      2,2,2,2,2,1,2,2,2,4,2,2,4,2,1,2,1,
                      1,1,1,2,4,2,2,2,2,2,2,4,2,2,2,1,4,
                      1,2,2,2,2,4,1,2,2,2,2,2,2,4,4,1,2
                     };
//Function that transforms a defined type with a corresponding integer string
    int string_type_to_int (char* type)
    {
        if (strncmp(type, "Fire", 5) == 0)
        {
            return 1;
        }
        if (strncmp(type, "Water", 5) == 0)
        {
            return 2;
        }
        if (strncmp(type, "Electric", 10) == 0)
        {
            return 3;
        }
        if (strncmp(type, "Grass", 10) == 0)
        {
            return 4;
        }
        if(strncmp(type,"Ice",5)==0)
        {
            return 5;
        }
        if(strncmp(type,"Fighting",10)==0)
        {
            return 6;
        }
        if(strncmp(type,"Poison",10)==0)
        {
            return 7;
        }
        if(strncmp(type,"Ground",10)==0)
        {
            return 8;
        }
        if(strncmp(type,"Flying",10)==0)
        {
            return 9;
        }
        if(strncmp(type,"Psychic",5)==0)
        {
            return 10;
        }
        if(strncmp(type,"Bug",5)==0)
        {
            return 11;
        }
        if(strncmp(type,"Rock",5)==0)
        {
            return 12;
        }
        if(strncmp(type,"Ghost",5)==0)
        {
            return 13;
        }
        if(strncmp(type,"Dragon",5)==0)
        {
            return 14;
        }
        if(strncmp(type,"Dark",5)==0)
        {
            return 15;
        }
        if(strncmp(type,"Steel",5)==0)
        {
            return 16;
        }
        if(strncmp(type,"Fairy",5)==0)
        {
            return 17;
        }

        //exit(-1);
    }

//Inverse of the previous function
    char* int_type_to_string (int type)
    {
        if (type == 1)
        {
            return("Fire");
        }
        if (type == 2)
        {
            return("Water");
        }
        if (type == 3)
        {
            return("Electric");
        }
        if (type == 4)
        {
            return("Grass");
        }
        if(type==5)
        {
            return ("Ice");
        }
        if(type==6)
        {
            return("Fighting");
        }
        if(type==7)
        {
            return("Poison");
        }
        if(type==8)
        {
            return("Ground");
        }
        if(type==9)
        {
            return("Flying");
        }
        if(type==10)
        {
            return("Psychic");
        }
        if(type==11)
        {
            return("Bug");
        }
        if(type==12)
        {
            return("Rock");
        }
        if(type==13)
        {
            return("Ghost");
        }
        if(type==14)
        {
            return("Dragon");
        }
        if(type==15)
        {
            return("Dark");
        }
        if(type==16)
        {
            return("Steel");
        }
        if(type==17)
        {
            return("Fairy");
        }

        //exit(-1);
    }

    void print_pokemon(int n_pokemon)
    {

        switch(n_pokemon)
        {
        case 1:
            printf("\t\t\t\t\t\t\t\t\t\t\t                 .\"-,.__\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t                 `.     `.  ,\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t              .--'  .._,'\"-' `.\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t             .    .'         `'\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t             `.   /          ,'\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t               `  '--.   ,-\"'\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t                `\"`   |  \\\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t                   -. \\, |\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t                    `--Y.'      ___.\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t                         \\     L._, \\\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t               _.,        `.   <  <\\                _\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t             ,' '           `, `.   | \\            ( `\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t          ../, `.            `  |    .\\`.           \\ \\_\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t         ,' ,..  .           _.,'    ||\\l            )  '\".\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t        , ,'   \\           ,'.-.`-._,'  |           .  _._`.\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t      ,' /      \\ \\        `' ' `--/   | \\          / /   ..\\\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t    .'  /        \\ .         |\\__ - _ ,'` `        / /     `.`.\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t    |  '          ..         `-...-\"  |  `-'      / /        . `.\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t    | /           |L__           |    |          / /          `. `.\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t   , /            .   .          |    |         / /             ` `\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t  / /          ,. ,`._ `-_       |    |  _   ,-' /               ` \\\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t / .           \\\"`_/. `-_ \\_,.  ,'    +-' `-'  _,        ..,-.    \\`.\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t.  '         .-f    ,'   `    '.       \\__.---'     _   .'   '     \\ \\\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t' /          `.'    l     .' /          \\..      ,_|/   `.  ,'`     L`\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t|'      _.-\"\"` `.    \\ _,'  `            \\ `.___`.'\"`-.  , |   |    | \\\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t||    ,'      `. `.   '       _,...._        `  |    `/ '  |   '     .|\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t||  ,'          `. ;.,.---' ,'       `.   `.. `-'  .-' /_ .'    ;_   ||\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t|| '              V      / /           `   | `   ,'   ,' '.    !  `. ||\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t||/            _,-------7 '              . |  `-'    l         /    `||\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t. |          ,' .-   ,' ||               | .-.        `.      .'     ||\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t `'        ,'    `\".'    |               |    `.        '. -.'       `'\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t          /      ,'      |               |,'    \\-.._,.'/'\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t          .     /        .               .       \\    .''\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t        .`.    |         `.             /         :_,'.'\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t          \\ `...\\   _     ,'-.        .'         /_.-'\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t           `-.__ `,  `'   .  _.>----''.  _  __  /\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t                .'        /\"'          |  \"'   '_\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t               /_|.-'\\ ,\".             '.'`__'-( \\\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t                 / ,\"'\"\\,'               `/  `-.|\" \n");

            break;
        case 2:
            bcyan();
            printf("\t\t\t\t\t\t\t\t\t\t\t               _,........__\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t            ,-'            \"`-.\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t          ,'                   `-.\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t        ,'                        \\\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t      ,'                           .\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t      .'\\               ,\"\".       `\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t     ._.'|             / |  `       \\\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t     |   |            `-.'  ||       `.\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t     |   |            '-._,'||       | \\\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t     .`.,'             `..,'.'       , |`-.\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t     l                       .'`.  _/  |   `.\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t     `-.._'-   ,          _ _'   -\" \\  .     `\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t`.\"\"\"\"\"'-.`-...,---------','         `. `....__.\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t.'        `\"-..___      __,'\\          \\  \\     \\\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t\\_ .          |   `\"\"\"\"'    `.           . \\     \\\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t  `.          |              `.          |  .     L\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t    `.        |`--...________.'.        j   |     |\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t      `._    .'      |          `.     .|   ,     |\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t         `--,\\       .            `7\"\"' |  ,      |\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t            ` `      `            /     |  |      |    _,-'\"\"\"`-.\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t             \\ `.     .          /      |  '      |  ,'          `.\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t              \\  v.__  .        '       .   \\    /| /              \\\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t               \\/    `\"\"\\\"\"\"\"\"\"\"`.       \\   \\  /.''                |\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t                `        .        `._ ___,j.  `/ .-       ,---.     |\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t                ,`-.      \\         .\"     `.  |/        j     `    |\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t               /    `.     \\       /         \\ /         |     /    j\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t              |       `-.   7-.._ .          |\"          '         /\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t              |          `./_    `|          |            .     _,'\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t              `.           / `----|          |-............`---'\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t                \\          \\      |          |\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t               ,'           )     `.         |\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t                7____,,..--'      /          |\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t                                  `---.__,--.'\n");

            reset();
            break;
        case 3:
            byellow();
            printf("\t\t\t\t\t\t\t\t\t\t\t                                             ,-.\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t                                          _.|  '\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t                                        .'  | /\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t                                      ,'    |'\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t                                     /      /\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t                       _..----\"\"---.'      /\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t _.....---------...,-\"\"                  ,'\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t `-._  \\                                /\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t     `-.+_            __           ,--. .\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t          `-.._     .:  ).        (`--\"| \\\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t               7    | `\" |         `...'  \\\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t               |     `--'     '+\"        ,\". ,\"\"-\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t               |   _...        .____     | |/    '\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t          _.   |  .    `.  '--\"   /      `./     j\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t         \\' `-.|  '     |   `.   /        /     /\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t         '     `-. `---\"      `-\"        /     /\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t          \\       `.                  _,'     /\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t           \\        `                        .\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t            \\                                j\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t             \\                              /\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t              `.                           .\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t                +                          \\\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t                |                           L\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t                |                           |\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t                |  _ /,                     |\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t                | | L)'..                   |\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t                | .    | `                  |\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t                '  \\'   L                   '\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t                 \\  \\   |                  j\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t                  `. `__'                 /\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t                _,.--.---........__      /\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t               ---.,'---`         |   -j\"\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t                .-'  '....__      L    |\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t              \"\"--..    _,-'       \\ l||\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t                  ,-'  .....------. `||'\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t               _,'                /\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t             ,'                  /\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t            '---------+-        /\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t                     /         /\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t                   .'         /\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t                 .'          /\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t               ,'           /\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t             _'....----\"\"\"\"\" \n");

            reset();
            break;
        case 4:
            bgreen();
            printf("\t\t\t\t\t\t\t\t\t\t\t                                           /\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t                        _,.------....___,.' ',.-.\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t                     ,-'          _,.--\"        |\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t                   ,'         _.-'              .\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t                  /   ,     ,'                   `\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t                 .   /     /                     ``.\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t                 |  |     .                       \\.\\\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t       ____      |___._.  |       __               \\ `.\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t     .'    `---\"\"       ``\"-.--\"'`  \\               .  \\\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t    .  ,            __               `              |   .\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t    `,'         ,-\"'  .               \\             |    L\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t   ,'          '    _.'                -._          /    |\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t  ,`-.    ,\".   `--'                      >.      ,'     |\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t . .'\\'   `-'       __    ,  ,-.         /  `.__.-      ,'\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t ||:, .           ,'  ;  /  / \\ `        `.    .      .'/\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t j|:D  \\          `--'  ' ,'_  . .         `.__, \\   , /\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t/ L:_  |                 .  \"' :_;                `.'.'\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t.    \"\"'                  \"\"\"\"\"'                    V\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t `.                                 .    `.   _,..  `\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t   `,_   .    .                _,-'/    .. `,'   __  `\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t    ) \\`._        ___....----\"'  ,'   .'  \\ |   '  \\  .\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t   /   `. \"`-.--\"'         _,' ,'     `---' |    `./  |\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t  .   _  `\"\"'--.._____..--\"   ,             '         |\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t  | .\" `. `-.                /-.           /          ,\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t  | `._.'    `,_            ;  /         ,'          .\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t .'          /| `-.        . ,'         ,           ,\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t '-.__ __ _,','    '`-..___;-...__   ,.'\\ ____.___.'\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t `\"^--'..'   '-`-^-'\"--    `-^-'`.''\"\"\"\"\"`.,^.`.--' \n");
            printf("\n");
            //printf("\n");
            bgreen();

            break;
        case 5:
            bcyan();
            printf("                                       ,|\n");
            printf("                                       ||\n");
            printf("                               ,-\"'\"\"`' `._\n");
            printf("                              '----.     __`....._\n");
            printf("                               `    `.  `. ;      `.\n");
            printf("                                `.    `.  `   ,\"`. |\n");
            printf("                                  `.  _.`._   |  ' |\n");
            printf("                                  .','  ,' `.  `--'\n");
            printf("                                 /.' _,'    | /\n");
            printf("                                '/_.'       |.\n");
            printf("                                 `---`\".    ||\n");
            printf("                                       |    ||\n");
            printf("                                      ,'    `|\n");
            printf("                         _           /       |\n");
            printf("                        ' `.        .'       |\n");
            printf("                         .  `._  _,'/|       |\n");
            printf("                        _|     \"'  / |       '\n");
            printf("                    _,-' |        /  '        .\n");
            printf("                 |\"'            ,'  '          \\\n");
            printf("                 |   _        ,'   /            \\\n");
            printf("                 ;  '        /    j              .\n");
            printf("            ,\"--'    `.    .      |              |         ________\n");
            printf("            `.   -.       / '     |              |   _,-\"\"'   __.._\"`-._\n");
            printf("             ,' ,-.`-.__.' /      '              |.-'  _..--'\"       _.-'\n");
            printf("             \\.'   `-.___.'      ,               '__.-\"           _.'\n");
            printf("             /        _..--    . |              /               ,'\n");
            printf("           ,`      .-'         | |           _,'._          _,-'\n");
            printf("       _,-'      ,'           .' '       _.-'     \"-.....-\"'\n");
            printf("     ,'     __ ,'          _.'  /  __..-'\n");
            printf("   ,' _.-\"\"'  /         _.'  _.'-\"'\n");
            printf("  '-'\"       /      _.-' _.-\"\n");
            printf("            /    _.' _.-'\n");
            printf("           .   .'_.-'\n");
            printf("           | ,'.'\n");
            printf("           | .`\n");
            printf("            `\n");

            reset();
            break;
        case 6:
            printf("           ,-\"\"\",.--\n");
            printf("         ,:-'_.--\"\"\"\\\n");
            printf("       ,\"/,-'  _,..--+-.\n");
            printf("      .,'/ _.-'         \\\n");
            printf("      |||,'_.-.          \\ ____\n");
            printf("      |.','U| |         .-'    `-.\n");
            printf("    ,\"   |_L:/        ,'          `.\n");
            printf("   j                 /              .\n");
            printf("   \\_______...-7    j           ___ |\n");
            printf("    V V/     _.'    |    _,.---- ,_`\"-.\n");
            printf("     ,/_...-\"   __.-|  -\"    `,.   ``.'`.\n");
            printf("     `..,......\"    `.  | \\    `+`. `  \\ .\n");
            printf("       j /            `./ \\\\    ` .  \\\\ . .\n");
            printf("       | |               ` `\\     \\'  \\' \\|\n");
            printf("       | |              | `.`+. /         \\\n");
            printf("       ` '              |   `\".',  `\\  `|  )\n");
            printf("        \\ \\           .'     . ||   || ||.'\n");
            printf("         `>`.,.....-----\"'\"\"\"\"\\`|   |' |||\n");
            printf("         / .||D.\\\\|.'\\ () (_) (\\|  j|  j/|\n");
            printf("        / +,|| ||||_____........|  || / .'\n");
            printf("     _,'.\"'_|\\.'/|   _,---._    |  .' ,'\n");
            printf("  .\"' .   '\"j-...' ,' ,     `. .'  '  |\n");
            printf(" /  ,/  ,'.'`     /  /       ,'       `.\n");
            printf(" | /| ,`./   \\   / .'        |         |.\n");
            printf(" | ||_|./ .   `.j /          `.        | )\n");
            printf(" `-'`.+' /      | `          ,'`.__     Y\n");
            printf("     .' /       | `.       .'   /  `\"\"'\"\n");
            printf("     |  '      /|    .___.'   ,'\n");
            printf("      `.   / -' `.        ,   `.\n");
            printf("       |  /       `+.     |     `.\n");
            printf("       |  \\        | `    `       \\\n");
            printf("        \\  `.      |`.`.   `.      |\n");
            printf("         \\   `.    |  `..    `.    '\n");
            printf("         /     `-. |    `.     `  /\n");
            printf("  ____.-'          `.  _,'      --\\\n");
            printf(",' .'_.,_.         __:\"            `.\n");
            printf("| ( | (         ,-\" ,-'.\" ,'_.      |\n");
            printf("`-`-^--`--------'__|__(  | /   _,--\"\n");
            printf("                       \"\"--'..' \n");

            break;
        case 7:
            bpurple();
            printf("                                        _.---.\n");
            printf("              __             _____  _.-'      |\n");
            printf("    .\"\"\"--._,'  \\          .\"     \"\"          |\n");
            printf("    '.    `.`._ /          |                 / `.\n");
            printf(" .---'      `._|  _,....._  `.___          .`   /\n");
            printf("|     ...._   .`\"'    __  `\"-. ` `.     _.'___,'\n");
            printf("`._      `.`.'\\     ,\"  `.    `.)`.`-\"\"'_.\" .'\n");
            printf("   |.____.,'. |   _/ .    ;__  ,   ``\"\"\"     `.\n");
            printf("   |,-.  /    ' .\" |     ,__ `.'           . ,'\n");
            printf("   '   `j`---'.',-\"`----'   `\"| \\ __       | |\n");
            printf("    `.  |   `'\"'            .  \\ `._\"..__.'  .\n");
            printf("     |  '                  /:  |\"`--',..\"     |\n");
            printf("     |`. `.___...----.....' '  `    |  |     .'\n");
            printf("     |-.`.__,--|          |\"   :    |  |    /(\n");
            printf("    .   `-.___.|   ,--.,-\"|    ``.  |  |   . .'\n");
            printf("    `          |  /       |   . `.`.`--' ,'.'  `-\n");
            printf("     '.        | /        |   |   `.`...-,'      |\n");
            printf("      '`-._  _/|j        /  ,.'     '---\"   _..-\"|\n");
            printf("       `._.`\" |||       / .','            .' _..'|\n");
            printf("        |  `..||\\     ,'.\".-     ``.    .' .'    `.\n");
            printf("        |     \\`\"-..-'  :|         \\`\"\"' .'     .'.`.\n");
            printf("       ,'      `-----.-\".'   '`._   `\"--'     .','   \\\n");
            printf("      .               `\"      `..-'     .\"\"`-','.'   |\n");
            printf("      |.__..        ___       .        /.'\"\"\" .'     '.\n");
            printf("      '___.--..__.-\"_..`.    ,..___  ,'  `\"'\"'       _.'.\n");
            printf("        '---. `.__,\"`._`-._,' `----`'              .'  ,-'\\\n");
            printf("     _,'  ___`--\"                      ,-'\"`..___.' .-'   |\n");
            printf("   ,\"   ,..-.`\"._  ___..._    .\"\"..__,'.'\"\"`-......'       `._\n");
            printf("  /    _____ `.__`\" _.-\"'       `-..--\"       _...._  _....__ `.\n");
            printf("  | .\"'----.`._  `\"\"       ,.\"\"--._         _.....,_`\"_.----...'\n");
            printf("  `------'\"\"`._`.      _,.--\"''\"\"--......-\"'        \"\"\n");
            printf("               `\"-----\" \n");

            reset();
            break;
        case 8:
            printf("          _...-----'`._\n");
            printf("      _,-'   _`. .\"\". \\`._\n");
            printf("    ,'    ,-'   ` ` |  \\/--.\n");
            printf("  ,:_  ,-'       ` `|  |`.  `.\n");
            printf(" /   `'-..        `  .-'  `   \\\n");
            printf("j         `.--,    \\       `   :\n");
            printf("|         '--' |    \\       `._'-.\n");
            printf("|___     |     |     L      .'    `.\n");
            printf("|   `-. /|___.' `.   |    .'.       .\n");
            printf("|     ,'          .  j.  /   `.      \\\n");
            printf(".  _,'            |,'  `.      \\   ,<`.\n");
            printf(" .'             _.-      `      j.'  \\ \\                          ,.\n");
            printf("  `       ,v-\"\"'   \\      )__,+'      . \\                       ,' |\n");
            printf("   `.    / |  /  _,'`.  ,'  \\  \\       /`.                   _.:   |\n");
            printf("     `,-'-`  / ,'     \\'    j,  \\   ,.'   L               ,-'   . F\n");
            printf("     / ,. | / .        \\  .'     \\.-\\     |         _,.-\"`.     `,'\n");
            printf("     (_\\/|'|   \\        .'   _,-\"    `    +....---+'       `     '\n");
            printf("     . \\ |.     \\    ,.^---`<_        | ,'||       \\        \\   /\n");
            printf("      `.'| \\_    :v-'         `.      |-  | \\ __..--\\     _,'\\,'\n");
            printf("        `'/`----'/              '.  ,'    |  Y       L_,-'  ,'\n");
            printf("          \\     /            ___,.'\\     j   |       |    .'\n");
            printf("           \\   .\"`\",\"\"'\"\"\"'\"`     | .   .'   |       |  ,'\n");
            printf("            \\  |   |         |    | | .' j,.-|       j-'\n");
            printf("             `. ___|________/.....|_Y'  /    |   _.-'\n");
            printf("          __,-' \\                 |    /    _j,-'\n");
            printf("         '--.    .                `...+---\"\"\n");
            printf("        `_____\\  _`..__    __,..-\"'\n");
            printf("              .-'_|._  `\"\"\"       \\\n");
            printf("             , -'    .          __/\n");
            printf("             \"------------\"\"\"\"\"\" \n");
            printf("\n");

            break;
        case 9:
            printf("                   ..-`\"-._\n");
            printf("                 ,'      ,'`.\n");
            printf("               ,f \\   . / ,-'-.\n");
            printf("              '  `. | |  , ,'`|\n");
            printf("             `.-.  \\| | ,.' ,-.\\\n");
            printf("              /| |. ` | /.'\"||Y .\n");
            printf("             . |_|U_\\.|//_U_||. |\n");
            printf("             | j    /   .    \\ |'\n");
            printf("              L    /     \\    .j`\n");
            printf("               .  `\"`._,--|  //  \\\n");
            printf("               j   `.   ,'  , \\   L\n");
            printf("          ____/      `\"'     \\ L  |\n");
            printf("       ,-'   ,'               \\|'-+.\n");
            printf("      /    ,'                  .    \\\n");
            printf("     /    /                     `    `.\n");
            printf("    . |  j                       \\     \\\n");
            printf("    |F   |                        '   \\ .\n");
            printf("    ||  F                         |   |\\|\n");
            printf("    ||  |                         |   | |\n");
            printf("    ||  |                         |   | |\n");
            printf("    `.._L                         |  ,' '\n");
            printf("     .   |                        |,| ,'\n");
            printf("      `  |                    '|||  j/\n");
            printf("       `.'    .             ,'   /  '\n");
            printf("         \\\\    `._        ,'    / ,'\n");
            printf("          .\\         ._ ,'     /,'\n");
            printf("            .  ,   .'| \\  (   //\n");
            printf("            j_|'_,'  |  ._'` / `.\n");
            printf("           ' |  |    |   |  Y    `.\n");
            printf("    ,.__  `; |  |-\"\"\"^\"\"\"'  |.--\"\"`\n");
            printf(" ,--\\   \"\"\" ,    \\  / \\ ,-     \"\"\"\"---.\n");
            printf("'.--`v.=:.-'  .  L.\"`\"'\"\\   ,  `.,.._ /`.\n");
            printf("     .L    j-\"`.   `\\    j  |`.  \"'--\"\"`-'\n");
            printf("     / |_,'    L ,-.|   (/`.)  `-\\.-'\\\n");
            printf("    `-\"\"        `. |     l /     `-\"`-'\n");
            printf("                  `      `- \n");

            break;
        case 10:
            printf("                                               _,'|\n");
            printf("                                             .'  /\n");
            printf("                    __                     ,'   '\n");
            printf("                   `  `.                 .'    '\n");
            printf("                    \\   `.             ,'     '\n");
            printf("                     \\    `.          ,      /\n");
            printf("                      .     `.       /      ,\n");
            printf("                      '       ..__../'     /\n");
            printf("                       \\     ,\"'   '      . _.._\n");
            printf("                        \\  ,'             |'    `\"._\n");
            printf("                         |/               ,---.._   `.\n");
            printf("                       ,-|           .   '       `-.  \\\n");
            printf("                     ,'  |     ,   ,'   :           '__\\_\n");
            printf("                     |  /,_   /  ,U|    '            |   .__\n");
            printf("                     `,' `.\\ `./..-'  __ \\           |   `. `.\n");
            printf("                       `\",_|  /     ,\"  `.`._       .|     \\ |\n");
            printf("                      / /_.| j  ---'.     `._`-----`.`     | |\n");
            printf("                     / // ,|`'  `-/' `.      `\"/-+--'    ,'  `.\n");
            printf("                 _,.`,'| / |.'  -,' \\  \\       \\ '._    /     |\n");
            printf(" .--.      _,.-\"'   `| L \\ \\__ ,^.__.\\  `.  _,--`._,>+-'  __,-'\n");
            printf(":    \\   ,'          |  | \\          /.   `'      '.  `--'| \\\n");
            printf("'    | ,-.. `'   _,--' ,'  \\        `.\\            7      |,.\\\n");
            printf(" `._ '.  .`.    .>  `-.-    |-.\"\"---..-\\        _>`       `.-'\n");
            printf("    `.,' | l  ,' ,>         | `.___,....\\._    ,--``-.\n");
            printf("   j | .'|_|.'  /_         /   _|         \\`\"--+--.   ` ,..._\n");
            printf("   |_`-'/  |     ,' ,.._,.'\"\"\"'\\           `--'    `-..'     `\".\n");
            printf("     \"-'_,+'\\    '^-     |      \\                    /         |\n");
            printf("          |_/         __ \\       .                   `.`.._  ,'`.\n");
            printf("                  _.:'__`'        `,.                  |   `'   |\n");
            printf("                 `--`-..`\"        /--`               ,-`        |\n");
            printf("                   `---'---------'                   \"\"| `#     '.\n");
            printf("                                                       `._,       `:._\n");
            printf("                                                         `|   ,..  |  '.\n");
            printf("                                                         j   '.  `-+---'\n");
            printf("                                                         |,.. |\n");
            printf("                                                          `. `;\n");
            printf("                                                            `' \n");

            break;
        case 11:
            printf("       ,-.                                            ___.._\n");
            printf(" _     `. `.                                    _,-\"\"\"      ',._\n");
            printf("`.`.      `.\\                                _,'         _..-'  `.\n");
            printf("  `._\\       `.                            ,'         _,'_,.-'-.  \\\n");
            printf("      `.       `.                        ,'        ,-',-\"       \\  .\n");
            printf("        `.       \\                      /  _,----\"',-'           L  L\n");
            printf("          `.      \\                   ,' _.--\"-.  [              |  |\n");
            printf("            `.     .                 / ,'       | |     _..---../   |\n");
            printf("              .     L               / /         | j ,.-'        `   |\n");
            printf("               \\    .              ' /          j ,'             |  |\n");
            printf("                \\    .            ' /          ' /               |  |\n");
            printf("                 \\   l           / /          /,'                j  '\n");
            printf("                  L__L._        / /          +'      __,........'  j\n");
            printf("                ,'   '  \"`.    / /         .' _,.--'\"           \\  |\n");
            printf("               /,\"\"-.      `. ' '        _/.-'                  | F\n");
            printf("              /|   / l       . /       ,'                       | |\n");
            printf("             | |  /  |       ]'      ,'                         | |\n");
            printf("            ,._\\\"'   |       |     ,'-'\"\"\"\"\"\"\"\"\"\"\"\"\"'----.._    / |\n");
            printf("            |  \\`.._,'       F  _,'                         `--'  |\n");
            printf("            `..'           _/ ,:_____                         L   |\n");
            printf("              `..          .-'       `'--.._                   | j\n");
            printf("            _,. /,---.       \\              `--..              | |\n");
            printf("           F  <j-.'   `       ._                 `\"-._        j  '\n");
            printf("           |  <|`,.    |       `L._                   `..   _, ,'\n");
            printf("           `..<|`.___,'        |.  `-.                   Y\"' _.\n");
            printf("              `L               | `.   `-.._____________,',.-'\n");
            printf("                `.            .Y   \\      `\"\".\"\"\"\"\".  .\"'\n");
            printf("                  `.        ,' |\\   `.        `+-._ \\  |\n");
            printf("                    `,--. -'   | .    `.       `   `.| |\n");
            printf("                    /    //    |  \\    ``-..___/     | |\n");
            printf("                   j    .l     |   .    F   \\   `   F  |\n");
            printf("                   |    ||     |    `   `    .   ` ,  /\n");
            printf("                   |    ||    F      `-.|     . _,' _'\n");
            printf("                   |   / |    |       `._`-----'  ,'\n");
            printf("                   |  /  |   /           `-------'\n");
            printf("                   l /   \\_,'\n");
            printf("                    \" \n");

            break;
        case 12:
            printf("                                                       _\n");
            printf("                                       ___            | |\n");
            printf("                                   .-\"'   `...._      | |\n");
            printf("                      _,--\"'-.   ,' .           `.    | |\n");
            printf("                    .'       ,`,'    \\            `.  | |\n");
            printf("                  ,'.      .','       \\            | j  |\n");
            printf("           __,..,'   `----\"  `         \\       _..-+.`  |..\n");
            printf("        ,'\"     .             '._  ___...-._ ,'     |   |  `--.\n");
            printf("       /       _|              | `\"        .'       |   |      `.\n");
            printf("      /`  _.-`'  ._..----\"\"`._ |         ,'         |   |        .\n");
            printf("     | .-\"         `-._    _,.' `.     .'          j    |         `.\n");
            printf("  ,-\"\"\"--..._       |  '`\"\"       `-../\\     _,\"''\"|    |.._       ,|\n");
            printf(" /    '.     `\"----,'                 ` '._,'      |   j    `.   .' |\n");
            printf("/_.-'\"  `-.___..-.\"                    \\ ,'   \\    |   '    | `.'   '\n");
            printf("`                |                    _.'          |  |,_   '   `. /\n");
            printf(" .        _______|                 .-'    |.       `. '           |\n");
            printf("  `...---\"     .-'               .'       | `.                 ,  '\n");
            printf("  ,'._     _,-\"                  `        |  ,`.  ,  .    _.-'|    `.\n");
            printf(" .    `\"\"-'    `.                 \\       `.....`.     .-',   |      .\n");
            printf(" |             _,|                 ._ --.        |     '\"--...       '\n");
            printf("  `.--\"`.....-\" ,                    /\".`        |   |        _____,'\n");
            printf("    .       | .'_                   /   \\        |  j       \"'_,..'\n");
            printf("     /`-...-+\"   `.                 '   .'.__ -..'  |_,..   ,'  |\n");
            printf("    '          ____.                 \\  |    \"`-..___,....-.    '\n");
            printf("     .     _.\"\"'   |                  `. .                 / .-'\n");
            printf("      `. .'       .._                   \\ \\               / /\n");
            printf("        `-._   _.'   `.                  \\.--......____ .' /\n");
            printf("          .'`\"\"    .'  .                  .            '_.'\n");
            printf("          |       /    |____               `\"._     _,-\"      ,-'\"'\n");
            printf("           `. _.,'     |    `.                 `--\"'       _.--,.'\n");
            printf("             `'--.__,.\"       |                          ,' .' |\n");
            printf("                   |   ,.._   |\"--._                  ,-+-.'  /\n");
            printf("                   `..'    ``.'   ,.`.     _..__.-\"\"\"-.__.'\\\"'\n");
            printf("                     `----.,\"    '   .--..'   _..`-../:  _,'\n");
            printf("                           .    /  .'  _.'\\.-\"  |     '-\"\n");
            printf("                            \"--+--\"`..'   |.   ,^.__,'\n");
            printf("                                     `---\"  `-\" \n");

            break;
        case 13:
            bpurple();
            printf("                 |`._         |\\\n");
            printf("                 `   `.  .    | `.    |`.\n");
            printf("                  .    `.|`-. |   `-..'  \\           _,.-'\n");
            printf("                  '      `-. `.           \\ /|   _,-'   /\n");
            printf("              .--..'        `._`           ` |.-'      /\n");
            printf("               \\   |                                  /\n");
            printf("            ,..'   '                                 /\n");
            printf("            `.                                      /\n");
            printf("            _`.---                                 /\n");
            printf("        _,-'               `.                 ,-  /\"-._\n");
            printf("      ,\"                   | `.             ,'|   `    `.\n");
            printf("    .'                     |   `.         .'  |    .     `.\n");
            printf("  ,'                       '   ()`.     ,'()  '    |       `.\n");
            printf("'-.                    |`.  `.....-'    -----' _   |         .\n");
            printf(" / ,   ________..'     '  `-._              _.'/   |         :\n");
            printf(" ` '-\"\" _,.--\"'         \\   | `\"+--......-+' //   j `\"--.. , '\n");
            printf("    `.'\"    .'           `. |   |     |   / //    .       ` '\n");
            printf("      `.   /               `'   |    j   /,.'     '\n");
            printf("        \\ /                  `-.|_   |_.-'       /\\\n");
            printf("         /                        `\"\"          .'  \\\n");
            printf("        j                                           .\n");
            printf("        |                                 _,        |\n");
            printf("        |             ,^._            _.-\"          '\n");
            printf("        |          _.'    `'\"\"`----`\"'   `._       '\n");
            printf("        j__     _,'                         `-.'-.\"`\n");
            printf("          ',-.,' \n");
            reset();

            break;
        case 15:
            printf("                                      ,'\"\"`--.\n");
            printf("                                     |     __ `-.\n");
            printf("                                     |    /  `.  `.\n");
            printf("                                      \\        ,   `.\n");
            printf("                                       `.      \\_    `.\n");
            printf("                                         `.    | `.    \\\n");
            printf("                                           `--\"    `.   `\n");
            printf("                                                     `.  `\n");
            printf("                 ,.._                                  \\  `\n");
            printf("               /_,.  `.                                 \\  `\n");
            printf("              j/   .   \\                  ___            \\  \\\n");
            printf("              |    |   `____         _,--'   `.           .  L\n");
            printf("               L  /`--\"'    `'--._ ,'   ,-`'\\ |            . |\n");
            printf("                |-                /  ,''     ||            | |\n");
            printf("     -v._      /                   ,'        ||            | |\n");
            printf("       `.`-._,'               _     \\        |j    _,...   | |\n");
            printf("         `,.'             _,-. \\     |      /,---\"\"     `- | |\n");
            printf("        .'              ,\".   ||     `..___/,'            `' |\n");
            printf("        |   ,         _/`-'  /,'                            `|\n");
            printf("        |-.__.-'\"''\"\"' \"\"\"\"\"\"\"\"--`_,...-----''''--...--      `.\n");
            printf("         `.____,..              \"\"   __,..---\"\"\"              |\n");
            printf("          |       `              --\"'.                        `\n");
            printf("          |     ,' `._                \\'                       `\n");
            printf("          | |  .^.    `.             /                          `.\n");
            printf("         ,'_]__|  \\   / `.          /          /____._            `._\n");
            printf("       ,'          \\ j    '        /          /       `.             `.\n");
            printf(" ___,.' `._       __L/    |     __'          /     _, / \\             |\n");
            printf("`-._       L,.-\"\"\"  .    ,' _.-','          /-----'-./   `--.         |\n");
            printf("   '   / ,'         '..'\"_,'    /         F /  .\"'_,'        |.__     '\n");
            printf("  / ,.\\,'              \"\"      /         / (,'\\ .'        ,.-\"'  `.  j\n");
            printf("  -'   '                      /        ,'     `\"         / __/' .- ,'\n");
            printf("                           __.'\"`.    /                 `-' | _,L,'\n");
            printf("                         .',      `\"\"'                      '/,--\n");
            printf("                          / _..' _,,'\n");
            printf("                          ,' `-\"' \n");

            break;
        case 16:
            printf("                                 _\n");
            printf("                              ,\"'_\\\n");
            printf("                         ,\"\\  `.\"  \\       ,..._\n");
            printf("                        '.' \\   \\   .     ('\"\"`.\\     _\n");
            printf("                         \\   \\  `.  |      /=.:.'  ,:`.`.\n");
            printf("                          \\   \\.';  |\"\"\"\"\"`-./   .'   .`\n");
            printf("                           \\   `\"   '         `.'   ,' ,\"`.\n");
            printf("                            `.___..'            `. `..:'`./\n");
            printf("                            /             _,.._   \\    _.'\n");
            printf("                 _....__   /            ,\"     `.  ._,'\n");
            printf("             ,-\"'       `\"+.           :         . |\n");
            printf("+'\"|\"\"'-.  ,'               `.         |      \"  | |\n");
            printf("\\\\_|__   `:                   \\         \\       /  |          _,-.\n");
            printf("      :)  |        ,.-----.    \\         ._   .'   '._    _,-'`\\  j\n");
            printf("  ...,'   |       /        \\    . __ _ _,\".`\"'   ,'   `.,\"    _.`\"\n");
            printf("  \\\\ |  _,'      .          .   || |I ' -'|    _, _     `   ,\"'  _.\".\n");
            printf("  `\"\"'':         '     \"    |   |`\"'^\"`\"| /  ,`:://\\     \\  `..-' \\  '\n");
            printf("       '          \\        /   ,\"\"`--..`\"\"-\"`\"\"':{.|      .      _,+\"\n");
            printf("        .          `-....-'   :`:'-|            |l,'      |.__.-\"\n");
            printf("         \\,.                  '. :/                       |\n");
            printf("     .-.\":`.`.              ,'  \"'     ,\"-.   _       _,._|\n");
            printf("     \\`. \\`,\"`._        __,:      .    `.'/`,'.`.   .'    '\n");
            printf("      '.`.;     \"--+--'\"_  `       `     `.` \"' ; ,'  .  /\n");
            printf("        `\"         ||  :|.  :       `.     \\_:.' :    _.'\n");
            printf("                   ||  |||__|         `._        `...\"\n");
            printf("                   ||__||| _|            `\"-....-\"\\\\,\\\n");
            printf("                   || _| `\"                  \\\\  \\ \\\\'\n");
            printf("                   `\"'                        \\`.-\\\n");
            printf("                                               \\\\.' \n");

            break;
        case 17:
            bpurple();
            printf("                                       __,......._\n");
            printf("    _............___          ____....<__         `\"._\n");
            printf("   '._      `\",     `'--._,.-'   ___     `\"-.    ___..>---,---------..\n");
            printf(" ____ -.,..--\"            `-  ,-'   `       .`-\"'       .'_         ,-'\n");
            printf("'._  \"\"'-.                  .'     _.._                    `-._ ,.-'\n");
            printf("   `-._   `._              .     ,'    `.                    ,-'----.._\n");
            printf("       _>.   -.            `     |      |                _,-'          )\n");
            printf(",..--\"\"`--\"\"\"\"\"`-.          \\    `-.    |             ,.+.__   _,;---\"\"\n");
            printf("\\_ |              `.         `.       _.'         _,-`      `\"\"   `.\n");
            printf("  \"\\                `       / _`\"----'           '                 /-.\n");
            printf("   `.____                  |  #      #' \\                         `,..'\n");
            printf("       ,-\"--...__          `--        --'                   ___,..'\n");
            printf("      '-.---\"'  |           -.,........,            ,.---\"\"\" .\n");
            printf("                |            |        \\'             \\\"\"--..._`\n");
            printf("                |             \\       /              |\n");
            printf("                .              `.    /               |\n");
            printf("                 ,               `--'                j\n");
            printf("                j \\                                 /\n");
            printf("                |  .                               '`.\n");
            printf("                 L._`.                           .' ,|\n");
            printf("                 |  `.:-._                    _,' ,' |\n");
            printf("                 `.,'| \"\"\"`.__            _,< _..-   '\n");
            printf("                     `...-'   `----------'   `-.__|`' \n");
            reset();

            break;
        }
    }
//Function to create new attack
    attack new_attack (char* name, int damage, char* type)
    {
        attack a = {name, damage, string_type_to_int(type)};
        return(a);
    }
//Displaying the spells on the console
    void get_attack (attack att)
    {
        printf("\t\t\t\t\t\t\t(%s, %s, %d)\n", att.Name, int_type_to_string(att.Type), att.Damage);
    }
    Pokemon new_pokemon(char* name, char* type, int level, int offense, int defense, int maxhp, int hp, attack att1, attack att2, attack att3, attack att4)
    {
        Pokemon pok = {name, string_type_to_int(type), level, offense, defense, maxhp, hp};
        pok.attacks[0] = att1;
        pok.attacks[1] = att2;
        pok.attacks[2] = att3;
        pok.attacks[3] = att4;
        return(pok);
    }
//HP bar of the Pokemons
    void get_life (Pokemon pok)
    {
        int frac = (10 * pok.Hp/pok.Maxhp);
        int i;
        printf("[");
        for (i = 0; i < frac; i++)
        {
            onigreen();
            if(frac<7 && frac>4)
            {
                oniyellow();
                //byellow();
            }
            else if(frac<=4)
            {
                onired();
                //bred();
            }
            printf("=_");
            reset();
        }
        //Until the sum of the two makes 10
        for (i = 0; i < (10 - frac); i++)
        {
            printf("  ");
        }
        printf("]");
    }
    void get_Pokemon (int choice, Pokemon pok)
    {
        if (choice == 0) //without the attacks
        {
            //printf("Opponent\tPokemon:%s  \tLevel:%d\tType:%s\n\t\t", pok.Name, pok.Level, int_type_to_string(pok.Type));
            printf("\t\t\t\t\t\t\t\t\t\t\tOpponent\tPokemon:%s  \tLevel:%d\tType:",pok.Name, pok.Level);
            if(pok.Type==1)
            {
                onred();
            }
            if(pok.Type==2)
            {
                oncyan();
            }
            if(pok.Type==3)
            {
                oniyellow();
            }
            if(pok.Type==4)
            {
                onigreen();
            }
            if(pok.Type==5)
            {
                onicyan();
            }
            if(pok.Type==6)
            {
                onired();
            }
            if(pok.Type==7)
            {
                onpurple();
            }
            if(pok.Type==8)
            {
                onyellow();
            }
            if(pok.Type==9)
            {
                onipurple();
            }
            if(pok.Type==10)
            {
                onpurple();
            }
            if(pok.Type==11)
            {
                ongreen();
            }
            if(pok.Type==12)
            {
                onyellow();
            }
            if(pok.Type==13)
            {
                onipurple();
            }
            if(pok.Type==14)
            {
                onpurple();
            }
            if(pok.Type==15)
            {
                oniblack();
            }
            if(pok.Type==16)
            {
                oniwhite();
            }
            if(pok.Type==17)
            {
                onpurple();
            }
            printf("%s",int_type_to_string(pok.Type));
            reset();
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t");
            get_life(pok);
            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tHealth:%d/%d\n\n\n\n", pok.Hp, pok.Maxhp);
            printf("\n");
            print_pokemon(pok.Type);
            printf("\n");
        }
        else if (choice == 1) //with the attacks
        {
            //printf("Player\t\tPokemon:%s  \tLevel:%d\tType:%s\n\t\t", pok.Name, pok.Level, int_type_to_string(pok.Type));
            printf("\t\t\t\t\t\tPlayer\tPokemon:%s  \tLevel:%d\tType:",pok.Name, pok.Level);
            if(pok.Type==1)
            {
                onred();
            }
            if(pok.Type==2)
            {
                onblue();
            }
            if(pok.Type==3)
            {
                oniyellow();
            }
            if(pok.Type==4)
            {
                onigreen();
            }
            if(pok.Type==5)
            {
                oniblue();
            }
            if(pok.Type==6)
            {
                onired();
            }
            if(pok.Type==7)
            {
                onpurple();
            }
            if(pok.Type==8)
            {
                onyellow();
            }
            if(pok.Type==9)
            {
                onipurple();
            }
            if(pok.Type==10)
            {
                onpurple();
            }
            if(pok.Type==11)
            {
                ongreen();
            }
            if(pok.Type==12)
            {
                onyellow();
            }
            if(pok.Type==13)
            {
                onipurple();
            }
            if(pok.Type==14)
            {
                onpurple();
            }
            if(pok.Type==15)
            {
                oniblack();
            }
            if(pok.Type==16)
            {
                oniwhite();
            }
            if(pok.Type==17)
            {
                onpurple();
            }
            printf("%s",int_type_to_string(pok.Type));
            reset();
            printf("\t\t\t\t\t\t\n\t\t\t\t\t\t\t");
            get_life(pok);
            printf("\tHealth:%d/%d\n\t\t\t\t\t\t\tAttack:%d\t\tDefense:%d\n", pok.Hp, pok.Maxhp, pok.Offense, pok.Defense);
            printf("\t\t\t\t\t\tAttacks : \n");
            get_attack(pok.attacks[0]);
            get_attack(pok.attacks[1]);
            get_attack(pok.attacks[2]);
            get_attack(pok.attacks[3]);
            printf("\n");
            //printf("\n");
            print_pokemon(pok.Type);
            printf("\n");
        }
    }
    Pokemon level_up(Pokemon pok)
    {
        pok.Offense = pok.Offense + pok.Level;
        pok.Defense = pok.Defense + pok.Level;
//Increasing the max HP at the same time
        pok.Maxhp = pok.Maxhp + pok.Level;
        (pok.Level)++;
        return pok;
    }
//type advantage function (1x,2x,4x damage to stay in integer)
    int effect (Pokemon pok, attack att)
    {
        return(eff[att.Type - 1][pok.Type - 1]);
    }
//Calculating the damage dealt on Pokemon 2 by Pokemon 1
    int hit (attack att, Pokemon pok1, Pokemon pok2)
    {
        //Divide by 2 to counter effect
        int N = effect(pok2, att) * (pok1.Offense + att.Damage) / (2 * pok2.Defense);
        Delay(1000);
        print_pokemon(pok1.Type);
        printf("\n\n\n\n\n\t\t\t\t\t%s used %s.\n", pok1.Name, att.Name);
        LoadMusicsupereffective();
        //Mix_HaltMusic();
        Mix_PlayMusic(bg6,-1);
        LoadMusicfight2();
        Mix_HaltMusic();
        Mix_PlayMusic(bg4,-1);
        //Displaying effectiveness of each attack
        if (effect(pok2, att) == 4)
        {
            Delay(1000);
            printf("\n\t\t\t\t\t");
            printf("\033[0;92mIt was Super Effective\033[0m!!!\n");
            LoadMusicsupereffective();
            //Mix_HaltMusic();
            Mix_PlayMusic(bg6,-1);
            LoadMusicfight2();
            Mix_HaltMusic();
            Mix_PlayMusic(bg4,-1);
            Delay(900);
        }
        else if (effect(pok2, att) == 1)
        {
            Delay(1000);
            printf("\n\t\t\t\t\t");
            printf("\033[0;91mIt wasn't very effective\033[0m.\n");
            LoadMusicnoteffective();
            //Mix_HaltMusic();
            Mix_PlayMusic(bg7,-1);
            LoadMusicfight2();
            Mix_HaltMusic();
            Mix_PlayMusic(bg4,-1);
            Delay(900);
        }
        printf("\t\t\t\t\t");
        Delay(900);
        printf("%s took %d points of damage.\n\n", pok2.Name, N);
        Delay(500);

        printf("\t\t\t\t\t");
        pause();
        clean();
        return N;
    }
//Choosing attack by player
    attack chosen_attack(Pokemon pok)
    {
        int attselect;
        char number[1];
        printf("Select an attack from 1 to 4.\n");
        scanf("%s", number);
        attselect = atoi(number);
        //For invalid input
        if (attselect < 1 || attselect > 4)
        {
            printf("Invalid Entry. Select an attack from 1 to 4.\n\n");
            return(chosen_attack(pok));
        }
        return(pok.attacks[attselect - 1]);
    }
//Function that checks if a Pokemon is alive or not
    int is_alive(Pokemon pok)
    {
        if (pok.Hp <= 0)
        {
            return 0;
        }
        return 1;
    }
//Basic max min functions
    int max(int a, int b)
    {
        return ((a)>(b))?(a):(b);
    }
    int min(int a, int b)
    {
        return ((a)<(b))?(a):(b);
    }
//attack choosing function for CPU
    attack att_CPU_rand (Pokemon pok)
    {
        int att;
        srand((unsigned)time(NULL));//Seeds the pseudo-random number generator used by rand() with the value seed.
        att=(rand()%4);
        return(pok.attacks[att]);
    }
//CPU seeking max damage
    attack att_CPU_max (Pokemon pok1, Pokemon pok2)
    {
        int i;
        int res = effect(pok2, pok1.attacks[0]) * (pok1.Offense + pok1.attacks[0].Damage) / (2 * pok2.Defense);
        int j = 0;
        int hit = 0;
        for (i = 1; i < 4; i++)
        {
            hit = effect(pok2, pok1.attacks[i]) * (pok1.Offense + pok1.attacks[i].Damage) / (2 * pok2.Defense);
            if (max(res, hit) != res)
            {
                res = hit;
                j = i;
            }
        }
        //returns the strongest attack
        return(pok1.attacks[j]);
    }
//CPU seeking min damage
    attack att_CPU_min (Pokemon pok1, Pokemon pok2)
    {
        int i;
        int res = effect(pok2, pok1.attacks[0]) * (pok1.Offense + pok1.attacks[0].Damage) / (2 * pok2.Defense);
        int j = 0;
        int hit = 0;
        for (i = 1; i < 4; i++)
        {
            hit = effect(pok2, pok1.attacks[i]) * (pok1.Offense + pok1.attacks[i].Damage) / (2 * pok2.Defense);
            if (min(res, hit) != res)
            {
                res = hit;
                j = i;
            }
        }
        //Returns the weakest attack
        return(pok1.attacks[j]);
    }
    //Function for healing a pokemon
//SuperPotion
    Pokemon heal1(Pokemon poke)
    {
        int healing=((poke.Maxhp)-(poke.Hp))/2;
        if(superpotion)
        {
            (poke.Hp)+=healing;
            superpotion--;
            printf("\n\t\t\t\t\t%s ",poke.Name);
            char *str="has regained ";
            int i=0;
            while (str[i] != '\0')
            {
                putchar(str[i]);
                fflush(stdout);
                Delay(100);
                i++;
            }
            printf("%d Health Points.\n",healing);
        }
        else
        {
            printf("\n\t\t\t\t\t");
            char *str="Sorry, you don't have any Super Health Potions left...\n";
            int i=0;
            while (str[i] != '\0')
            {
                putchar(str[i]);
                fflush(stdout);
                Delay(100);
                i++;
            }
        }
        return poke;
    }
//Function for amplifying attack damage
//X Attack
    Pokemon attackplus1(Pokemon poke)
    {
        int amplification=(poke.Offense)/8;
        if(xattack)
        {
            (poke.Offense)+=amplification;
            xattack--;
            printf("\t\t\t\t\t%s ",poke.Name);
            char *str="has amplified attack damage by ";
            int i=0;
            while (str[i] != '\0')
            {
                putchar(str[i]);
                fflush(stdout);
                Delay(100);
                i++;
            }
            printf("%d offense points.\n",amplification);
        }
        else
        {
            printf("\n\t\t\t\t\t");
            char *str="Sorry, you don't have any X Attack left...\n";
            int i=0;
            while (str[i] != '\0')
            {
                putchar(str[i]);
                fflush(stdout);
                Delay(100);
                i++;
            }
        }
        return poke;
    }
//Function to increase defense
//X Defense
    Pokemon defenseplus1(Pokemon poke)
    {
        int amplification=(poke.Defense)/8;
        if(xdefense)
        {
            (poke.Defense)+=amplification;
            xdefense--;
            printf("\t\t\t\t\t%s ",poke.Name);
            char *str="has fortified Defense by ";
            int i=0;
            while (str[i] != '\0')
            {
                putchar(str[i]);
                fflush(stdout);
                Delay(100);
                i++;
            }
            printf("%d defense points.\n",amplification);
        }
        else
        {
            printf("\n\t\t\t\t\t");
            char *str="Sorry, you don't have any X Defense remaining...\n";
            int i=0;
            while (str[i] != '\0')
            {
                putchar(str[i]);
                fflush(stdout);
                Delay(100);
                i++;
            }
        }
        return poke;
    }
//Potion
    Pokemon heal2(Pokemon poke)
    {
        int healing=((poke.Maxhp)-(poke.Hp))/4;
        if(potion)
        {
            (poke.Hp)+=healing;
            potion--;
            printf("\n\t\t\t\t\t%s ",poke.Name);
            char *str="has regained ";
            int i=0;
            while (str[i] != '\0')
            {
                putchar(str[i]);
                fflush(stdout);
                Delay(100);
                i++;
            }
            printf("%d Health Points.\n",healing);
        }
        else
        {
            printf("\n\t\t\t\t\t");
            char *str="Sorry, you don't have any Super Health Potions left...\n";
            int i=0;
            while (str[i] != '\0')
            {
                putchar(str[i]);
                fflush(stdout);
                Delay(100);
                i++;
            }
        }
        return  poke;
    }
//Function for amplifying attack damage
//Dire Hit
    Pokemon attackplus2(Pokemon poke)
    {
        int amplification=((poke.Offense)*2);
        if(direhit)
        {
            (poke.Offense)+=amplification;
            direhit--;
            printf("\t\t\t\t\t%s ",poke.Name);
            char *str="has amplified attack damage by ";
            int i=0;
            while (str[i] != '\0')
            {
                putchar(str[i]);
                fflush(stdout);
                Delay(100);
                i++;
            }
            printf("%d offense points.\n",amplification);
            printf("\t\t\t\t\t");
            char *str1="CRITICAL DAMAGE DEALT!!!\n";
            i=0;
            ired();
            while (str1[i] != '\0')
            {
                putchar(str1[i]);
                fflush(stdout);
                Delay(100);
                i++;
            }
            reset();
        }
        else
        {
            printf("\n\t\t\t\t\t");
            char *str="Sorry, you don't have any Dire Hits left...\n";
            int i=0;
            while (str[i] != '\0')
            {
                putchar(str[i]);
                fflush(stdout);
                Delay(100);
                i++;
            }
        }
        return poke;
    }
//Function to increase defense
//Tough Candy XL
    Pokemon defenseplus2(Pokemon poke)
    {
        int amplification=(poke.Defense)/4;
        if(toughcandy)
        {
            (poke.Defense)+=amplification;
            toughcandy--;
            printf("\t\t\t\t\t%s ",poke.Name);
            char *str="has fortified Defense by ";
            int i=0;
            while (str[i] != '\0')
            {
                putchar(str[i]);
                fflush(stdout);
                Delay(100);
                i++;
            }
            printf("%d defense points\n",amplification);
        }
        else
        {
            printf("\n\t\t\t\t\t");
            char *str="Sorry, you don't have any Tough Candy XLs remaining...\n";
            int i=0;
            while (str[i] != '\0')
            {
                putchar(str[i]);
                fflush(stdout);
                Delay(100);
                i++;
            }
        }
        return poke;
    }
    int combat (Pokemon pok1, Pokemon pok2, int diff)
    {
        attack attselect;
        attack attCPU;
        int attdamage;
        int choice1,choice2,choice3;
        //Displaying the Pokemons, 1 for player and 0 for Opponent
        get_Pokemon(0, pok2);
        Delay(1200);
        get_Pokemon(1, pok1);
top:
        printf("\n\t\t\t\t\tWhat would you like to do?\n\t\t\t\t\t1) ATTACK\t\t 2) PKMN\n\t\t\t\t\t3) BAG\t\t\t 4) RUN\n");
        scanf("%d",&choice1);
        if(choice1==1)
        {
            //Input attack choice
            attselect = chosen_attack(pok1);
            //clean screen
            clean();
            //Calculate inflicted damage on opponent pokemon
            attdamage = hit(attselect, pok1, pok2);
            pok2.Hp = pok2.Hp - attdamage;
        }
        if(choice1==2)
        {
            if(fl==0)
            {
                printf("\t\t\t\t\tAvailable Pokemons: \n");
                printf("\t\t\t\t\t1) %s\n",my_pok1.Name);
                printf("\t\t\t\t\t2) %s\n",my_pok2.Name);
            }
            if(fl==1)
            {
                printf("\t\t\t\t\tAvailable Pokemons: \n");
                printf("\t\t\t\t\t1) %s\n",my_pok1.Name);
            }
            if(fl==2)
            {
                printf("\t\t\t\t\tYou don't have any Pokemons left...\n");
                goto top;
            }
            scanf("%d",&choice3);
            if(choice3==1)
            {
                Pokemon temp;
                temp=pok1;
                pok1=my_pok1;
                my_pok1=temp;
            }
            if(choice3==2)
            {
                Pokemon temp;
                temp=pok1;
                pok1=my_pok2;
                my_pok2=temp;
            }
        }
        if(choice1==3)
        {
            printf("\t\t\t\t\tAvailable Items are:\n");
            printf("\t\t\t\t\t1) Healing Potion: %d\n",potion);
            printf("\t\t\t\t\t2) Super Potion: %d\n",superpotion);
            printf("\t\t\t\t\t3) Dire Hit: %d\n",direhit);
            printf("\t\t\t\t\t4) X Attack: %d\n",xattack);
            printf("\t\t\t\t\t5) Tough Candy XL: %d\n",toughcandy);
            printf("\t\t\t\t\t6) X Defense: %d\n",xdefense);
            scanf("%d",&choice2);
            if(choice2==1)
            {
                pok1=heal1(pok1);
            }
            if(choice2==2)
            {
                pok1=heal2(pok1);
            }
            if(choice2==3)
            {
                pok1=attackplus1(pok1);
            }
            if(choice2==4)
            {
                pok1=attackplus2(pok1);
            }
            if(choice2==5)
            {
                pok1=defenseplus1(pok1);
            }
            if(choice2==6)
            {
                pok1=defenseplus2(pok1);
            }
        }
        if(choice1==4)
        {
            int i=0;
            printf("\t\t\t\t\t");
            char *str="You can't run from a Pokemon Battle!!!\n";
            while (str[i] != '\0')
            {
                putchar(str[i]);
                fflush(stdout);
                Delay(50);
                i++;
            }
            goto top;
        }
        //if opponents Pokemon is alive, otherwise clean screen and finish the fight
        if (is_alive(pok2))
        {
            //choosing CPU attacks
            if (diff == 1)
            {
                attCPU = att_CPU_min(pok2, pok1);
            }
            if (diff == 2)
            {
                attCPU = att_CPU_rand(pok2);
            }
            if (diff == 3)
            {
                attCPU = att_CPU_max(pok2, pok1);
            }
            attdamage = hit(attCPU, pok2, pok1);
            pok1.Hp = pok1.Hp - attdamage;
            //Repeat sequence if player Pokemon is alive
            if (is_alive(pok1))
            {
                return(combat(pok1, pok2, diff));
            }
            clean();
            printf("%s has been \033[0;31mknocked out\033[0m! %s \033[1;32mwins\033[0m!.\n\n",pok1.Name, pok2.Name);
            fl++;
            if(fl==1)
            {
                my_pok=my_pok1;
                my_pok1=my_pok2;
            }
            if(fl==2)
            {
                my_pok=my_pok1;
            }

            return 0;
        }
        clean();
        printf("%s has been \033[0;31mknocked out\033[0m! %s \033[1;32mwins\033[0m!.\n\n",pok2.Name,pok1.Name);
        my_pok=pok1;
        return 1;
    }
    int difficulty (void)
    {
        char number[1];
        int diff_select;
        //Display the difficulty levels
        printf("\t\t\t\t\t");
        char *str="Choose the difficulty of the gameplay.\n\n";
        int i = 0;
        while (str[i] != '\0')
        {
            putchar(str[i]);
            fflush(stdout);
            Delay(50);
            i++;
        }
        FILE *fp;
        char i2,c='1';
        Delay(1000);
        if((fp= fopen("unused - SelectDifficulty_Characters.txt","r"))==NULL)
        {
            printf("Cannot open file.\n");
            exit(1);
        }
//red();
        for(;;)
        {
            i2=fgetc(fp);
            if(i2==EOF)
                break;
            //Delay(3);
            putchar(i2);
        }
//reset();
        fclose(fp);
        //printf("Choose the difficulty of the gameplay.\n\n");
        //printf("\t\t\t\t\t1) Easy Mode.\n");
        //Delay(100);
        //printf("\t\t\t\t\t2) Normal Mode.\n");
        //Delay(100);
        //printf("\t\t\t\t\t3) Challenge Mode.\n\n");
        Delay(100);
        printf("\n\t\t\t\t\t");
        char *str2="Enter your choice: \n\n\n";
        i = 0;
        while (str2[i] != '\0')
        {
            putchar(str2[i]);
            fflush(stdout);
            Delay(50);
            i++;
        }
        //printf("Enter your choice: \n\n\n");
        scanf("%s", number);
        clean();
        diff_select = atoi(number);
        //Sees if input is valid or not
        if (diff_select < 1 || diff_select > 4)
        {
            clean();
            printf("Invalid Entry. Choose an option from 1 to 4.\n\n");
            return(difficulty());
        }
        if (diff_select == 1)
        {
            return 1;
        }
        if (diff_select == 2)
        {
            return 2;
        }
        if (diff_select == 3)
        {
            return 3;
        }
        if(diff_select==4)
        {
            return 3;
        }
        return(difficulty());
    }
//pokemon baraite hobe
    Pokemon chosen_pokemon (Pokemon pok1, Pokemon pok2, Pokemon pok3, Pokemon pok4,Pokemon pok5,Pokemon pok6, Pokemon pok7, Pokemon pok8, Pokemon pok9,Pokemon pok10,Pokemon pok11, Pokemon pok12, Pokemon pok13, Pokemon pok14,Pokemon pok15,Pokemon pok16)
    {
        char number[1];
        int pkmn_select;
        if(flag==1)
        {
            goto skip;
        }
        //Show the Pokemons and their attacks
        get_Pokemon(1, pok1);
        Delay(500);
        get_Pokemon(1, pok2);
        Delay(500);
        get_Pokemon(1, pok3);
        Delay(500);
        get_Pokemon(1, pok4);
        Delay(500);
        get_Pokemon(1, pok5);
        Delay(500);
        get_Pokemon(1, pok6);
        Delay(500);
        get_Pokemon(1, pok7);
        Delay(500);
        get_Pokemon(1, pok8);
        Delay(500);
        get_Pokemon(1, pok9);
        Delay(500);
        get_Pokemon(1, pok10);
        Delay(500);
        get_Pokemon(1, pok11);
        Delay(500);
        get_Pokemon(1, pok12);
        Delay(500);
        get_Pokemon(1, pok13);
        Delay(500);
        get_Pokemon(1, pok14);
        Delay(500);
        get_Pokemon(1, pok15);
        Delay(500);
        get_Pokemon(1, pok16);
        Delay(500);
        flag=1;
skip:
        printf("\t\t\t\t\tChoose your Pokemon.\n\n");
        scanf("%s", number);
        pkmn_select = atoi(number);
        //Sees if input is valid or not
        if (pkmn_select < 1 || pkmn_select > 16)
        {
            printf("Invalid input. Pick a Pokemon from 1 to 16.\n\n");
            return(chosen_pokemon (pok1, pok2, pok3, pok4,pok5,pok6, pok7, pok8, pok9,pok10, pok11, pok12, pok13,pok14, pok15, pok16));
        }
        if (pkmn_select == 1)
        {
            return(pok1);
        }
        if (pkmn_select == 2)
        {
            return(pok2);
        }
        if (pkmn_select == 3)
        {
            return(pok3);
        }
        if (pkmn_select == 4)
        {
            return(pok4);
        }
        if (pkmn_select == 5)
        {
            return(pok5);
        }
        if (pkmn_select == 6)
        {
            return(pok6);
        }
        if (pkmn_select == 7)
        {
            return(pok7);
        }
        if (pkmn_select == 8)
        {
            return(pok8);
        }
        if (pkmn_select == 9)
        {
            return(pok9);
        }
        if (pkmn_select == 10)
        {
            return(pok10);
        }
        if (pkmn_select == 11)
        {
            return(pok11);
        }
        if (pkmn_select == 12)
        {
            return(pok12);
        }
        if (pkmn_select == 13)
        {
            return(pok13);
        }
        if (pkmn_select == 14)
        {
            return(pok14);
        }
        if (pkmn_select == 15)
        {
            return(pok15);
        }
        if (pkmn_select == 16)
        {
            return(pok16);
        }
        //Just in case the function restarts
        return(chosen_pokemon (pok1, pok2, pok3, pok4,pok5,pok6,pok7,pok8,pok9,pok10,pok11,pok12,pok13,pok14,pok15,pok16));
    }

//Defining opponents Pokemon list
    typedef struct link *List;
    struct link
    {
        Pokemon adv;
        List next;
    };
//Adding item at top of list
    List adding(Pokemon pok, List l)
    {
        List p = malloc(sizeof(struct link));
        p -> adv = pok;
        p -> next = l;
        return p;
    }

    int fini = 1;
    int nb_victories=0;
    List Opponents=NULL;
    List MyRoster=NULL;

    int diff = 1;

    //Define all possible attacks
    attack LaPl = new_attack("Lava Plume", 90, "Water");//CH, AR, YU, AT
    attack BuBe = new_attack("Bubble Beam", 70, "Water");
    attack AeAc = new_attack("Aerial Ace", 50, "Flying");
    attack MaCu=new_attack("Mach Cut",50,"Grass");
    attack AO = new_attack("Will-O-Wisp", 30, "Water");
    attack HE = new_attack("Eruption", 90, "Fire");
    attack FlTh = new_attack("Flame Thrower", 70, "Fire");
    attack WaGu = new_attack("Water Gun", 50, "Water");
    attack DoKi = new_attack("Double Kick", 25, "Fighting");
    attack WiAt=new_attack("Wing Attack",50,"Flying");
    attack DrRa=new_attack("Dragon Rage",60,"Dragon");
    attack SoBe=new_attack("Solar Beam",45,"Grass");
    attack ZE = new_attack("Shock Wave", 90, "Electric");
    attack ThAt = new_attack("Thunderbolt Attack", 70, "Electric");
    attack ThWa = new_attack("Thunder Wave", 50, "Electric");
    attack SeTo = new_attack("Seismic Toss", 30, "Fighting");
    attack GiDr = new_attack("Giga Drain", 90, "Grass");
    attack PoLe = new_attack("Poison Leaf", 70, "Grass");
    attack IcBe = new_attack("Ice Beam", 50, "Ice");//Mach Cut
    attack LiRo = new_attack("Lightning Rod", 30, "Electric");
    attack IS=new_attack("Ice Shard",40,"Ice");
    attack NS=new_attack("Night Slash",70,"Dark");
    attack AA=new_attack("Acid Armor",30,"Poison");
    attack CR=new_attack("Confuse Ray",40,"Ghost");
    attack KC=new_attack("Karate Chop",50,"Fighting");
    attack BrBr=new_attack("Brick Break",75,"Fighting");
    attack DG=new_attack("Dig",40,"Ground");
    attack TP=new_attack("Thunder Punch",30,"Electric");
    attack BoAt=new_attack("Bolt Attack",45,"Electric");
    attack PG=new_attack("Poison Gas",36,"Poison");
    attack SlBo=new_attack("Sludge Bomb",75,"Poison");
    attack ShBa=new_attack("Shadow Ball",50,"Ghost");
    attack ST=new_attack("Stench",25,"Psychic");
    attack PS=new_attack("Poison Sting",15,"Poison");
    attack EQ=new_attack("Earthquake",65,"Ground");
    attack XS=new_attack("X-Scissor",50,"Bug");
    attack SR=new_attack("Stealth Rock",35,"Rock");
    attack GU=new_attack("Gust",40,"Flying");
    attack HW=new_attack("Heat Wave",55,"Fire");
    attack SA=new_attack("Sand Attack",67,"Ground");
    attack SkAt=new_attack("Sky Attack",70,"Flying");
    attack CO=new_attack("Confusion",50,"Psychic");
    attack CM=new_attack("Calm Mind",60,"Psychic");
    attack DaGl=new_attack("Dazzling Gleam",40,"Fairy");
    attack FP=new_attack("Fire Punch",55,"Fire");
    attack SlPo=new_attack("Sleep Powder",25,"Grass");
    attack QuDa=new_attack("Quiver Dance",35,"Bug");
    attack PsBe=new_attack("Psybeam",65,"Psychic");
    attack AiSl=new_attack("Air Slash",65,"Flying");
    attack RoTh=new_attack("Rock Throw",40,"Rock");
    attack DoEd=new_attack("Double Edge",70,"Ground");
    attack HeBu=new_attack("Headbutt",35,"Rock");
    attack IrTa=new_attack("Iron Tail",60,"Steel");
    attack DaPu=new_attack("Dark Pulse",40,"Dark");
    attack Li=new_attack("Lick",30,"Ghost");
    attack HyBe=new_attack("Hyper Beam",70,"Dragon");
    attack FiBl=new_attack("Fire Blast",65,"Fire");
    attack AqJe=new_attack("Aqua Jet",35,"Water");
    attack ThPu=new_attack("Thunder Punch",40,"Electric");
    attack OmWi=new_attack("Ominous Wind",35,"Ghost");
    attack IcWi=new_attack("Icy Wind",40,"Ice");
    attack DrEa=new_attack("Dream Eater",70,"Psychic");
    attack FeAt=new_attack("Feint Attack",55,"Dark");
    attack MeCl=new_attack("Metal Claw",35,"Steel");
    attack SuPo=new_attack("Superpower",65,"Fighting");
    attack MuSl=new_attack("Mud Slap",15,"Ground");
    attack RoTo=new_attack("Rock Tomb",45,"Rock");
    attack PiXi=new_attack("Pixilate",45,"Fairy");
    attack FaWi=new_attack("Fairy Wind",35,"Fairy");
    attack SyNo=new_attack("Synchronoise",65,"Psychic");
    attack BiTe=new_attack("Bite",35,"Dark");

    //Define possible Pokemons
    Pokemon Grovyle = new_pokemon("Bulbasaur", "Grass", 5, 35, 25, 35, 35, PoLe,ThPu,AeAc,DoKi);
    Pokemon Squirtle = new_pokemon("Squirtle", "Water", 5, 30, 20, 35, 35, BuBe,WaGu,IcBe,SeTo);
    Pokemon Charizard = new_pokemon("Charizard", "Fire", 5, 35, 15, 45, 45, FlTh,SoBe,WiAt,DrRa);
    Pokemon Pikachu = new_pokemon("Pikachu", "Electric", 5, 35, 15, 40, 40, ThAt,IrTa,BoAt,LiRo);
    Pokemon Dragonite = new_pokemon("Dragonite","Dragon",10,50,50,100,100,HyBe,FiBl,AqJe,ThWa);
    Pokemon Cryogonal=new_pokemon("Lapras", "Ice",5,50,50,30,30,IS,NS,AA,CR);
    Pokemon Machoke=new_pokemon("Machoke","Fighting",5,50,70,40,40,KC,BrBr,DG,TP);
    Pokemon Grimer=new_pokemon("Grimer","Poison",5,60,50,40,40,PG,SlBo,ShBa,ST);
    Pokemon Sandshrew=new_pokemon("Sandshrew","Ground",5,45,60,35,35,PS,EQ,XS,SR);
    Pokemon Pidgeot=new_pokemon("Pidgeot","Flying",5,40,20,45,45,GU,HW,SA,SkAt);
    Pokemon Alakazam=new_pokemon("Alakazam","Psychic",5,30,30,35,35,CO,CM,DaGl,FP);
    Pokemon Caterpie=new_pokemon("Butterfree","Bug",5,15,25,30,30,SlPo,QuDa,PsBe,AiSl);
    Pokemon Onix=new_pokemon("Onix","Rock",5,40,100,20,20,RoTh,DoEd,HeBu,IrTa);
    Pokemon Gengar=new_pokemon("Gengar","Ghost",5,35,30,35,35,DaPu,Li,ShBa,GiDr);
    Pokemon Darkrai=new_pokemon("Rattata","Dark",5,70,60,73,73,OmWi,IcWi,DrEa,FeAt);
    Pokemon Aggron=new_pokemon("Magneton","Steel",5,55,100,55,55,MeCl,SuPo,MuSl,RoTo);
    Pokemon Sylveon=new_pokemon("Clefable","Fairy",5,30,30,65,65,PiXi,FaWi,SyNo,BiTe);
    //cleans screen at start of game
    clean();
    int i = 0;
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tLOADING GYM\n\n");
    printf("\t\t\t");
    //printf("\033[0;32m");
    bcyan();
    for(int a=0; a<50; a++)
    {
        printf("\xdb ");
        Delay(60);
    }
    reset();
    printf("\n\n\n\t\t\t\t\t\t");
    pause();
    clean();
    //ekta chobi dewa lagbe
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    char *str="\t\t\t\t\tWelcome, visitor! This is the GAZIPUR CITY Pokemon Gym.\n";
    char *str1="\t\t\t\t\tAs it's leader, I use GRASS, FIRE and WATER type Pokemons to battle.\n";
    char *str2="\t\t\t\t\tI hope you will be a strong challenger!\n";
    printf("\n\n\n\n\n");
    while (str[i] != '\0')
    {
        putchar(str[i]);
        fflush(stdout);
        Delay(60);
        i++;
    }
    Delay(500);
    i=0;
    while (str1[i] != '\0')
    {
        putchar(str1[i]);
        fflush(stdout);
        Delay(60);
        i++;
    }
    i=0;
    Delay(500);
    while (str2[i] != '\0')
    {
        putchar(str2[i]);
        fflush(stdout);
        Delay(60);
        i++;
    }
    i=0;
    Delay(500);
    //set difficulty
    diff = difficulty();
    //Choosing Pokemon by player
    my_pok1=chosen_pokemon(Grovyle, Squirtle, Charizard, Pikachu,Cryogonal,Machoke,Grimer,Sandshrew,Pidgeot,Alakazam,Caterpie,Onix,Gengar,Darkrai,Aggron,Sylveon);
    printf("\t\t\t\t\tYou chose %s!\n",my_pok1.Name);
    char *str3="\t\t\t\t\tChoose another Pokemon to include in your roster.(2/3)\n";
    while (str3[i] != '\0')
    {
        putchar(str3[i]);
        fflush(stdout);
        Delay(70);
        i++;
    }
    i=0;
    my_pok2=chosen_pokemon(Grovyle, Squirtle, Charizard, Pikachu,Cryogonal,Machoke,Grimer,Sandshrew,Pidgeot,Alakazam,Caterpie,Onix,Gengar,Darkrai,Aggron,Sylveon);
    printf("\t\t\t\t\tYou chose %s!\n",my_pok2.Name);
    char *str4="\t\t\t\t\tChoose another Pokemon to include in your roster.(3/3)\n";
    while (str4[i] != '\0')
    {
        putchar(str4[i]);
        fflush(stdout);
        Delay(70);
        i++;
    }
    i=0;
    my_pok3=chosen_pokemon(Grovyle, Squirtle, Charizard, Pikachu,Cryogonal,Machoke,Grimer,Sandshrew,Pidgeot,Alakazam,Caterpie,Onix,Gengar,Darkrai,Aggron,Sylveon);
    printf("\t\t\t\t\tYou chose %s!\n",my_pok3.Name);
    Delay(1000);
    char *str5="Your Pokemon Team is now complete!\n\t\t\t\t\tProceed to the Battle Arena!\n";
    printf("\t\t\t\t\t");
    pause();
    MyRoster=adding(my_pok1,MyRoster);
    MyRoster=adding(my_pok2,MyRoster);
    MyRoster=adding(my_pok3,MyRoster);
    //Creating list of Opponent Pokemons
    if (diff == 3)
    {
        Opponents = adding(Dragonite, Opponents);
    }
    Opponents = adding(Grovyle, Opponents);
    Opponents = adding(Squirtle, Opponents);
    //Opponents = adding(Pikachu, Opponents);
    Opponents = adding(Charizard, Opponents);

    //cleans screen again
    clean();
    my_pok=MyRoster->adv;
    //Fights as long as there are Pokemons remaining
    while (fini && (Opponents!=NULL) && (MyRoster!=NULL))
    {

        Delay(900);
        //printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");

        /*printf("  _____________________________ _____________________   _____  ________ _____.___. ._.\n");
        printf(" /  _____/\_   _____|__    ___/ \______   \_   _____/  /  _  \ \______ \\__  |   | | |\n");
        printf("/   \  ___ |    __)_  |    |     |       _/|    __)_  /  /_\  \ |    |  \/   |   | | |\n");
        printf("\    \_\  \|        \ |    |     |    |   \|        \/    |    \|    `   \____   |  \|\n");
        printf(" \______  /_______  / |____|     |____|_  /_______  /\____|__  /_______  / ______|  __\n");
        printf("        \/        \/                    \/        \/         \/        \/\/         \/\n");*/
        FILE *fp;
        char i,c='1';
        Delay(1000);
        if((fp= fopen("pokemon (3).txt","r"))==NULL)
        {
            printf("Cannot open file.\n");
            exit(1);
        }
//red();
        for(;;)
        {
            i=fgetc(fp);
            if(i==EOF)
                break;
            //Delay(3);
            putchar(i);
        }
//reset();
        fclose(fp);
        printf("\n\n\t\t\t\t\tYour Pokemon %s will face %s!\n\t\t\t\t\t           Good luck!\n\n\n\n", my_pok.Name, (Opponents -> adv).Name);
        Delay(2000);
        printf("\t\t\t\t\t");
        pause();
        clean();
        //If player wins a battle
        if ((combat(my_pok, Opponents -> adv, diff)) == 1)
        {
            LoadMusicvictory();
            Mix_HaltMusic();
            Mix_PlayMusic(bg9,-1);
            //Pokemon level++
            my_pok = level_up(my_pok);
            //printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
            print_pokemon(my_pok.Type);
            printf("\n");
            printf("\t\t\t\t\t");
            Delay(1000);
            char *str="Great job! Your Pokemon has gained a level!\n";
            int i=0;
            while (str[i] != '\0')
            {
                putchar(str[i]);
                fflush(stdout);
                Delay(60);
                i++;
            }
            Delay(700);
            printf("\t\t\t\t\t%s is now level-%d.\n\n\n\n", my_pok.Name, my_pok.Level);
            printf("\t\t\t\t\t");
            pause();
            clean();
            //Rejuvenate HP
            //my_pok.Hp = my_pok.Maxhp;
            //Calculates number of fights won
            nb_victories++;
            //If it was the last fight
            if (Opponents -> next == NULL)
            {
                printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                printf("\t\t\t\t\t");
                char *str="You have defeated all of the opponent Pokemons.\n\t\t\t\t\tGood Game Well Played!\n\t\t\t\t\tYou Win!\n\n";
                int i = 0;
                while (str[i] != '\0')
                {
                    putchar(str[i]);
                    fflush(stdout);
                    Delay(100);
                    i++;
                }
                printf("\t\t\t\t\t");
                pause();
                clean();
                //printf("You have defeated all of the opponent Pokemons.\nGood Game Well Played!\nYou Win!\n\n");
                fini = 0;
            }
            //Proceed to next opponent Pokemon
            else
            {
                Opponents = Opponents -> next;
            }
            /*if(MyRoster->next==NULL)
            {
                printf("\t\t\t\t\t");
                char *str="All of your Pokemons have been defeated.\nGood Game Well Played!\nYou couldn't win the Gym Badge this time!\nTry again some other day...\n\n";
                int i = 0;
                while (str[i] != '\0')
                {
                    putchar(str[i]);
                    fflush(stdout);
                    Delay(100);
                    i++;
                }
                fini = 0;
            }
            else
            {
                MyRoster=MyRoster->next;
            }*/
        }
        //Finish Game if player loses
        else
        {
            LoadMusicdefeat();
            Mix_HaltMusic();
            Mix_PlayMusic(bg10,-1);
            //fini = 0;
            //If player wins by 0-1 or more
            if(MyRoster->next==NULL)
            {
                printf("\t\t\t\t\t");
                char *str="All of your Pokemons have been defeated.\nGood Game Well Played!\nYou couldn't win the Gym Badge this time!\nTry again some other day...\n\n";
                int i = 0;
                while (str[i] != '\0')
                {
                    putchar(str[i]);
                    fflush(stdout);
                    Delay(100);
                    i++;
                }
                printf("\t\t\t\t\t");
                pause();
                clean();
                fini = 0;
            }
            else
            {
                MyRoster=MyRoster->next;
            }

        }
    }
    return 0;
}

