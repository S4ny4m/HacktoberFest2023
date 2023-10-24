#include <stdio.h>

void swap(int *a, int *b)
{
    int c = (*a);
    (*a) = (*b);
    (*b) = c;
}

void BubbleSortI(int *a, int n) // Itereative BSort Fun
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (a[j] > a[j + 1])
                swap(&a[j], &a[j + 1]);
}

void display(int *a, int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
}

void sortR(int *a, int n) // Recursive BSort fun
{
    if (n < 0)
        return;
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] > a[i + 1])
            swap(&a[i], &a[i + 1]);
    }
    sortR(a, n - 1);
}

int main()
{
    int n;
    printf("Enter Number of Elements : ");
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    sortR(a, n);
    display(a, n);
    return 0;
}