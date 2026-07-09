#include <stdio.h>
int main()
{

    char Name[20];
    int Max_HP;
    int Attack_Power;
    int Defense;
    int Level;

    printf("=== Create Character ===\n");
    printf("Charatec Name:");
    scanf("%s",Name);
    printf("Max HP :");
    scanf("%d", &Max_HP);
    printf("Attack Power :");
    scanf("%d", &Attack_Power);
    printf("Defense :");
    scanf("%d", &Defense);
    printf("Level :");
    scanf("%d", &Level);

    printf("\n=== Character Summary ===\n");
    printf("Name : %s\n", Name);
    printf("Max HP : %d\n", Max_HP);
    printf("Attack Power: %d\n", Attack_Power);
    printf("Defense : %d\n", Defense);
    printf("Level : %d\n", Level);

    return 0;
}