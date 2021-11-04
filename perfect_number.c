#include <stdio.h>

int SumOfFactorsFast(int num)
{
    int sum = 1;
    int biggestFactor = num;
    int i = 2;
    while(i < biggestFactor) {
        if (num%i == 0) {
            sum += i;
            if (i != num/i) {
                sum += num/i;
            }
            biggestFactor = num/i;
        }   
        i++;
    }
    return sum;
}

int main() 
{
    int N = 0;
    printf("Please input number range:\n");
    scanf("%d", &N);

    for (int i = 2; i<= N; i++) {
        if (i == SumOfFactorsFast(i)) {
            printf("%d is a perfect number.\n", i);
        }
    }
    printf("end.\n");
}