#include "liblst.h"
#include <stdlib.h>

int lst_push_back(t_lst *lst, void *data) {
    t_node *node = malloc(sizeof(t_node));
    if (!node)
        return -1;

    node->data = data;
    node->next = NULL;

    if (!lst->head)
        lst->head = node;

    lst->tail = node;

    return 0;
}
