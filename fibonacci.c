#include <stdio.h>

int main()
{
    int num1, num2, n;

    printf("Masukkan angka pertama: ");
    scanf("%d", &num1);

    printf("Masukkan angka kedua: ");
    scanf("%d", &num2);

    printf("Masukkan jumlah bilangan dalam deret Fibonacci: ");
    scanf("%d", &n);

    if (n < 2)
    {
        printf("Deret Fibonacci minimal terdiri dari 2 angka.\n");
    }
    else
    {
        printf("Deret Fibonacci dengan %d bilangan:\n", n);
        printf("%d %d ", num1, num2);

        for (int i = 2; i < n; i++)
        {
            int next = num1 + num2;
            printf("%d ", next);
            num1 = num2;
            num2 = next;
        }

        printf("\n");
    }

    return 0;
}
