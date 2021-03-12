#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

struct node
{
	int item;
	struct node *prev;
	struct node *next;
};

typedef struct node Node;

//无法处理环形链表
bool deleteNode(Node *head, Node *p)
{
	if (head == NULL || p == NULL)
	{
		fprintf(stderr, "NULL POINT Excepiton");
		return false;
	}

	Node *cur = head;
	bool found = false;

	while (cur != NULL)
	{
		if (cur->item == p->item)
		{
			cur->prev->next = cur->next;
			cur->next->prev = cur->prev;
			free(cur);
			found = true;
		}

		cur = cur->next;
	}

	if (found)
	{
		return true;
	}
	else
	{
		return false;
	}
}
