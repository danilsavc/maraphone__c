#include "list.h"

void mx_push_front(t_list **list, void *data) {
    if (!*list) {
        *list = mx_create_node(data);
        return;
    }
    t_list *lk  = mx_create_node(data);
    lk -> next = *list;
    *list = lk;
}

