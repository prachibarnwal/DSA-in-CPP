// HW
// add at a given position
//search a number in the linked list

#include<iostream>
using namespace std;
class Node
{
	public:
		int data;
		Node* next;
		Node(int n)
		{
			data = n;
			next = NULL;
		}
};
class Linked_List
{
	Node* head;
	public:
		Linked_List()
		{
			head = NULL;
		}
		~Linked_List();
		void add_at_beg(int val);
		void add_at_end(int val);
		void show();
};


int main()
{
	Linked_List lst;
	int ch, num;
	do
	{
		cout<<"------------------------------------"<<endl;
		cout<<"Press 1 : Add at Front"<<endl;
		cout<<"Press 2 : Add at End"<<endl;
		cout<<"Press 3 :                    "<<endl;
		cout<<"Press 9 : Show the Linked List"<<endl;
		cout<<"Press 10 : Exit"<<endl;
		cout<<"------------------------------------"<<endl;
		cout<<"Enter Your Choice : ";
		cin>>ch;
		switch(ch)
		{
			case 1:
				cout<<"Enter the Number : ";
				cin>>num;
				lst.add_at_beg(num);
				break;
			case 2:
				cout<<"Enter the Number : ";
				cin>>num;
				lst.add_at_end(num);
				break;
			case 9:
				cout<<"Current Linked List is : "<<endl;
				lst.show();
				break;
		}
	}while(ch != 10);
	
	return 0;
}

Linked_List::~Linked_List()
{
	Node* temp;
	Node* next;
	while(temp != NULL)
	{
		next = temp -> next;
		delete temp;
		temp = next;
	}
	head = NULL;
}
void Linked_List::add_at_beg(int val)
{
	Node* temp;
	temp = new Node(val);
	if(head == NULL)
		head = temp;
	else
	{
		temp -> next = head;
		head = temp;
	}
}
void Linked_List::add_at_end(int val)
{
	Node* temp;
	Node* temp1;
	temp = new Node(val);
	if(head == NULL)
		head = temp;
	else
	{
		temp1 = head;
		while(temp1 -> next != NULL)
			temp1 = temp1 -> next;
		temp1 -> next = temp;
	}
}
void Linked_List::show()
{
	Node* temp;
	temp = head;
	while(temp != NULL)
	{
		cout<<temp->data<<"  ";
		temp = temp -> next;
	}
	cout<<endl;
}
