#ifndef LISTS_H
#define LISTS_H
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stddef.h>

typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;

size_t print_dlistint(const dlistint_t *h);
dlistint_t *add_dnodeint(dlistint_t **head, const int n);
size_t dlistint_len(const dlistint_t *h);
#endif  /* LISTS_H */
