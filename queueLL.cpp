/*Implement using C++. Use classes for each. Make sure warning messages are printed whenever required. (For example: Popping out from an empty queue.)
Stacks using Linked List (Name for class: StackLL) (enqueue, pop, size, isEmpty, top)
Queues using Linked List (Name for class: QueueLL) (enqueue, dequeue, size, isEmpty, top)
Stacks using Arrays (Name for class: StackArr)
Queues using Arrays (Name for class: QueueArr)
*/

#include<iostream>
#include"list.cpp"
using namespace std;

class queueLL
	{
		public:
		element * front;
		element * end;
		linklist l1;
		queueLL()
			{
				front = NULL;
				end = NULL;
			}
		void enqueue(int value);
		void dequeue();
		int size();
		void isEmpty();
		void frontD();
		void endD();
		void display();
	};
void queueLL :: enqueue(int value)
	{
		l1.insertat(value, 1);
		front = l1.tail;
		end = l1.tail;
	}
void queueLL :: dequeue()
	{
		if(l1.head == NULL)
		cout<< "No element are present";
		l1.delet();
		front = l1.tail;
		end = l1.head;
	}
int queueLL :: size()
	{
		l1.countitems();
		
	}
void queueLL :: isEmpty()
	{
		if (l1.head == NULL)
		cout<<  true<<endl;
		else cout<< false<<endl;
	}
void queueLL :: frontD()
	{
		cout<< front -> data <<endl;
	}
void queueLL :: endD()
	{
		cout<< end -> data <<endl;;
	}
void queueLL :: display()
	{
		l1.display();
	}
	
int main()
	{
		queueLL q1;
		q1.enqueue(1);
		q1.enqueue(2);
		q1.enqueue(3);
		q1.enqueue(4);
		q1.display();
		q1.dequeue();
		q1.display();
		cout<<q1.size()<<endl;
		q1.isEmpty();
		q1.frontD();
		q1.endD();
	}




