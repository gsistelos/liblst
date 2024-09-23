#include "liblst.h"

#include <stdlib.h>

void lst_clear(t_lst *lst, void (*free_func)(void *)) {
    t_node *node = lst->head;

    while (node) {
        t_node *next = node->next;

        free_func(node->data);
        free(node);

        node = next;
    }

    lst->head = NULL;
    lst->tail = NULL;
    lst->size = 0;
}
