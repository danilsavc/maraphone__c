#include "list.h"

void mx_push_back(t_list **list, void *data) {
    t_list *temp = *list;
    if (*list) {
        while (temp -> next) {
            temp = temp -> next;
        }
        temp -> next = mx_create_node(data); 
    }
    else {
        *list = mx_create_node(data);
    }
}

