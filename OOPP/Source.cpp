#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include "List.h"

int main() {
	setlocale(LC_ALL, "Russian");

	List list;
	list.AddHead(10);
	list.AddTail(20);
	list.AddTail(30);
	list.AddTail(40);
	list.AddTail(50);
	list.ShowListfromHead();
	
	// std::cout << "\n\n";
	// list.ShowListfromTail();
	
	std::cout << "\n";

	list.DeleteElement(2);
	list.ShowListfromHead();

	return {};
}