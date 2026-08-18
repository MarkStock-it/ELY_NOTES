/*We will learn regarding the different functions that are present a ADT List, 

    Ill try to provide the most effecient codes for these functions 
    so you guys can follow through .

Simplified
    - Insert / Appending            ( InsertEnd , InsertStart , InsertInPos)
    - Deletion / Removing           ( RemoveStart , RemoveEnd , DeleteAtPos , RemoveAllOcur , RemoveElem , Clear )
    - Query Accesing                (Get , Set , Search , Print , Size , IsEmpty)
    - Position Based Functions      ( MoveTostart , MoveToEnd , Next , Prev)



*/



/*
------------------------------------
|     INITIALIZATION FUNCTION      |
------------------------------------


Node * Ini_Node(Int Data){
    Node * newnode = malloc(sizeof(Node));
    newnode->data = Data;
    newnode->next = NULL;       // Initialize as End of list. 
    return newnode;
}


ABSOLUTE MINIMUM AND EFFECIENT CODE TO IMPRESS MISS PENA



------------------------------------
|        INSERTION FUNCTIONS       |
------------------------------------


Void InsertStart ( Node ** Head , Int Data){
    Node * Newnode = Ini_Node(Data); 
        if(Head && Newnode){
         Newnode->next = *Head;
         *Head = Newnode;
        }
    }


//ASSUME NO TAIL
Void InsertEnd(Node **head, int Data) {

    for( ; head && *head ; head = &((*head)->next)){}
    if (head) 
    *head = Ini_Node(Data);
    
}

//WITH TAIL - ASSUMING ALL VALID ALLOCATIONS

Void InsertEnd(Node ** Tail, int Data){
    (*Tail)->next = Ini_Node(Data);
    *Tail = (*Tail)->next;
}

//ASSUME NO TAIL
void InsertAtPos(Node **Head, int Pos, int Data){

    for(int ctr = 0; *Head && ctr < Pos; ctr++, Head = &((*Head)->next)) {}
    Node *newnode = Ini_Node(Data);
    if( !(*Head) || !newnode)
        return;
    newnode->next = *Head; 
    *Head = newnode;
}


------------------------------------
|        DELETION FUNCTIONS        |
------------------------------------


void Delete_Start(Node ** Head){
    Node * Temp = *Head;
    *Head = (*Head)->Next;
    free(Temp);
}

// NO TAILL
void Delete_End(Node ** Head){
    for(; (*Head)->next ; head = (&(*Head)->next)){}
    free(*Head);
    *Head = NULL;
}   

void RemoveEnd(Node **tail){
    Node *t = *tail;
    if((*tail = t->prev)) (*tail)->next = NULL;
    free(t);
}

I JUST GOT A LIGHT BULB
The pointer to the next node , is actually THE pointer to it's data inside aswell , 
I thought that L = L->Next; 
Is like your in that node , but L->next is actually the pointer to the next node not it's current node .


void RemovePos(Node ** Head , int Pos){
    for(int ctr = 0 ; *Head && ctr < Pos ; ctr++ , Head = (&(*head)->next)){}
    if(*Head){
    Node * temp = *Head;
    (*Head) = (&(*Head)->next);
    free(temp);
    }
}


void Clear(Node **head){
    while(*head) RemoveStart(head);
}




*/