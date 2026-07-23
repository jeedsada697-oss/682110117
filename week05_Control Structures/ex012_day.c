#include <stdio.h>

int main(){
     
    int Day;
    printf("Enter the day Number (1-7) :");
    scanf("%d", &Day);

    switch(Day){
        case 1:
            printf("Monday_Weekday🫠");
            break;
        
        case 2:
            printf("Tuesday_Weekday😒");
            break;

        case 3:
            printf("Wenesday_Weekday🥱");
            break;

        case 4:
            printf("Thursday_Weekday😴");
            break;

        case 5:
            printf("Friday_Weekday🤩");
            break;

        case 6:
            printf("Saturday_Weekend😛");
            break;

        case 7:
            printf("Sunday_Weekend💀");
            break;
        default:
            printf("🤡I think that you are not a human being, because you entered a number that is not between 1-7🤡");
            break;
    }
    return 0;
}