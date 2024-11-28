#include <stdio.h>
#define SIZE 12
#define SHIFT 4

void shiftArr(int array[], int size)
{
    for (int i = 0; i < SHIFT; i++)
{
    int temp = array[i];
    for (int j = SHIFT; j < size; j += SHIFT)
{
    int temp2 = array[i + j];
        array[i + j] = temp;
        temp = temp2;
}
        array[i] = temp;
}
}
int main(void)
{
    int arr[SIZE] = {0};
    for (int i = 0; i < SIZE; i++)
        scanf("%d", &arr[i]);
         shiftArr(arr, SIZE);
    for (int i = 0; i < SIZE; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
