/*Implement using C++. Use classes for each. Make sure warning messages are printed whenever required. (For example: Popping out from an empty queue.)
Stacks using Linked List (Name for class: StackLL) (push, pop, size, isEmpty, top)
Queues using Linked List (Name for class: QueueLL) (enqueue, dequeue, size, isEmpty, top)
Stacks using Arrays (Name for class: StackArr)
Queues using Arrays (Name for class: QueueArr)
*/
#include<iostream>
#include"list.cpp"
using namespace std;

class StackLL 
	{
		public:
		linklist l1;
		element * top;
		StackLL()
			{
				top = NULL;
			}
		void push(int value);
		void pop();
		int size();
		bool isEmpty();
		void Ftop();
		void display();
	};
	
void StackLL :: push(int value)
	{
		l1.insertat(value, 1);
		top = l1.head;
	}
void StackLL :: pop()
	{
		if(l1.head == NULL)
		cout<< "No element are present";
		l1.deleteat(1);
	}
int StackLL :: size()
	{
		l1.countitems();
	}
bool StackLL :: isEmpty()
	{
		if (l1.head == NULL)
		return true;
		else return false;
	}
void StackLL :: Ftop()
	{
		cout<< top -> data;
	}
void StackLL :: display()
	{
		l1.display();
	}
	
int main()
	{
		StackLL s1;
		s1.push(1);
		s1.push(2);
		s1.push(3);
		s1.push(4);
		s1.push(5);
		s1.push(6);
		s1.push(7);
		s1.push(8);
		s1.display();
		s1.pop();
		s1.display();
		s1.pop();
		s1.display();
		cout<<s1.size();
		s1.display();
		cout<<s1.isEmpty();
		s1.display();
	}	

	
