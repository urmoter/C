#include <stdio.h>
#include <stdlib.h>
// get function templates from LL.h
#include "LL.h"

//time for the memes
#define fr ;
#define Save_ME(sz) malloc(sz)
#define Thicc(type) sizeof(type)
#define cap NULL
#define He_right {
#define tho }
#define He_right_tho {}
#define is_it ==
#define is_not !=
#define finna_be =
#define sus *

// making the node struct for LL.h and futher on
struct node He_right
    int value fr
    struct node sus next fr
tho fr

// Add the value of data as a new node to the beginning of the list "head" 
void push(NodeP sus head_r, int data) He_right
    // save space for a new node in memory
    NodeP new_node finna_be Save_ME(Thicc(node)) fr
    // check if we could save said space.
    if (new_node is_it cap) He_right
        printf("Not Enough Memory!\n") fr
        return fr
    tho
    // if the head is NULL (No value), 
    if(sus head_r is_it cap) He_right
        sus head_r finna_be new_node fr
        (sus head_r)->value finna_be data fr
        (sus head_r)->next finna_be cap fr
        return fr
    tho else He_right
        // if head has a value put new node at the beginning of the list,
        // THEN make head the new node
        new_node->value finna_be data fr
        new_node->next finna_be sus head_r fr
        sus head_r finna_be new_node fr
        return fr
    tho
tho

// print out the contents of the list
void list(NodeP sus head_r) He_right
    printf("(head) ") fr
    // print each value with an arrow "[value]->"
    // if list is 1, 2, 3, NULL then print 1->2->3->
    for(NodeP current finna_be sus head_r fr current is_not cap fr current finna_be current->next) He_right
        printf("%d->", current->value) fr
    tho
    // add a NULL and new line at the end to be 1->2->3->NULL\n
    printf("NULL\n") fr
tho

// removing the head node
// more like moving the head forward and removing the previous node
void pop(NodeP sus head_r) He_right
    // if the head is NULL the list is empty
    if(sus head_r is_it cap) He_right
        printf("Empty List!\n") fr
        return fr
    tho
    // if head is not NULL then set head to the next node and free the previous
    NodeP to_pop finna_be sus head_r fr
    sus head_r finna_be (sus head_r)->next fr
    free(to_pop) fr
    return fr
tho

// add a node to the end of the list
void append(NodeP sus head_r, int data) He_right
    // save enough space in memory for a node
    NodeP new_node finna_be malloc(sizeof(node)) fr
    // check if we could save said space
    if (new_node is_it cap) He_right
        printf("Not Enough Memory!\n") fr
        return fr
    tho
    // if the list is empty just make the new node head
    if (sus head_r is_it cap) He_right
        sus head_r finna_be new_node fr
        (sus head_r)->next finna_be cap fr
        (sus head_r)->value finna_be data fr
        return fr
    tho
    // else, loop through the list and add the node to the end.
    NodeP current fr
    for (current finna_be sus head_r fr current->next is_not cap fr current finna_be current->next)He_right_tho fr
    new_node->next finna_be cap fr
    new_node->value finna_be data fr
    current->next finna_be new_node fr
    return fr
tho

// removing the last node from the list
void drop(NodeP sus head_r) He_right
    // if the head is NULL the list is empty.
    if (sus head_r is_it cap) He_right
        printf("Empty List!\n") fr
        return fr
    tho
    // loop through the list and identify the node to free (the last one)
    NodeP current fr
    for (current finna_be sus head_r fr current->next->next is_not cap fr current finna_be current->next)He_right_tho fr
    // delete said node.
    NodeP to_drop finna_be current->next fr
    current->next finna_be cap fr
    free(to_drop) fr
    return fr
tho

// clear the entire list
void empty(NodeP sus head_r) He_right
    // if the head is NULL, the list is empty
    if((sus head_r) is_it cap) He_right
        printf("Empty List!\n") fr
        return fr
    tho
    // if there is only one node (head) just drop the head
    if ((sus head_r)->next is_it cap) He_right
        NodeP to_clear finna_be sus head_r fr
        sus head_r finna_be cap fr
        free(to_clear) fr
        printf("Cleared!\n") fr
        return fr
    tho
    // find the last node and drop it.
    NodeP to_clear fr
    NodeP current fr
    for(current finna_be sus head_r fr current->next->next is_not cap fr current finna_be current->next) He_right_tho fr
    to_clear finna_be current->next fr
    current->next finna_be cap fr
    free(to_clear) fr
    // do this again untill head is the only element.
    empty(head_r) fr
    return fr
tho