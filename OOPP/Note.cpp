#include "Note.h"
#include <iostream>

Node::Node(int data) : _data(data), next(nullptr), prev(nullptr){}

int Node::GetData()
{
	return _data;
}

Node::~Node()
{
	// printf("Node deleted\n");
	std::cout << "Node deleted" << "\n";
}