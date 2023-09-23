#include <stdio.h>

int main(void){
    int n;
    printf("Enter the number of scores:");
    scanf("%d", &n);

    int scores[n];

    for (int i = 0; i < n; i++){
        printf("Enter score %d:", i);
        scanf("%d", &scores[i]);
    }

    float total = 0;
    for (int i = 0; i < n; i++){
        total += scores[i];
    }
    float average = total / n;
    printf("The average is %f.", average);
    return 0;
}