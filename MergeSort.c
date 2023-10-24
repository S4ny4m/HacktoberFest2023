#include <stdio.h>
#include <stdlib.h>

void merge(int arr[], int left[], int right[], int left_len, int right_len)
{
    int i = 0, j = 0, k = 0;

    while (i < left_len && j < right_len)
    {
        if (left[i] < right[j])
        {
            arr[k++] = left[i++];
        }
        else
        {
            arr[k++] = right[j++];
        }
    }

    while (i < left_len)
    {
        arr[k++] = left[i++];
    }

    while (j < right_len)
    {
        arr[k++] = right[j++];
    }
}

// void Merge(int *a, int n, int temp)
// {
//     if (n == 1 || a[n - 2] <= temp)
//         a[n - 1] = temp;
//     else
//     {
//         int val = a[n - 2];
//         Merge(a, n - 1, temp);
//         a[n - 1] = val;
//     }
// }

void MergeSort(int *a, int n)
{
    if (n == 0)
        return;
    int Last = a[n - 1];
    MergeSort(a, n - 1);
    Merge(a, n, Last);
    // merge(a, )
}

void display(int *a, int n)
{

    // printf("%d ", a[0]);
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
}

int main()
{
    int n;
    printf("Enter Number of Elements : ");
    scanf("%d", &n);
    int *a = malloc(sizeof(int) * n);
    // int a[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    MergeSort(a, n);
    display(a, n);
    free(a);

    return 0;
}