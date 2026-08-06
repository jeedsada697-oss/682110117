#include <stdio.h>

int main() {
    int i, j;
    int rows = 5;

    printf("Pattern 1:\n");
    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    printf("\nPattern 2:\n");
    for (i = rows; i >= 1; i--) {
        for (j = 1; j <= rows; j++) {
            printf("* ");
        }
        printf("\n");
    }

   printf("\nPattern 3: Diamond\n");

// ส่วนบน
for (i = 1; i <= rows; i++) {

    // ช่องว่าง
    for (j = 1; j <= rows - i; j++) {
        printf(" ");
    }

    // ดาว
    for (j = 1; j <= i; j++) {
        printf("* ");
    }

    printf("\n");
}


// ส่วนล่าง
for (i = rows - 1; i >= 1; i--) {

    // ช่องว่าง
    for (j = 1; j <= rows - i; j++) {
        printf(" ");
    }

    // ดาว
    for (j = 1; j <= i; j++) {
        printf("* ");
    }

    printf("\n");
}
}