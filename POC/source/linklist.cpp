#include "stdafx.h"
#include "linklist.h"

void MyLinkList::PrintList(Node *head) 
{
	Node *tmp = head;
	while (tmp)
	{
		cout << tmp->Data << "->";
		tmp = tmp->next;
	}
	cout << endl;
	return;
}

int MyLinkList::GetListLen(Node *head)
{
	Node *tmp = head;
	int len = 0;
	while (tmp)
	{
		len++;
		tmp = tmp->next;
	}
	return len;
}

void MyLinkList::AppendNode(Node &head, Node &node)
{
	if (head.Data < 1 )
	{
		memcpy(&head, &node, sizeof(Node));
		head.next = NULL;
	}
	else
	{
		memcpy(tmp->next, node, sizeof(Node));
		tmp->next = NULL;
	}
}

void MyLinkList::InsertNode(Node * head, int pos, Node * node)
{
}

void MyLinkList::DeleteNode(Node * head, int pos)
{
}

void MyLinkList::ReverseList(Node * head)
{
}

void MyLinkList::FindMergePoint(Node * list1, Node * list2)
{
}
