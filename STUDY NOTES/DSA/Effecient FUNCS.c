#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

/* ---------- INIT ---------- */
Node* Ini_Node(int data){
    Node *n = malloc(sizeof(Node));
    n->data = data;
    n->next = NULL;
    return n;
}

/* ---------- INSERTION ---------- */
void InsertStart(Node **head, int data){
    Node *n = Ini_Node(data);
    if(head && n){ n->next = *head; *head = n; }
}

void InsertEnd(Node **head, int data){            // no tail
    for(; *head; head = &(*head)->next);
    *head = Ini_Node(data);
}

void InsertEnd_T(Node **tail, int data){          // with tail, list assumed non-empty
    (*tail)->next = Ini_Node(data);
    *tail = (*tail)->next;
}

void InsertAtPos(Node **head, int pos, int data){
    for(int i = 0; *head && i < pos; i++, head = &(*head)->next);
    Node *n = Ini_Node(data);
    n->next = *head;
    *head = n;
}

/* ---------- DELETION ---------- */
void RemoveStart(Node **head){
    if(!*head) return;
    Node *t = *head;
    *head = (*head)->next;
    free(t);
}

void RemoveEnd(Node **head){                      // no tail
    if(!*head) return;
    if(!(*head)->next){ free(*head); *head = NULL; return; }
    for(; (*head)->next->next; head = &(*head)->next);
    free((*head)->next);
    (*head)->next = NULL;
}

void RemoveAtPos(Node **head, int pos){
    for(int i = 0; *head && i < pos; i++, head = &(*head)->next);
    if(!*head) return;
    Node *t = *head;
    *head = (*head)->next;
    free(t);
}

void RemoveElem(Node **head, int data){           // first occurrence
    for(; *head && (*head)->data != data; head = &(*head)->next);
    if(!*head) return;
    Node *t = *head;
    *head = (*head)->next;
    free(t);
}

void RemoveAllOcur(Node **head, int data){
    while(*head){
        if((*head)->data == data){
            Node *t = *head;
            *head = (*head)->next;
            free(t);
        } else head = &(*head)->next;
    }
}

void Clear(Node **head){
    while(*head) RemoveStart(head);
}

/* ---------- QUERY / ACCESS ---------- */
int Get(Node *head, int pos){
    for(int i = 0; head && i < pos; i++, head = head->next);
    return head ? head->data : -1;
}

void Set(Node *head, int pos, int data){
    for(int i = 0; head && i < pos; i++, head = head->next);
    if(head) head->data = data;
}

int Search(Node *head, int data){
    int i = 0;
    for(; head; head = head->next, i++)
        if(head->data == data) return i;
    return -1;
}

void Print(Node *head){
    for(; head; head = head->next) printf("%d ", head->data);
    printf("\n");
}

int Size(Node *head){
    int n = 0;
    for(; head; head = head->next) n++;
    return n;
}

int IsEmpty(Node *head){ return head == NULL; }

/* ---------- POSITION-BASED (cursor) ---------- */
void MoveToStart(Node **cur, Node *head){ *cur = head; }

void MoveToEnd(Node **cur, Node *head){
    for(*cur = head; *cur && (*cur)->next; *cur = (*cur)->next);
}

void Next(Node **cur){ if(*cur) *cur = (*cur)->next; }

void Prev(Node **cur, Node *head){                // singly linked = O(n), unavoidable
    if(!*cur || *cur == head){ *cur = NULL; return; }
    Node *p = head;
    while(p->next != *cur) p = p->next;
    *cur = p;
}