#ifndef LIST_H_
#define LIST_H_

struct Node
{	
	int value;
	Node* previous, *next;	
};

class List   
{
	Node *begin, *end; 
public:
	List() ;
	~List(); 
	const void showFromStart() const;
	const void showFromEnd() const;
	const void addValue(const int& value); 
};
#endif // !LIST_H_
