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
    printf(" Name :%s\n", Name);
    printf("Level : %u\n", Level);
    printf("Max HP: %u\n", Max_HP);
    printf("Attack Power : %u\n", Attack_Power);
    printf("Defense : %u\n", Defense);
  
    printf("\n=== Character Summary ===\n");
    printf("╔════════════════════════════════════════════╗\n");
    printf("║ %-43s║\n", Name);
    printf("╠════════════════════════════════════════════╣\n");
    printf("║ Level : %-34u ║\n", Level);
    printf("║ Max HP : %-33u ║\n", Max_HP);
    printf("║ Attack Power : %-27u ║\n", Attack_Power);
    printf("║ Defense : %-32u ║\n", Defense);
    printf("╠════════════════════════════════════════════╣\n");
    printf("║ HP Bar: [██████████] 100%                  ║\n");
    printf("║ Power Score: %-29d ║\n", Attack_Power*2 + Defense + Max_HP / 10  + Max_HP + Level);
    printf("╚════════════════════════════════════════════╝\n");
    
    return 0;
}