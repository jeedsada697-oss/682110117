#include <stdio.h>

int main() {

printf("1. Expression: 10 / 3 = %d\n", 10 / 3);

int expression_1 = 10 / 3;
printf("2. Expression: 10 / 3 = %d\n", expression_1);

float expression_2 = 10.0 / 3;
printf("3. Expression: 10.0 / 3 = %f\n", expression_2);

float expression_3 = (float)10 / 3;
printf("4.Expression: (float) 10 / 3 = %f\n", expression_3);

float expression_4 = 10 % 3;
printf("5. Expression: 10 %% 3 = %f\n", expression_4);

float expression_5 = -7 % 3;
printf("6.Expression: -7 %% 3 = %f\n", expression_5);

float expression_6 = 7 % -3;
printf("7.Expression: 7 %% -3 = %f\n", expression_6);

return 0;
}