#include "liblst.h"

#include <stdlib.h>

int lst_push_front(t_lst *lst, void *data) {
    t_node *node = malloc(sizeof(t_node));
    if (!node)
        return -1;

    node->data = data;

    if (!lst->head) {
        node->next = NULL;
        lst->tail = node;
    } else {
        node->next = lst->head;
    }

    lst->head = node;

    return 0;
}
