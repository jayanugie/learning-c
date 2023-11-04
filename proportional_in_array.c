#include <stdio.h>

void plusMinus(int arr_count, int *arr)
{

    int positive = 0;
    int negative = 0;
    int zeros = 0;

    for (int i = 0; i < arr_count; i++)
    {
        if (arr[i] > 0)
            positive += 1;
        if (arr[i] < 0)
            negative += 1;
        if (arr[i] == 0)
            zeros += 1;
    }

    float proportion_positive_values = (float)positive / arr_count;
    float proportion_negative_values = (float)negative / arr_count;
    float proportion_zeros_values = (float)zeros / arr_count;

    printf("%.6f\n", proportion_positive_values);
    printf("%.6f\n", proportion_negative_values);
    printf("%.6f", proportion_zeros_values);
}

int main()
{

    int arr[] = {-1, 2, 3, 0, -2};

    plusMinus(5, arr);

    return 0;
}