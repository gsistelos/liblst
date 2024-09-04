#include "liblst.h"

#include <criterion/criterion.h>

// assert the node is created and the head didnt change
Test(lst_push_back_test, push_back) {
    t_lst lst;
    lst_init(&lst);

    char *str = strdup("Hello, world!");

    lst_push_back(&lst, str);
    cr_assert_str_eq(lst.tail->data, str);
    cr_assert_str_eq(lst.head->data, str);

    char *str2 = strdup("Hello, again!");

    lst_push_back(&lst, str2);
    cr_assert_str_eq(lst.tail->data, str2);
    cr_assert_str_eq(lst.head->data, str);

    char *str3 = strdup("Hello, world, again!");

    lst_push_back(&lst, str3);
    cr_assert_str_eq(lst.tail->data, str3);
    cr_assert_str_eq(lst.head->next->data, str2);
    cr_assert_str_eq(lst.head->data, str);
}
