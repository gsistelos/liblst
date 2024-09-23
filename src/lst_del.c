#include "liblst.h"

#include <stdlib.h>

void lst_del(t_lst *lst, void (*free_func)(void *)) {
    lst_clear(lst, free_func);
    free(lst);
}
