
#include <stdio.h>
#define SIZE 20
// #define SIZE 5

void sort_array(int size, int a[]);

 int main(void){
    int arr[] = {20, 19, 4, 3, 2, 1, 18, 17, 13, 12, 11, 16, 15, 14, 10, 9, 8, 7, 6, 5};
//     // int arr[] = {5, 4, 3, 2, 1};

     sort_array(SIZE, arr);
    for (int i = 0; i < SIZE; i++)
         printf("%d ", arr[i]);

     printf("\n");
}

void sort_array(int size, int a[])
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (a[i] > a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

}