#ifndef LST_H
#define LST_H

#include <stddef.h>

// the structs should not be used manually,
// instead use the provided functions to interact with it

typedef struct s_node {
    void *data;
    struct s_node *next;
} t_node;

typedef struct s_lst {
    t_node *head;
    t_node *tail;
    size_t size;
} t_lst;

// allocates a new lst
t_lst *lst_new(void);

// initializes lst head and tail to null
void lst_init(t_lst *lst);

// pushes a new node containing data to the front of the list
// returns 0 on success, -1 on failure
int lst_push_front(t_lst *lst, void *data);

// pushes a new node containing data to the back of the list
// returns 0 on success, -1 on failure
int lst_push_back(t_lst *lst, void *data);

// pops a node from the list, using the given free_func function
void lst_pop_front(t_lst *lst, void (*free_func)(void *));

// pops all nodes from the list, using the given free_func function
void lst_clear(t_lst *lst, void (*free_func)(void *));

// clears and frees the lst
void lst_del(t_lst *lst, void (*free_func)(void *));

#endif // LST_H
