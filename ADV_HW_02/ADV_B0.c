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

uint64_t findMaxBlock(list *head)
{
	if (!head) 
	{
        return 0;
      }
	uint64_t m_address = 0;
	size_t m_size = 0;
	while (head) 
    {
		if (head->size > m_size) 
		{
            	m_size = head->size;
            	m_address = head->address;
           }
        	head = head->next;
    }
    return m_address;
}

int main(void) {
    list thirdNode = {140525067852320U, 10, "3", NULL};
    list secondNode = {140525067852350U, 30, "2", &thirdNode};
    list firstNode = {140525067852900U, 100, "1", &secondNode};

    list *head = &firstNode;
    printf("\nMax block size:%" PRId64 "\n", findMaxBlock(head));
    return 0;
}
