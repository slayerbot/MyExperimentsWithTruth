#pragma once

class MyLinkList {

public:

	struct Node {
		int Data;
		Node *next;
		Node(int data, Node *node) :Data(data), next(node) {}
	};

	Node *head;
	MyLinkList(): head(nullptr) {}
	~MyLinkList()
	{

	}
	void AppendNode(Node &head, Node &node);
	void InsertNode(Node *head, int pos, Node *node);
	void DeleteNode(Node *head, int pos);

	void ReverseList(Node *head);
	void FindMergePoint(Node *list1, Node *list2);

	int GetListLen(Node *head);
	void PrintList(Node *head);
};