#include <stdio.h>
#include "LL.h"

int main() {
    NodeP head = NULL;
    NodeP* head_r = &head;
    push(head_r, 7);
    push(head_r, 5);
    list(head_r);
    pop(head_r);
    list(head_r);
    append(head_r, 6);
    list(head_r);
    drop(head_r);
    list(head_r);
    empty(head_r);
    empty(head_r);
    list(head_r);
    push(head_r, 10);
    push(head_r, 9);
    list(head_r);
    empty(head_r);
    list(head_r);
    return 0;
}