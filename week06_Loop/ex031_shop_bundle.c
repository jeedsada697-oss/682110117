#include <stdio.h>
#include <stdbool.h>

int main()
{
    int gold = 1000;
    int cartTotal = 0;
    int selection;

    bool boughtSword = false;
    bool boughtArmor = false;


    printf("=== ITEM SHOP ===\n");
    printf("Gold: 1,000\n");

    printf("1. Health Potion - 50 Gold (+50 HP)\n");
    printf("2. Mana Potion - 80 Gold (+30 MP)\n");
    printf("3. Iron Sword - 500 Gold (+20 ATK)\n");
    printf("4. Leather Armor - 300 Gold (+15 DEF)\n");
    printf("5. Checkout\n");


    do
    {
        printf("Select item: ");
        scanf("%d", &selection);


        if(selection == 1)
        {
            if(gold >= 50)
            {
                cartTotal += 50;
                printf("Added Health Potion to cart.\n");
            }
            else
                printf("Not enough Gold!\n");
        }


        else if(selection == 2)
        {
            if(gold >= 80)
            {
                cartTotal += 80;
                printf("Added Mana Potion to cart.\n");
            }
            else
                printf("Not enough Gold!\n");
        }


        else if(selection == 3)
        {
            if(gold >= 500)
            {
                cartTotal += 500;
                boughtSword = true;

                printf("Added Iron Sword to cart.\n");
            }
            else
                printf("Not enough Gold!\n");
        }


        else if(selection == 4)
        {
            if(gold >= 300)
            {
                cartTotal += 300;
                boughtArmor = true;

                printf("Added Leather Armor to cart.\n");
            }
            else
                printf("Not enough Gold!\n");
        }


    } while(selection != 5);



    printf("=== Checkout ===\n");


    if(boughtSword && boughtArmor)
    {
        printf("Warrior Bundle! (-10%%)\n");

        cartTotal = cartTotal * 90 / 100;
    }


    gold -= cartTotal;


    printf("Total Paid: %d Gold\n", cartTotal);
    printf("Remaining : %d Gold\n", gold);


    return 0;
}