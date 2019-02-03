/*Implement using C++. Use classes for each. Make sure warning messages are printed whenever required. (For example: Popping out from an empty queue.)
Stacks using Linked List (Name for class: StackLL) (enqueue, pop, size, isEmpty, top)
Queues using Linked List (Name for class: QueueLL) (enqueue, dequeue, size, isEmpty, top)
Stacks using Arrays (Name for class: StackArr)
Queues using Arrays (Name for class: QueueArr)
*/

#include<iostream>
using namespace std; 
class stackArr
	{
		public:
		int arr[1000];
		int arr2[1000];
		void push(int value);
		void pop ();
		void size ();
		void isEmpty();
		void top();
		void display();
	};
void stackArr :: push(int value)
	{
		if (arr == NULL)
			{
				arr[0] = value;
			}
		else
			{
				for(int i =0; i<999; i++)
				{
					arr2[i] = arr[i];
				}
				for(int i  = 0; i<999; i++)
				{
					arr[i+1] = arr2[i];
				}
				arr[0] = value;
			}
			
	}

void stackArr :: pop()
	{
		if(arr == NULL)
			cout<< "No element in stack";
		else
		{
			for(int  i = 0; i < 999; i++)
				{
					arr[i] = arr[i+1];
				}
		}
	}
void stackArr :: size()
	{
		int i = 0;
		for(; arr[i] != 0; i++)
		cout << arr[i];
	}
void stackArr :: isEmpty()
	{
		if (arr == NULL)
		cout<< "stack is empty "<<endl;
		else
		cout<< "stack is not empty"<<endl;
	}
void stackArr :: top()
	{
		cout<< arr[0]<<endl;
	}
void stackArr :: display()
	{
		for(int i = 0; arr[i] != 0 ; i++)
		{
			cout<< arr[i];
		}
		cout<<endl;
	}
	
int main()
	{
		stackArr  s;
		s.push(1);
		s.push(2);
		s.push(3);
		s.display();
		s.top();
		s.isEmpty();
		s.pop();
		s.display();
	}
