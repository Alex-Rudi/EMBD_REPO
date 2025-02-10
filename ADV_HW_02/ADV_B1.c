#include <stdio.h>
#include <inttypes.h>
#include <stdlib.h>

typedef struct list
{
uint64_t address;
size_t size;
char comment[64];
struct list *next;
} list;

size_t totalMemoryUsage(list *head)
{
    list *tmp = head;
    size_t t_memory = tmp->size;

    while (tmp->next != NULL)
    {
        tmp = tmp->next;
        t_memory += tmp->size;
    }
    return t_memory;
}

int main(void) {
    list thirdNode = {140525067852320U, 10, "3", NULL};
    list secondNode = {140525067852350U, 30, "2", &thirdNode};
    list firstNode = {140525067852900U, 100, "1", &secondNode};

    list *head = &firstNode;
    printf("\nTotal memory allocated: %zu\n", totalMemoryUsage(head));
    return 0;
}
