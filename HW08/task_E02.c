#include <stdio.h>
#define SIZE 5

void arrSh(int* arr, int n)
{
    for (size_t i = 0; i < n; ++i)
        printf("%d ", arr[i]);
    printf("\n");
}
void arrIn(int* arr, int n)
{
    for(size_t i = 0; i < n; ++i)
        scanf("%d", &arr[i]);
}
int min(int* arr, int n)
{
    for (size_t i = 1; i < n; ++i)
        if (arr[0] > arr[i])
            arr[0] = arr[i];
    return arr[0];
}
int main(void)
{
int arr[SIZE];
    arrIn(arr, SIZE);
    printf("%d\n", min(arr, SIZE));
    return 0;
}
