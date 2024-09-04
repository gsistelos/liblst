#include "liblst.h"

#include <criterion/criterion.h>

Test(lst_init_test, init) {
    t_lst lst;
    lst_init(&lst);

    cr_assert_eq(lst.head, NULL);
    cr_assert_eq(lst.tail, NULL);
}
