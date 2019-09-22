//786
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
//#include<windows.h>
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
//Type Advantage chart Attack Type along Columns and Defense Type along Rows
int eff[17][17]={1,1,2,4,4,2,2,2,2,2,4,1,2,1,2,4,2,
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
void delay(unsigned int mseconds)
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
        printf("\n\n\n");
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
    delay(1000);
    printf("\n\n\n\n\n\t\t\t\t\t%s used %s.\n", pok1.Name, att.Name);
    //Displaying effectiveness of each attack
    if (effect(pok2, att) == 4)
    {
        delay(1000);
        printf("\n\t\t\t\t\t");
        printf("\033[0;92mIt was Super Effective\033[0m!!!\n");
    }
    else if (effect(pok2, att) == 1)
    {
        delay(1000);
        printf("\n\t\t\t\t\t");
        printf("\033[0;91mIt wasn't very effective\033[0m.\n");
    }
    printf("\t\t\t\t\t");
    delay(900);
    printf("%s took %d points of damage.\n\n", pok2.Name, N);
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
    return (a>b)?a:b;
}
int min(int a, int b)
{
    return (a<b)?a:b;
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
int combat (Pokemon pok1, Pokemon pok2, int diff)
{
    attack attselect;
    attack attCPU;
    int attdamage;
    //Displaying the Pokemons, 1 for player and 0 for Opponent
    get_Pokemon(0, pok2);
    get_Pokemon(1, pok1);
    //Input attack choice
    attselect = chosen_attack(pok1);
    //clean screen
    clean();
    //Calculate inflicted damage on opponent pokemon
    attdamage = hit(attselect, pok1, pok2);
    pok2.Hp = pok2.Hp - attdamage;
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
        return 0;
    }
    clean();
    printf("%s has been \033[0;31mknocked out\033[0m! %s \033[1;32mwins\033[0m!.\n\n",pok2.Name,pok1.Name);
    return 1;
}
int difficulty (void)
{
    char number[1];
    int diff_select;
    //Display the difficulty levels
    char *str="Choose the difficulty of the gameplay.\n\n";
    int i = 0;
    while (str[i] != '\0')
    {
        putchar(str[i]);
        fflush(stdout);
        delay(100);
        i++;
    }
    //printf("Choose the difficulty of the gameplay.\n\n");
    printf("1) Easy Mode.\n");
    delay(100);
    printf("2) Normal Mode.\n");
    delay(100);
    printf("3) Challenge Mode.\n\n");
    delay(100);
    char *str2="Enter your choice: \n\n\n";
    i = 0;
    while (str2[i] != '\0')
    {
        putchar(str2[i]);
        fflush(stdout);
        delay(100);
        i++;
    }
    //printf("Enter your choice: \n\n\n");
    scanf("%s", number);
    clean();
    diff_select = atoi(number);
    //Sees if input is valid or not
    if (diff_select < 1 || diff_select > 3)
    {
        clean();
        printf("Invalid Entry. Choose an option from 1 to 3.\n\n");
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
    return(difficulty());
}
//pokemon baraite hobe
Pokemon chosen_pokemon (Pokemon pok1, Pokemon pok2, Pokemon pok3, Pokemon pok4,Pokemon pok5,Pokemon pok6, Pokemon pok7, Pokemon pok8, Pokemon pok9,Pokemon pok10,Pokemon pok11, Pokemon pok12, Pokemon pok13, Pokemon pok14,Pokemon pok15,Pokemon pok16)
{
    char number[1];
    int pkmn_select;
    //Show the Pokemons and their attacks
    get_Pokemon(1, pok1);
    delay(500);
    get_Pokemon(1, pok2);
    delay(500);
    get_Pokemon(1, pok3);
    delay(500);
    get_Pokemon(1, pok4);
    delay(500);
    get_Pokemon(1, pok5);
    delay(500);
    get_Pokemon(1, pok6);
    delay(500);
    get_Pokemon(1, pok7);
    delay(500);
    get_Pokemon(1, pok8);
    delay(500);
    get_Pokemon(1, pok9);
    delay(500);
    get_Pokemon(1, pok10);
    delay(500);
    get_Pokemon(1, pok11);
    delay(500);
    get_Pokemon(1, pok12);
    delay(500);
    get_Pokemon(1, pok13);
    delay(500);
    get_Pokemon(1, pok14);
    delay(500);
    get_Pokemon(1, pok15);
    delay(500);
    get_Pokemon(1, pok16);
    delay(500);
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
//Function for healing a pokemon
//SuperPotion
void heal1(Pokemon poke)
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
            delay(100);
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
            delay(100);
            i++;
        }
    }
}
//Function for amplifying attack damage
//X Attack
void attackplus1(Pokemon poke)
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
            delay(100);
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
            delay(100);
            i++;
        }
    }
}
//Function to increase defense
//X Defense
void defenseplus1(Pokemon poke)
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
            delay(100);
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
            delay(100);
            i++;
        }
    }
}
//Potion
void heal2(Pokemon poke)
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
            delay(100);
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
            delay(100);
            i++;
        }
    }
}
//Function for amplifying attack damage
//Dire Hit
void attackplus2(Pokemon poke)
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
            delay(100);
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
            delay(100);
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
            delay(100);
            i++;
        }
    }
}
//Function to increase defense
//Tough Candy XL
void defenseplus2(Pokemon poke)
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
            delay(100);
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
            delay(100);
            i++;
        }
    }
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

