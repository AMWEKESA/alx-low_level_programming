#ifndef LIST_H
#define LIST_H

#include <stddef.h>

typedef struct list_l
{
	char *str;
	unsigned int len;
	struct list_l *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
void print_sent(void) __attribute__((constructor));

#endif
