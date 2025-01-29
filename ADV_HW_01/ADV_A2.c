#include <stdio.h>

int main(void)
{
    unsigned int N, K;
    scanf("%u %u", &N, &K);
    unsigned int shifted = (N >> K) | (N << (32 - K));
    printf("%u\n", shifted);
    return 0;
}
