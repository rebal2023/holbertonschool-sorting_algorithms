#include "sort.h"

/**
* swap_nodes - function that swap nodes in a doubly linked list
* @header: header pointer
* @node_one: first node
* @node_two: second node
*/
void swap_nodes(listint_t **header, listint_t **node_one, listint_t *node_two)
{
(*node_one)->next = node_two->next;
if (node_two->next != NULL)
node_two->next->prev = *node_one;
node_two->prev = (*node_one)->prev;
node_two->next = *node_one;
if ((*node_one)->prev != NULL)
(*node_one)->prev->next = node_two;
else
*header = node_two;
(*node_one)->prev = node_two;
*node_one = node_two->prev;
}

/**
* insertion_sort_list - sorts doubly linked list of int in ascending order
* @list: head node of the linked list
*/
void insertion_sort_list(listint_t **list)
{
listint_t *i, *in_node, *temp;

if (list == NULL || *list == NULL || (*list)->next == NULL)
return;

for (i = (*list)->next; i != NULL; i = temp)
{
temp = i->next;
in_node = i->prev;
while (in_node != NULL && i->n < in_node->n)
{
swap_nodes(list, &in_node, i);
print_list((const listint_t *)*list);
}
}
}
