#ifndef LL_H_   /* Include Guard */
#define LL_H_

typedef struct node node; // refer to "LL.c" for the node struct decleration.
#define NodeP node* // making a node pointer type

// declaring the functions for LL.c
void push(NodeP* head_r, int data);
void pop(NodeP* head_r);
void append(NodeP* head_r, int data);
void drop(NodeP* head_r);
void empty(NodeP* head_r);
void list(NodeP* head_r);

#endif  /* LL_H_ */