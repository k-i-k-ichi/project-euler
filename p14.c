#include <stdio.h>
#include <stdlib.h>

#define LIMIT 100000000 // 100 millions limit, also stack limit

typedef struct node{
    long int value;
    long int position;
    struct node *next;
} Node;

typedef struct Stack{
    Node** stackarray;
    long int size;
} Stack;

Stack* stack_init(long int size){
    Stack* stack = malloc(sizeof(Node*)); 
    stack->stackarray = (Node*) malloc(size*sizeof(Node*));
    stack->size = 0;
    return stack;
}

Node* stack_top(Stack* stack){
    if
}



/* This method approach "bottom up" to generate a tree of sequences */
void create(Node** stack, Node** array, Node* n){
    long long int even = n->value * 2;
    long long int odd = ((n->value-1)%3==0) ? (n->value -1 )/3 : 0;
    if(even<LIMIT){
        array[even] = (Node*) malloc(sizeof(*Node));
        array[even]->value = even, n->next = array[even];
        array[even]->position = n->position + 1;
    }
    if(odd>1 && odd%2 != 0){
        array[odd] = (Node*) malloc(sizeof(*Node));
        array[odd]->value = odd, n->next = array[odd];
        array[odd]->position = n->position + 1;
    }
}



int main(){


    Node** list = malloc(LIMIT * sizeof(Node*));
    
    
    return 0;
}
