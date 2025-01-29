#include <stdio.h>
#include <stdint.h>

uint32_t max_bit(uint32_t N, uint32_t K)
{
    uint32_t max = 0;
    for (uint32_t i = 0; i <= 32 - K; i++)
    {
        uint32_t sequence = (N >> i) & ((1 << K) - 1);
        if (sequence > max)
        {
            max = sequence;
        }
    }
    return max;
}

int main(void)
{
    uint32_t N, K;
    scanf("%u %u", &N, &K);
    printf("%u\n", max_bit(N, K));
    return 0;
}

