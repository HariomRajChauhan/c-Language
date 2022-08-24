#include<stdio.h>
#include<windows.h>

int main(){
    int hours,minutes,seconds;
    int delays = 1000;

    printf("Time Formate : Hours - Minutes - Seconds\n");
    printf("Set Time :\n");
    scanf("%d%d%d",&hours,&minutes,&seconds);

    if (hours>12 || minutes>60 || seconds>60)
    {
        printf("Error !!\n");
        exit(0);
    }

    while (1)
    {
        seconds++;
        if (seconds>59)
        {
            minutes++;
            seconds=0;
        }
        
        if (minutes>59)
        {
            hours++;
            minutes=0;
        }

        if (hours>12)
        {
            hours=1;
        }

        printf("\n Clock :");
        printf("\n %02d:%02d:%02d",hours,minutes,seconds);
        Sleep(delays);
        system("cls");
    }
    
    

    return 0;
}
