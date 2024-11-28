#include <stdio.h>
#define SIZE 10

int Input(int n, int arr[]);
int maxArray(int n, int arr[]);
int maxArrayIn(int n, int arr[]);
int minArray(int n, int arr[]);
int minArrayIn(int n, int arr[]);
int main(void)
{
    int arr[SIZE];
    Input(SIZE, arr);
    printf("%d ", maxArrayIn(SIZE, arr));
    printf("%d ", maxArray(SIZE, arr));
    printf("%d ", minArrayIn(SIZE, arr));
    printf("%d ", minArray(SIZE, arr));
    printf("\n");
    return 0;
}
int Input(int n, int arr[])
{
    int i = 0;
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    return i;
}
int maxArray(int n, int arr[])
{
    int max = arr[0];
    for (int i = 1; i < n; i++)
{
    if (arr[i] > max)
    max = arr[i];
}
    return max;
}
int maxArrayIn(int n, int arr[])
{
    int max_index = 0;
    for (int i = 1; i < n; i++)
{
    if (arr[i] > arr[max_index])
       max_index = i;
}
    return max_index + 1;
}
int minArray(int n, int arr[])
{
    int min = arr[0];
    for (int i = 1; i < n; i++)
{
        if (arr[i] < min)
           min = arr[i];
}
    return min;
}
int minArrayIn(int n, int arr[])
{
    int min_index = 0;
    for (int i = 1; i < n; i++)
{
    if (arr[i] < arr[min_index])
        min_index = i;
}
    return min_index + 1;
}
