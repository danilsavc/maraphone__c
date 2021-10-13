#include "list.h"

void mx_pop_index(t_list **list, int index) {
    if (index <= 0) {
        mx_pop_front(list);
        return;
    }

    t_list *temp = *list;
    while (index - 1) {
        temp = temp -> next;
        index--;
        if (temp -> next = NULL) {
            mx_pop_back(list);
            return;
        }
    }
    t_list *temp2 = temp -> next;
    free(temp -> next);
    temp -> next -> next =  temp2;
}

