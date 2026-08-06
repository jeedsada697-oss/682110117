#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int target;
    int guess;
    int attempts = 0;

    // ตั้งค่า seed สำหรับการสุ่ม
    srand(time(NULL));

    // สุ่มตัวเลข 1-100
    target = rand() % 100 + 1;

    printf("=== Number Guessing Game (1-100) ===\n");

    // ใช้ do-while เพื่อให้ผู้เล่นได้เดาอย่างน้อย 1 ครั้ง
    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        attempts++;

        if (guess > target) {
            printf("Too High!\n");
        }
        else if (guess < target) {
            printf("Too Low!\n");
        }
        else {
            printf("Correct! You guessed it in %d attempts.\n", attempts);
        }

    } while (guess != target);

    return 0;
}