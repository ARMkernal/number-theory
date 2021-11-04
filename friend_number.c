#include <stdio.h>

int SumOfFactors(int num)
{
    int sum = 0;
    for (int j = 1; j < num; j++) {
    // for (int j = 1; j < (int)M/2; j++) {
        if (num % j == 0) {
            sum += j;
        }
    }

    return sum;
}

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

    for (int i = 1; i<= N; i++) {
        int j = SumOfFactorsFast(i);

        if (j > i && SumOfFactorsFast(j) == i) {
            printf("%d and %d are a pair of friend numbers.\n", i, j);
        }
    }

    printf("end.\n");
}