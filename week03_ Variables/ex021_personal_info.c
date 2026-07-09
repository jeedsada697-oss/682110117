#include <stdio.h>

int main() 
{

char Name[20];
int Age;
float GPA;
char Favorite_Subject[20];

printf("=== Enter Data ===\n");
printf("Enter your Name :");
scanf("%s",Name);
printf("Enter your Age :");
scanf("%d", &Age);
printf("Enter your GPA :");
scanf("%f", &GPA);
printf("Enter your Favorite Subject :");
scanf("%s",Favorite_Subject);

printf("\n=== Personal Info ===\n");
printf("Name : %s\n", Name);
printf("Age : %d\n", Age);
printf("GPA : %f\n", GPA);
printf("Favorite Subject : %s\n", Favorite_Subject);

return 0;
}