int main()
{
    int fini = 1;
    int nb_victories=0;
    List Opponents=NULL;
    List MyRoster=NULL;
    Pokemon my_pok,my_pok1,my_pok2,my_pok3;
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
    Pokemon Grovyle = new_pokemon("Grovyle", "Grass", 5, 35, 25, 35, 35, PoLe,ThPu,AeAc,DoKi);
    Pokemon Squirtle = new_pokemon("Squirtle", "Water", 5, 30, 20, 35, 35, BuBe,WaGu,IcBe,SeTo);
    Pokemon Charizard = new_pokemon("Charizard", "Fire", 5, 35, 15, 45, 45, FlTh,SoBe,WiAt,DrRa);
    Pokemon Pikachu = new_pokemon("Pikachu", "Electric", 5, 35, 15, 40, 40, ThAt,IrTa,BoAt,LiRo);
    Pokemon Dragonite = new_pokemon("Dragonite","Dragon",10,50,50,100,100,HyBe,FiBl,AqJe,ThWa);
    Pokemon Cryogonal=new_pokemon("Cryogonal", "Ice",5,50,50,30,30,IS,NS,AA,CR);
    Pokemon Machoke=new_pokemon("Machoke","Fighting",5,50,70,40,40,KC,BrBr,DG,TP);
    Pokemon Grimer=new_pokemon("Grimer","Poison",5,60,50,40,40,PG,SlBo,ShBa,ST);
    Pokemon Sandshrew=new_pokemon("Sandshrew","Ground",5,45,60,35,35,PS,EQ,XS,SR);
    Pokemon Pidgeot=new_pokemon("Pidgeot","Flying",5,40,20,45,45,GU,HW,SA,SkAt);
    Pokemon Alakazam=new_pokemon("Alakazam","Psychic",5,30,30,35,35,CO,CM,DaGl,FP);
    Pokemon Caterpie=new_pokemon("Butterfree","Bug",5,15,25,30,30,SlPo,QuDa,PsBe,AiSl);
    Pokemon Onix=new_pokemon("Onix","Rock",5,40,100,20,20,RoTh,DoEd,HeBu,IrTa);
    Pokemon Gengar=new_pokemon("Gengar","Ghost",5,35,30,35,35,DaPu,Li,ShBa,GiDr);
    Pokemon Darkrai=new_pokemon("Darkrai","Dark",5,70,60,73,73,OmWi,IcWi,DrEa,FeAt);
    Pokemon Aggron=new_pokemon("Aggron","Steel",5,55,100,55,55,MeCl,SuPo,MuSl,RoTo);
    Pokemon Sylveon=new_pokemon("Sylveon","Fairy",5,30,30,65,65,PiXi,FaWi,SyNo,BiTe);
    //cleans screen at start of game
    clean();
    int i = 0;
    char *str="\t\t\t\t\tWelcome, visitor! This is the GAZIPUR CITY Pokemon Gym.\n";
    char *str1="\t\t\t\t\tAs it's leader, I use GRASS, FIRE, WATER and ELECTRIC type Pokemons to battle.\n";
    char *str2="\t\t\t\t\tI hope you will be a strong challenger!\n";
    while (str[i] != '\0')
    {
        putchar(str[i]);
        fflush(stdout);
        delay(100);
        i++;
    }
    delay(1500);
    i=0;
    while (str1[i] != '\0')
    {
        putchar(str1[i]);
        fflush(stdout);
        delay(100);
        i++;
    }
    i=0;
    delay(1500);
    while (str2[i] != '\0')
    {
        putchar(str2[i]);
        fflush(stdout);
        delay(100);
        i++;
    }
    i=0;
    delay(1500);
    //set difficulty
    diff = difficulty();
    //Choosing Pokemon by player
    my_pok1=chosen_pokemon(Grovyle, Squirtle, Charizard, Pikachu,Cryogonal,Machoke,Grimer,Sandshrew,Pidgeot,Alakazam,Caterpie,Onix,Gengar,Darkrai,Aggron,Sylveon);
    char *str3="\t\t\t\t\tChoose another Pokemon to include in your roster.(2/3)\n";
    while (str3[i] != '\0')
    {
        putchar(str3[i]);
        fflush(stdout);
        delay(100);
        i++;
    }
    i=0;
    my_pok2=chosen_pokemon(Grovyle, Squirtle, Charizard, Pikachu,Cryogonal,Machoke,Grimer,Sandshrew,Pidgeot,Alakazam,Caterpie,Onix,Gengar,Darkrai,Aggron,Sylveon);
    char *str4="\t\t\t\t\tChoose another Pokemon to include in your roster.(3/3)\n";
    while (str4[i] != '\0')
    {
        putchar(str4[i]);
        fflush(stdout);
        delay(100);
        i++;
    }
    i=0;
    my_pok3=chosen_pokemon(Grovyle, Squirtle, Charizard, Pikachu,Cryogonal,Machoke,Grimer,Sandshrew,Pidgeot,Alakazam,Caterpie,Onix,Gengar,Darkrai,Aggron,Sylveon);
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
    Opponents = adding(Charizard, Opponents);
    Opponents = adding(Pikachu, Opponents);

    //cleans screen again
    clean();

    //Fights as long as there are Pokemons remaining
    while (fini && (Opponents!=NULL) && (MyRoster!=NULL))
    {
        my_pok=MyRoster->adv;
        delay(900);
        printf("\t\t\t\t\tYour Pokemon %s will face %s!\n\t\t\t\t\t           Good luck!\n\n\n\n", my_pok.Name, (Opponents -> adv).Name);
        delay(2000);
        //If player wins a battle

        if ((combat(my_pok, Opponents -> adv, diff)) == 1)
        {
            //Pokemon level++
            my_pok = level_up(my_pok);
            printf("\t\t\t\t\t");
            delay(1000);
            char *str="Great job! Your Pokemon has gained a level!\n";
            int i = 0;
            while (str[i] != '\0')
            {
                putchar(str[i]);
                fflush(stdout);
                delay(100);
                i++;
            }
            printf("\t\t\t\t\t%s is now level-%d.\n\n\n\n", my_pok.Name, my_pok.Level);
            //Rejuvenate HP
            my_pok.Hp = my_pok.Maxhp;
            //Calculates number of fights won
            nb_victories++;
            //If it was the last fight
            if (Opponents -> next == NULL)
            {
                printf("\t\t\t\t\t");
                char *str="You have defeated all of the opponent Pokemons.\nGood Game Well Played!\nYou Win!\n\n";
                int i = 0;
                while (str[i] != '\0')
                {
                    putchar(str[i]);
                    fflush(stdout);
                    delay(100);
                    i++;
                }
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
                    delay(100);
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
                    delay(100);
                    i++;
                }
                fini = 0;
            }
            else
            {
                MyRoster=MyRoster->next;
            }
            /*if (nb_victories > 1)
            {
                delay(1000);
                printf("\t\t\t\t\t");
                printf("Too Bad! You lost after %d wins.\n\n", nb_victories);
            }
            else
            {
                delay(1000);
                printf("\t\t\t\t\t");
                printf("Too Bad! You lost after %d victories.\n\n", nb_victories);
            }*/
        }
    }
    return 0;
}
