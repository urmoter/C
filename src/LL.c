#include <stdio.h>
#include <stdlib.h>
// get function templates from LL.h
#include "LL.h"

// making the node struct for LL.h and futher on
struct node{
    int value;
    struct node* next;
};

// making a boolean type for convience
typedef enum bool {false, true} bool;

// Add the value of data as a new node to the beginning of the list "head" 
void push(NodeP* head_r, int data) {
    // save space for a new node in memory
    NodeP new_node = malloc(sizeof(node));
    // check if we could save said space.
    if (new_node == NULL) {
        printf("Not Enough Memory!\n");
        return ;
    }
    // if the head is NULL (No value), 
    if(*head_r == NULL) {
        *head_r = new_node;
        (*head_r)->value = data;
        (*head_r)->next = NULL;
        return ;
    } else {
        // if head has a value put new node at the beginning of the list,
        // THEN make head the new node
        new_node->value = data;
        new_node->next = *head_r;
        *head_r = new_node;
        return ;
    }
}

// print out the contents of the list
void list(NodeP* head_r) {
    printf("(head) ");
    // print each value with an arrow "[value]->"
    // if list is 1, 2, 3, NULL then print 1->2->3->
    for(NodeP current = *head_r; current != NULL; current = current->next) {
        printf("%d->", current->value);
    }
    // add a NULL and new line at the end to be 1->2->3->NULL\n
    printf("NULL\n");
}

// removing the head node
// more like moving the head forward and removing the previous node
void pop(NodeP* head_r) {
    // if the head is NULL the list is empty
    if(*head_r == NULL) {
        printf("Empty List!\n");
        return;
    }
    // if head is not NULL then set head to the next node and free the previous
    NodeP to_pop = *head_r;
    *head_r = (*head_r)->next;
    free(to_pop);
    return;
}

// add a node to the end of the list
void append(NodeP* head_r, int data) {
    // save enough space in memory for a node
    NodeP new_node = malloc(sizeof(node));
    // check if we could save said space
    if (new_node == NULL) {
        printf("Not Enough Memory!\n");
        return;
    }
    // if the list is empty just make the new node head
    if (*head_r == NULL) {
        *head_r = new_node;
        (*head_r)->next = NULL;
        (*head_r)->value = data;
        return;
    }
    // else, loop through the list and add the node to the end.
    NodeP current;
    for (current = *head_r; current->next != NULL; current = current->next){};
    new_node->next = NULL;
    new_node->value = data;
    current->next = new_node;
    return;
}

// removing the last node from the list
void drop(NodeP* head_r) {
    // if the head is NULL the list is empty.
    if (*head_r == NULL) {
        printf("Empty List!\n");
        return;
    }
    // loop through the list and identify the node to free (the last one)
    NodeP current;
    for (current = *head_r; current->next->next != NULL; current = current->next){};
    // delete said node.
    NodeP to_drop = current->next;
    current->next = NULL;
    free(to_drop);
    return;
}

// clear the entire list
void empty(NodeP* head_r) {
    // if the head is NULL, the list is empty
    if((*head_r) == NULL) {
        printf("Empty List!\n");
        return;
    }
    // if there is only one node (head) just drop the head
    if ((*head_r)->next == NULL) {
        NodeP to_clear = *head_r;
        *head_r = NULL;
        free(to_clear);
        printf("Cleared!\n");
        return;
    }
    // find the last node and drop it.
    NodeP to_clear;
    NodeP current;
    for(current = *head_r; current->next->next != NULL; current = current->next) {}
    to_clear = current->next;
    current->next = NULL;
    free(to_clear);
    // do this again untill head is the only element.
    empty(head_r);
    return;
}