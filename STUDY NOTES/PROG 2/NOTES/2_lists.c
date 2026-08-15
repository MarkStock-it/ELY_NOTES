/*
Hello!

What is a Linked List?
Unlike a regular array where memory is stored side-by-side in a fixed block,
a Linked List is a series of separate memory blocks (called NODES) scattered
in RAM, connected together by POINTERS!

Each node holds two things but not limited to: 
  1. Data (The value you want to store)
  2. Next (A pointer holding the address of the NEXT node);


THE NODE STRUCTURE:

    typedef struct Node {
        int data;
        struct Node *next; // Self-referential pointer! Points to another Node.
    } Node;


A VISUAL LOOK:

    [ Head ] ---> [ Data: 10 | Next ] ---> [ Data: 20 | Next ] ---> NULL
                                                                 (End of list)
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

int main() {

    // 1. Create nodes dynamically in Heap memory
    Node *head = malloc(sizeof(Node));
    Node *second = malloc(sizeof(Node));

    // 2. Assign data and connect the nodes
    head->data = 10;
    head->next = second; // Head points to second node

    second->data = 20;
    second->next = NULL; // NULL marks the END of the list!

    // 3. Traverse and print the list using a temporary pointer
    Node *current = head;
    while (current != NULL) {
        printf("[%d] -> ", current->data);
        current = current->next; // Move to the next memory address!
    }
    printf("NULL\n");

    // 4. Free allocated memory
    free(head);
    free(second);

    return 0;
}