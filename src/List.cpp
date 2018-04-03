#include "stdafx.h"
#include "List.h"

List::List():begin(0),end(0) 
{
}

List::~List()
{ while (begin) 
	{
	end = begin->next; 
	delete begin; 
	begin = end; 
	}
}

const void List::showFromStart() const
{
	Node *temp = begin; 
	while (temp != NULL) 
	{
		std::cout << temp->value << "\t"; 
		temp = temp->next; 
	}
	std::cout << "\n";
}

const void List::showFromEnd() const
{
	Node *temp = end;
	while (temp != NULL) 
	{
		std::cout << temp->value << "\t"; 
		temp = temp->previous; 
	}
	std::cout << "\n";
}

const void List::addValue(const int & value)
{
	Node *temp = new Node; 
	temp->next = NULL;  
	temp->value = value;

	if (begin != NULL) 
	{
		temp->previous = end; 
		end->next = temp; 
		end = temp; 
	}
	else 
	{
		temp->previous = NULL; 
		begin = end = temp; 
	}
}
