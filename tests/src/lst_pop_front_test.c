#include "liblst.h"

#include <criterion/criterion.h>

// assert the node is removed and the tail didnt change
Test(lst_pop_front_test, pop_front) {
    t_lst lst;
    lst_init(&lst);

    char *str = strdup("Hello, world!");
    char *str2 = strdup("Hello, again!");
    char *str3 = strdup("Hello, world, again!");

    lst_push_back(&lst, str);
    lst_push_back(&lst, str2);
    lst_push_back(&lst, str3);

    lst_pop_front(&lst, free);
    cr_assert_str_eq(lst.head->data, str2);
    cr_assert_str_eq(lst.tail->data, str3);

    lst_pop_front(&lst, free);
    cr_assert_str_eq(lst.head->data, str3);
    cr_assert_str_eq(lst.tail->data, str3);

    lst_pop_front(&lst, free);
    cr_assert_eq(lst.head, NULL);
    cr_assert_eq(lst.tail, NULL);
}
