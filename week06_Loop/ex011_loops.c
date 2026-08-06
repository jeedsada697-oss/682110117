#include<stdio.h>

int main() {
    
    int sum = 0;

    printf("For Loop:\n");
    for (int i = 1; i <= 10; i++) {
        printf("%d ", i);
        sum += i;
    }
    
    printf("\nSum: %d\n", sum);
    
    sum = 0;
    int i = 1;

    printf("While loop:\n");
    while (i <= 10) {
        printf("%d " , i);
        sum += i;
        i++;
    }
    printf("\nSum = %d\n\n", sum);
    
    sum = 0;
    i = 1;

    printf("Do while loop:\n");
    do{
        printf("%d ",i);
        sum += i;
        i++;
    }while (i <= 10);
    printf("\nSum = %d\n", sum);

    return 0;
}
