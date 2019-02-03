/*Implement using C++. Use classes for each. Make sure warning messages are printed whenever required. (For example: Popping out from an empty queue.)
Stacks using Linked List (Name for class: StackLL) (enqueue, pop, size, isEmpty, top)
Queues using Linked List (Name for class: QueueLL) (enqueue, dequeue, size, isEmpty, top)
Stacks using Arrays (Name for class: StackArr)
Queues using Arrays (Name for class: QueueArr)
*/

#include<iostream>
using namespace std;

class queueArr
	{
		public:
		int * front;
		int * end;
		int arr[1000];
		int arr2[1000];
		queueArr()
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
void queueArr :: enqueue(int value)
	{
		if(arr == NULL)
		arr[0] = value;
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
void queueArr :: dequeue()
	{
		if(arr == NULL)
			cout<< "No element in stack";
		else
			{
				int counter = 0;
				for(int i = 0; arr[i] == 0; i++)
				{counter++}
				for(int  i = 0; i != counter; i++)
					{
						arr[i] = arr[i+1];
					}
			}
	}
void queueArr :: size()
void queueArr :: isEmpty()
void queueArr :: frontD()
void queueArr :: endD()
void queueArr :: display()
