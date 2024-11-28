#include <stdio.h>

void convertToBinary(int num){
    static int stp = 0;
    if (!num)
    {
    if (!stp)
        printf("%d ", num);
    return;
    }
    else
    {
        stp++;
        convertToBinary(num / 2);
        printf("%d", num % 2);
    }
}

int main(void) {
    int num;
    scanf("%d", &num);
    convertToBinary(num);
    printf("\n");
}
