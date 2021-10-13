#include "list.h"

int mx_list_size(t_list *list) {
    t_list *temp = list;
    int count = 0;
    while (temp != NULL) {
        count++;
        temp = temp -> next;
    } 
    return count;
}

