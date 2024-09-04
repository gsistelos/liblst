#include "liblst.h"

#include <criterion/criterion.h>

// assert the node is created as head and other nodes didnt change position
Test(lst_push_front_test, push_front) {
    t_lst lst;
    lst_init(&lst);

    char *str = strdup("Hello, world!");
    char *str2 = strdup("Hello, again!");
    char *str3 = strdup("Hello, world, again!");

    lst_push_front(&lst, str);
    cr_assert_str_eq(lst.head->data, str);
    cr_assert_str_eq(lst.tail->data, str);

    lst_push_front(&lst, str2);
    cr_assert_str_eq(lst.head->data, str2);
    cr_assert_str_eq(lst.tail->data, str);

    lst_push_front(&lst, str3);
    cr_assert_str_eq(lst.head->data, str3);
    cr_assert_str_eq(lst.head->next->data, str2);
    cr_assert_str_eq(lst.tail->data, str);
}
