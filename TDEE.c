#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<unistd.h>
#include<conio.h>
void blinking(int count, char crt[] , int Time, int Line)
{
char Space [2000];
 for(int i=0;i<=count;i++)
    {
      printf("\r");
      for(int j=0;j<=Line;j++)
      {
        printf("%c",Space);
      }
      printf("                                                   %s\r",crt);
      fflush(stdout);
      usleep(Time);
      printf("                                                                                     \r");
      fflush(stdout);
      usleep(Time);
    }
}
int main ()
{
    float Percenfat = 0, Weight = 0 ,LBM = 0 , FM = 0 , Bmr = 0 , Age = 0, Energy = 0 , Bmr_max = 0;
    int NEAT = 0 , PA = 0;
    char Sex[10] = "";
    char M[] = "Men";
    char W[] = "Woman";
    char Loopcon[] = "Please press any key to continue.";
    char Lod;
    char one_more = ' ';
    char one_moreY = 'Y';
    /*char one_moreN = 'N';*/
    printf("         *   ####     ###    ####      #####   ######    ######  #######   #####        ##   ##    ###     #####    #####  *\n");         
    printf("         *  ##  ##   ## ##    ##      ##   ##  ##   ##     ##     ##      ##   ##       ### ###   ## ##   ##   ##  ##   ## *\n");         
    printf("         * ##       ##   ##   ##      ##   ##  ##   ##     ##     ##      ##            #######  ##   ##  ##       ##      *\n");         
    printf("         * ##       #######   ##      ##   ##  ######      ##     ####     #####        ## # ##  #######   #####    #####  *\n");         
    printf("         * ##       ##   ##   ##      ##   ##  #####       ##     ##           ##       ##   ##  ##   ##       ##       ## *\n");         
    printf("         *  ##  ##  ##   ##   ##      ##   ##  ##  ##      ##     ##      ##   ##       ##   ##  ##   ##  ##   ##  ##   ## *\n");         
    printf("         *   ####   ##   ##  #######   #####   ##   ##   ######  #######   #####        ##   ##  ##   ##   #####    #####  *\n");
    printf("\n");
    printf("                                                      ..:::::---.     .---:::::..                              \n");
    printf("                                                                :+: .=:                                        \n");
    printf("                                                                  -+=                                          \n");
    printf("                                                                   #                                           \n");
    printf("                                                                .:-#=.                                         \n");
    printf("                                                               .. :#....                                       \n");
    printf("                                                                   #                                           \n");
    printf("                                                                   #                                           \n");
    printf("                                                :                 :#:                 :                        \n");
    printf("                                                .=.              :#.-:              .-.                        \n");
    printf("                                                 .+=           .++:- -+:           --                          \n");
    printf("                                                   =#*-.   .-*#*:.=#=..-**=:.  .:*#=                           \n");
    printf("                                                    -.:=#=::.      #        .:**-.-.                           \n");
    printf("                                                     . .:.       .:#:.       .:. .                             \n");
    printf("                                                   .:.:--*-...... .#. ......-*=-:.:.                           \n");
    printf("                                                      . .-.        +        .-. .                              \n");
    printf("                                                       -.-=       .#.       --.-.                              \n");
    printf("                                                      :  -+**-:.::=#=::::=**=-  :.                             \n");
    printf("                                                       .=+:        +        :+=.                               \n");
    printf("                                                        .:=.       *       :+-.                                \n");
    printf("                                                         .+#++==-:...:---+*#*.                                 \n");
    printf("                                                          :.               .-                                  \n");
    printf("                                                          :.               .:                                  \n");
    printf("                                                           :               :                                   \n");
    /*printf("\n");
    printf("         *   ####     ###    ####      #####   ######    ######  #######   #####        ##   ##    ###     #####    #####  *\n");         
    printf("         *  ##  ##   ## ##    ##      ##   ##  ##   ##     ##     ##      ##   ##       ### ###   ## ##   ##   ##  ##   ## *\n");         
    printf("         * ##       ##   ##   ##      ##   ##  ##   ##     ##     ##      ##            #######  ##   ##  ##       ##      *\n");         
    printf("         * ##       #######   ##      ##   ##  ######      ##     ####     #####        ## # ##  #######   #####    #####  *\n");         
    printf("         * ##       ##   ##   ##      ##   ##  #####       ##     ##           ##       ##   ##  ##   ##       ##       ## *\n");         
    printf("         *  ##  ##  ##   ##   ##      ##   ##  ##  ##      ##     ##      ##   ##       ##   ##  ##   ##  ##   ##  ##   ## *\n");         
    printf("         *   ####   ##   ##  #######   #####   ##   ##   ######  #######   #####        ##   ##  ##   ##   #####    #####  *\n");*/

    for(int i=0;i<2000;i++)
    {
      printf("                                                   %s\r",Loopcon);
      fflush(stdout);
      usleep(400000);
      printf("                                                                                     \r");
      fflush(stdout);
      usleep(400000);
      if(kbhit())
      {
        i = 2000;
        printf("                                                               Loading...\r");
        usleep(800000);
        printf("                                                                                     \r");
      }
    }
    
     Lod = getch();
    
    do{
    printf("Please enter your Weight kg.\n");         
    printf("-->");
    if (scanf("%f", &Weight) != 1)
    {
     printf("This isn't a number please put your weight \n");
     printf("Example 72");
     return 0;
    }
    printf("Do you want to change the weight put Y but No put N\n");
    printf("-->");
    getchar();
    scanf("%c",&one_more);
    } while (one_more == one_moreY);
    
    printf("Please enter your Percenfat\n");
    printf("-->");
    if (scanf("%f", &Percenfat) != 1)
    {
     printf("This isn't a number please put your Percenfat \n");
     printf("Example 25");
     return 0;
    }

     printf("Please enter your Age\n");
     printf("-->");
       if (scanf("%f", &Age) != 1)
    {
     printf("This isn't a number please put your Age \n");
     printf("Example 20");
     return 0;
    }
      printf("Please enter your Sex\n");
      printf("-->");
      scanf("%s",&Sex);

      printf("Please select Non Exercise Activity Thermogenesis (NEAT) \n");
      printf("Desk jod         put 1\n");
      printf("office Manager   put 2\n");
      printf("Sales rep        put 3\n");
      printf("Personal Trainer put 4\n");
      printf("Manual labour    put 5\n");
      printf("-->");
      scanf("%d",&NEAT);
      if(NEAT != 1&& NEAT != 2&& NEAT != 3&& NEAT != 4&& NEAT != 5)
      {
        printf("Please enter a valid choice (1, 2, 3, 4, or 5).\n");
        return 0;
      }
      printf("Please select Physical Activity (PA) \n");
      printf("No exercise             put 1\n");
      printf("Light exercise          put 2\n");
      printf("Medium exercise         put 3\n");
      printf("Hard exercise           put 4\n");
      printf("Professional athlete    put 5\n");
      printf("-->");
      scanf("%d",&PA);
      if(PA != 1&& PA != 2&& PA != 3&& PA != 4&& PA != 5)
      {
        printf("Please enter a valid choice (1, 2, 3, 4, or 5).\n");
        return 0;
      }
      printf("\n");
    Energy = ((NEAT+PA)/2.0);
    if(Energy >=1 && Energy <= 1.4)
    {
      Energy = 1.1;
    }
     else if(Energy >=1.5 && Energy <= 2.4)
     {
       Energy = 1.3;
     }
     else if(Energy >=2.5 && Energy <= 3.4)
     {
       Energy = 1.5;
     }
     else if(Energy >=3.5 && Energy <= 4.4)
     {
       Energy = 1.7;
     }
     else if(Energy >=4.5 && Energy <= 5.999999)
     {
       Energy = 1.7;
     }
    LBM = (Weight-(Weight*(Percenfat/100)));
    FM = ((Weight*Percenfat)/100);
    printf("Lean body mass = %.3f Kg.\n",LBM);
    printf("Fat mass = %.3f Kg.\n",FM);
    if(strcasecmp(Sex, M) == 0 )
        {
           Bmr = (13.587*LBM)+(9.613*FM)+(198)-(3.351*Age)+(674);
           printf("Your BMR is %.3f Calorie\n", Bmr);
           printf("\n");
           printf("This is the least amount of calories you should get in a day.\n");
           printf("Does not include daily life and exercise.\n");
        }
        else if(strcasecmp(Sex, W) == 0 )
        {
             Bmr = (13.587*LBM)+(9.613*FM)-(3.351*Age)+(674);
             printf("Your BMR is %.3f Calorie\n", Bmr);
             printf("\n");
             printf("This is the least amount of calories you should get in a day.\n");
             printf("Does not include daily life and exercise.\n");

        }
        else 
        {
        printf("Can't find BMR cost. Please enter 'Men' or 'Women'.\n");
        return 1;
        }
        printf("\n");
      Bmr_max = (Bmr*Energy);
      printf("All the calories you need is: %.3f Calorie\n",Bmr_max);
    return 0;

    }

