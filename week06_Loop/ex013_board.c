#include <stdio.h>

int main()
{
    int number = 1;

    for (int row = 1; row <= 3; row++)
    {

        // เส้นบนของแต่ละแถว
        for (int col = 1; col <= 5; col++)
        {
            printf("+---");
        }
        printf("+\n");


        // ช่องตัวเลข
        for (int col = 1; col <= 5; col++)
        {
            printf("|%2d ", number);
            number++;
        }

        printf("|\n");
    }


    // เส้นปิดท้าย
    for (int col = 1; col <= 5; col++)
    {
        printf("+---");
    }
    printf("+\n");


    return 0;
}