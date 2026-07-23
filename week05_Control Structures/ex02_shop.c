#include <stdio.h>

int main(){

    int gold = 1000;
    int Choice;

    printf("== ITEM SHOP ==\n");
    printf("Gold: %d\n", gold);
    printf("1. Health Potion - 50 Gold(+50 HP)\n");
    printf("2. Mana Potion - 80 Gold(+30 MP)\n");  
    printf("3. Iron Sword - 500 Gold(+100 ATK)\n");
    printf("4. Leather Armor - 300 Gold(+50 DEF)\n");
    printf("5. Exit\n");
    printf("Enter your choice: ");

    scanf("%d", &Choice);

    switch(Choice){
        case 1:
            if (gold >= 50) {
                gold -= 50;
                printf("You bought a Health Potion! Remaining Gold: %d\n", gold);
            } 
            else {
                printf("Not enough gold!\n");
            }
            break;

        case 2:
            if (gold >= 80) {
                gold -= 80;
                printf("You bought a Mana Potion! Remaining Gold: %d\n", gold);
            } 
            else {
                printf("Not enough gold!\n");
            }
            break;
        
        case 3:
            if(gold < 500){
            printf("Not enough Gold!\n");
        }
            else
        {
            gold = gold - 500;

            printf("=== Purchase ===\n");
            printf("Iron Sword: 500 Gold\n");
            printf("Remaining: %d Gold\n", gold);
            printf("ATK Bonus: +100\n");
            printf("Item purchased successfully!\n");
        }
            break;
    
        case 4:
            if (gold < 300) {
            printf("Not enough Gold!\n");
        }   
        else 
        {
            gold = gold - 300;
            
            printf("=== Purchase ===\n");
            printf("Leather Armor: 300 Gold\n");
            printf("Remaining: %d Gold\n", gold);
            printf("DEF Bonus: +50\n");
            printf("Item purchased successfully!\n");
        }
            break;
        
        case 5:
            printf("Exiting the shop. Goodbye!\n");
            break;
        
        default:
            printf("Invalid choice! Please select a valid option.\n");

    }

}