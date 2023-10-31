Untitled document
0X00-Python-hello world


cd repo: alx-higher_level_programming

cd directory: 0X00-Python-hello world

echo "0X00-Python-hello world"  > README.md


vi lists.h


#ifndef LISTS_H

#define LISTS_H


#include <stdlib.h>


/**

 * struct listint_s - singly linked list

 * @n: integer

 * @next: points to the next node

 *

 * Description: singly linked list node structure

 * for Holberton project

 */

typedef struct listint_s

{

        int n;

        struct listint_s *next;

} listint_t;


size_t print_listint(const listint_t *h);

listint_t *add_nodeint(listint_t **head, const int n);

void free_listint(listint_t *head);

int check_cycle(listint_t *list);


#endif /* LISTS_H */


