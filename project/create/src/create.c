#include "../../include/head.h"

void create(addrLink *head)
{
    is_malloc(head);

    (*head)->next = *head;
}
