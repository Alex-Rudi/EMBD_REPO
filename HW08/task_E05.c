#include <stdio.h>
#define SIZE 10

int Input(int n, int arr[]);
int positArr(int n, int arr[]);

int main(void)
{
    int arr[SIZE];
    Input(SIZE, arr);
    int result = positArr(SIZE, arr);
        printf("%d\n", result);
    return 0;
}
int Input(int n, int arr[])
{
    int i = 0;
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    return i;
}
int positArr(int n, int arr[])
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    if (arr[i] >= 0)
        sum += arr[i];
    return sum;
}
