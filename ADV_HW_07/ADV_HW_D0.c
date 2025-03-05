#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct list
{
    char word[20];
    struct list *next;
};

struct list *insert_sorted(struct list *head, char *word)
{
    struct list *new_node = (struct list *)malloc(sizeof(struct list)); 
    if (new_node == NULL) {
        printf("Ошибка выделения памяти!\n");
        exit(1);
    }
    strcpy(new_node->word, word);
    if (head == NULL || strcmp(word, head->word) < 0)   
    { 
        new_node->next = head; 
        return new_node; 
    }
    struct list *current = head; 
    while (current->next != NULL && strcmp(word, current->next->word) >= 0)   
    { 
        current = current->next; 
    }
    new_node->next = current->next; 
    current->next = new_node; 
    return head; 
}


void print_list(struct list *head)
{
    while (head != NULL) {
        printf("%s", head->word);
        head = head->next; 
        if (head != NULL) { 
            printf(" ");
        }
    }
}


void delete_list(struct list **head)
{
    struct list *current = *head; 
    while (current != NULL) { 
        struct list *next = current->next; 
        free(current); 
        current = next; 
    }
    *head = NULL; 
}

int main()
{
    char str[1000]; 
    struct list *head = NULL; 
    fgets(str, 1000, stdin); 
    str[strcspn(str, ".")] = 0; 
    char *word = strtok(str, " "); 
    while (word != NULL)   
    { 
        head = insert_sorted(head, word); 
        word = strtok(NULL, " "); 
    }
    print_list(head);
    delete_list(&head);
    return 0;
}
