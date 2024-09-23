#include "liblst.h"

#include <criterion/criterion.h>

Test(lst_clear_test, clear) {
    t_lst lst;
    lst_init(&lst);

    lst_push_back(&lst, strdup("Hello, world!"));
    lst_push_back(&lst, strdup("Hello, again!"));
    lst_push_back(&lst, strdup("Hello, world, again!"));

    lst_clear(&lst, free);

    cr_assert_eq(lst.head, NULL);
    cr_assert_eq(lst.tail, NULL);
    cr_assert_eq(lst.size, 0);
}
