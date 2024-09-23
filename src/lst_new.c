#include "liblst.h"

#include <stdlib.h>

t_lst *lst_new(void) {
    t_lst *lst = malloc(sizeof(t_lst));
    if (!lst)
        return NULL;

    lst_init(lst);

    return lst;
}
