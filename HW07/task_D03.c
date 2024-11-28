#include <stdio.h>

void print_num(int num){
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
        printf("%d ", num % 10);
        print_num(num / 10);
    }
}
int main(void) {
    int num;
    scanf("%d", &num);
    print_num(num);
}
