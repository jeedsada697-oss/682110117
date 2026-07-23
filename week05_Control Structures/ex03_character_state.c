#include <stdio.h>

int main()
{
    int Max_Hp = 100;
    int Damage = 100;
    _Bool ispoisoned = 0;
    int attackcount = 0;

    printf("Max Hp :%d\n", Max_Hp);
    printf("Damage :%d\n", Damage);

    printf("Is Poisoned: %d\n", ispoisoned);
    printf("Attack Count :%d\n", attackcount);

    //
    int hp = Max_Hp - Damage;
    if (hp < 0)
        hp = 0; // ห้าม hp ติดลบ

    if (hp <= 0)
    {
        printf("State: DEAD");
    }
    else if (hp * 100 < Max_Hp * 25)
    {
        printf("State: CRITICAL");
    }
    else if (ispoisoned)
    {
        printf("State: POISONED");
    }
    else
    {
        printf("State: NORMAL");
    }

    if (attackcount > 0 && attackcount % 5 == 0)
    {
        printf("\nUltimate Ready!");
    }
    
    printf("== CHARECTER STATMENT==\n");

    // out put
    printf("Max Hp :%d\n", Max_Hp);
    printf("Damage :%d\n", Damage);

    printf("Is Poisoned: %d\n", ispoisoned);
    printf("Attack Count :%d\n", attackcount);

    return 0;
}