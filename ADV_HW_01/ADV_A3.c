#include <stdio.h>

int main() {
    unsigned int N, K;
    scanf("%u %u", &N, &K);
    unsigned int result = N & ((1 << K) - 1);
    printf("%u\n", result);
    return 0;
}
