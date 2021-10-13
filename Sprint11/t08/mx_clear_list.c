#include "list.h"

void mx_clear_list(t_list **list) {
    t_list *temp = *list;
    while((*list) -> next != NULL) {
        (*list) = (*list) -> next;
        free(temp);
        temp = *list;
    }
    free(*list);
    *list = NULL;
}

