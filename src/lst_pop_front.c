#include "liblst.h"
#include <stdlib.h>

void lst_pop_front(t_lst *lst, void (*free_func)(void *)) {
    t_node *node = lst->head;

    if (!node->next) {
        lst->head = NULL;
        lst->tail = NULL;
    } else {
        lst->head = node->next;
    }

    free_func(node->data);
    free(node);
}
