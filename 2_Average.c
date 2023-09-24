// calculate average using arrays and helper functions
#include <stdio.h>

const int N = 3;
float average(int N, int arr[]);
int get_int(char prompt[]);

int main(void){
    int scores[N];
    for (int i = 0; i < N; i++){
        scores[i] = get_int("Enter number:");
    }
    float result = average(N, scores);
    printf("The average is %f", result);
    return 0;
}

int get_int(char prompt[]){
    int number;
    printf(prompt);
    scanf("%d", &number);
    return number;
}

float average(int N, int arr[]){
    int total = 0;
    float average = 0;

    for (int i = 0; i < N; i++){
        total += arr[i];
    }
    average = total / (float) N;
    return average;
}