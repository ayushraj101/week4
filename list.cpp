#include<iostream>
using namespace std;

class element
	{
		public:
		int data;
		element * next;
		element()
			{
				next = NULL;
			}
	};

class linklist
	{
		public:
		element * head;
		element * tail;
		linklist ()
			{
				head = NULL;
				tail = NULL;
			}
		void insert(int value);
		void insertat(int value , int posi);
		void delet ();
		void deleteat(int posi);
		int countitems();
		void display();
	};
	
void linklist :: insert(int value)
	{
		element * temp = new element;
		temp -> data = value;
		if (head == NULL)
		 {
			 head = temp;
		 }
		else
			{
				tail -> next = temp;
			}
		tail = temp;
	}
	
void linklist :: insertat(int value, int posi)
	{
		element * temp = new element;
		temp -> data = value;
		if (head == NULL)
			{
				head = temp;
				tail = temp;
			}
			
		else if (countitems() < posi)
			{
				cout<< " It does not have have that many element ";
			}
		else if (posi == 1)
			{
				element * temp1 = head;
				head = temp;
				head -> next = temp1;
			}
		
		else 
			{
				element * current = head;
				int counter = 1;
				while(counter != posi)
					{
						counter++;
				 		current = current -> next;
				 	}
				temp->next = current->next;
				current -> next = temp;
			}
	}
	
void linklist :: delet ()
	{
		if (head == NULL)
		cout<< "Nothig to delete";
		else
			{	
				element * current = head;
				while (current -> next != tail)
					{
						current = current -> next;
					}
				current -> next = NULL;
				delete tail;
				tail = current;
			}
	}
	
void linklist :: deleteat(int posi)
	{
		if(countitems() < posi)
			{
				cout<< "List does not have that many elements"<<endl;
			}
		else if (posi == 1)
			{
				element * temp = head;
				head =  head -> next;
				delete temp;
			}
		else
			{
				element * current = head;
				int counter = 0;
				while(counter != posi)
					{
						counter++;
				 		current = current -> next;
				 	}
				 element * temp = current -> next;
				 current -> next = temp -> next;
				 delete temp;
			}
	}
	
int linklist :: countitems()
	{
		element * current = head;
		int counter = 1; 
		for (; current->next != NULL;counter++)
		{
			current = current -> next;
		}
		return counter;
	}
	
void linklist :: display()
	{
		if (head == NULL )
		cout<< " nothing to display ";
		else 
			{
				element * current = head;
				while (current != NULL)
					{
						cout<< current -> data << " -> ";
						current = current -> next;
					}
			}
		cout<<endl;
	}
	
/*int main ()
	{
		linklist l1;
		l1.insertat(35, 1);
		l1.insertat(35, 1);
		l1.display();
		l1.insert(1);
		l1.insert(2);
		l1.insert(3);
		l1.insert(4);
		l1.insert(5);
		l1.insert(6);
		l1.display();
		l1.delet();
		l1.delet();
		l1.delet();
		l1.display();
	}*/
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
		
