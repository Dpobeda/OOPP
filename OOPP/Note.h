#pragma once

class Node
{
private:
	int _data;
public:
	Node(int deta);
	~Node();
	Node *next;
	Node *prev;

	int GetData();
};