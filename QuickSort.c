#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int low, int high)
{
    int pivot = arr[low];
    int i = low + 1;
    int j = high;

    while (i <= j)
    {
        while (i <= j && arr[i] < pivot)

        {
            /*
            breaks when finds a big element i.e. arr[i] > pivot.
            i.e. it stops when it finds the next big element.
            */
            i++;
        }
        while (i <= j && arr[j] >= pivot)
        {
            /*
            breaks when finds a small element i.e. arr[j] < pivot.
            i.e. it stops when it finds the next samll element.
            */
            j--;
        }
        if (i <= j)
        {
            swap(&arr[i], &arr[j]);
        }
    }

    swap(&arr[low], &arr[j]);

    return j;
}

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pivotIndex = partition(arr, low, high);
        quickSort(arr, low, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, high);
    }
}

int main()
{
    int arr[] = {35, 50, 15, 25, 80, 20, 90, 45};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i;

    quickSort(arr, 0, n - 1);

    printf("Sorted array: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
