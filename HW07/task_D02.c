#include <stdio.h>

int sumF(int num){
    static int sum = 0;
    if (num <= 0)
        return sum;
    else
    {
        sumF(num - 1);
        sum += num;
    }
}
int main(void) {
    int num;
    scanf("%d", &num);
    printf("%d\n", sumF(num));
}
