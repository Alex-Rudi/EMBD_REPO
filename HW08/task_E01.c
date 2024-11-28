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
float arrAv(int* arr, int n)
{
int resalt = 0;
    for (size_t i = 0; i < n; ++i)
        resalt += arr[i];
return (float)resalt / n;
}

int main(void)
{
int arr[SIZE];
    arrIn(arr, SIZE);
    printf("%.3f\n", arrAv(arr, SIZE));
    return 0;
}
