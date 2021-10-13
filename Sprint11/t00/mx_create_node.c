#include "list.h"
t_list *mx_create_node(void *data) {
    t_list *lst = (t_list*)malloc(sizeof(t_list));
    lst -> next =  NULL;
    lst -> data = data;
    return lst;
}

