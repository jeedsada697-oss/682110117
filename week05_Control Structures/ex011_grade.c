#include <stdio.h>
int main() {
    int Grade;
    int Score;
    printf("Enter yo Gudamn Score:");
    scanf("%d", &Score);
    
    if (Score >=80) {  
        printf("Unbilivable : A\n");
        printf("Grade: 4.0");    
    }
    else if (Score  >=75) {
        printf("Good : B+\n");
        printf("Grade: 3.5");
    }
    else if (Score >=70) {
        printf("Average : B\n");
        printf("Grade: 3.0");
    }
    else if (Score >=65){
        printf("Not bad : C+\n");
        printf("Grade: 2.5");
    }
    else if (Score >=60){
        printf("Poor : C\n");
        printf("Grade: 2.0" );
    }
    else if (Score >=55){
        printf("Below Average : D+\n");
        printf("Grade: 1.5");
    }
    else if (Score >=50){
        printf("Below Average : D\n");
        printf("Grade: 1.0");
    }
    else {
        printf("Fail : F\n");
        printf("Grade: 0.0");
    }

    return 0;
}
