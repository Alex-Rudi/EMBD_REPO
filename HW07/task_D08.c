#include <stdio.h>

void print_num(int a, int b)
{
    if (a == b){
        printf("%d ", a);
    return;
    }
    else {
        printf("%d ", a);
    if (a < b)
        print_num(a + 1, b);
    else
        print_num(a - 1, b);
    }
}
int main(void){
    int a, b;
    scanf("%d%d", &a, &b);
    print_num(a, b);
}
