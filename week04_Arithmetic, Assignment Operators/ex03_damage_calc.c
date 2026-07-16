#include <stdio.h>
#include <math.h>

int main() {
    int Player_Attack ;
    int Enemy_Defense ;
    int Hit_Number ;

    printf("Player Attack :");
    scanf("%d", &Player_Attack);
    printf("Enemy Defense :");
    scanf("%d", &Enemy_Defense);
    printf("Hit Number :");
    scanf("%d", &Hit_Number);

    int Base_Damage = Player_Attack - Enemy_Defense; // Calculate base damage

    if(Hit_Number % 5 == 0){

        Base_Damage = (int)ceil(Base_Damage * 1.5f); // Increase damage by 50% for every 5th hit
        printf("Base Damage : %d\n", Base_Damage);
    } 
    else 
    {
        printf("Base Damage : %d(Normal)\n", Base_Damage);
    }
    return 0;
}