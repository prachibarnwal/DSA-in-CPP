// HW
// add at a given position
//search a number in the linked list

#include<iostream>
using namespace std;
class node
{
	public:
	int data;
	node *next;
	node(int val)
	{
		data = val;
		next = NULL;
	}
};

class linkedlist
{
	node *head;
	public:
	linkedlist();
	~linkedlist();
	void addbeg(int val);
	void addend(int val);
	int delbeg();
	int delend();
	bool empty();
	void show();
	void showfront();
	int search(int val);
	void add_pos(int val, int p);

};

void linkedlist::add_pos(int val, int p)
{
	int cnt = -1;
	node *temp = head;
	node *ptr = new node(val);
	node *temp1;
	while(temp != NULL)
	{
		cnt++;
		if(cnt == p)
		{
			temp -> next = ptr;
			ptr = temp;
			cout<<"Added"<<endl;
			break;
		}
		temp = temp -> next;
	}
	delete ptr,temp,temp1;
	/*
	else
	{
		cout<<"Given Position Not Available !!"<<endl;
		cout<<"Adding the Element to the End "<<endl;
		addend(val);
	}
	temp -> next = head;
	head = temp;

	*/
}

int main()
{
	linkedlist l;
	int ch, num, p;
	bool c;
	do
	{
		cout<<endl<<endl<<endl;
		cout<<"******************************************** "<<endl;
		cout<<"Press 1 : Add at Begining "<<endl;
		cout<<"Press 2 : Add at End "<<endl;
		cout<<"Press 3 : Delete First Node "<<endl;
		cout<<"Press 4 : Delete Last Node "<<endl;
		cout<<"Press 5 : Display the LinkedList "<<endl;
		cout<<"Press 6 : Display the First Node "<<endl;
		cout<<"Press 7 : LinkedList is Empty or Not "<<endl;
		cout<<"Press 8 : Search for an Element "<<endl;
		cout<<"Press 9 : Add at a Particular Position "<<endl;
		cout<<"Press 15 : Exit "<<endl;
		cout<<"******************************************** "<<endl;
		cout<<"Enter Your Choice : ";
		cin>>ch;
		switch(ch)
		{
			case 9:
				cout<<"Enter the Element to be Inserted : ";
				cin>>num;
				cout<<"Enter the Position (starting from 0) : ";
				cin>>p;
				l.add_pos(num, p);
				break;
			case 8:
				cout<<"Enter the Element to be Searched : ";
				cin>>num;
				int n;
				n = l.search(num);
				if(n == -1)
				cout<<num<<" not Found ! "<<endl;
				else
				cout<<num<<" Found at Index : "<<n<<endl;
				break;
			case 5:
				l.show();
				break;
			case 6:
				l.showfront();
				break;
			case 7:
				if(l.empty())
					cout<<"Linked List is Empty !"<<endl;
				else
					cout<<"Linked List is Not Empty !"<<endl;
				break;
			case 1:
				cout<<"Enter the Element : ";
				cin>>num;
				l.addbeg(num);
				break;
			case 2:
				cout<<"Enter the Element : ";
				cin>>num;
				l.addend(num);
				break;
			case 3:
				num = l.delbeg();
				if(num == -1)
				cout<<"Linked List is Empty"<<endl;
				else
				cout<<"Front Node having : "<<num<<" Deleted !!"<<endl;
				break;
			case 4:
				num = l.delend();
				if(num == -1)
				cout<<"Linked List is Empty"<<endl;
				else
				cout<<"Last Node having : "<<num<<" Deleted !!"<<endl;
				break;
		}
	}while (ch != 15);
	return 0;
}

int linkedlist::search(int val)
{
	node *temp = head;
	int cnt = -1;
	if(empty())
	{
		cout<<"Linked List is Empty !"<<endl;
		return cnt;
	}
	else
	{
		while(temp != NULL)
		{
			cnt++;
			if(temp -> data == val)
				break;
			temp = temp -> next;
		}
		return cnt;
	}
}
int linkedlist::delend()
{
	int n;
	if(empty())
		return -1;
	else if(head -> next == NULL)
	{
		n = head -> data;
		delete head;
		head = NULL;
		return n;
	}
	else
	{
		node *temp = head;
		while(temp -> next -> next != NULL)
			temp = temp -> next;
		n = temp -> next -> data;
		delete temp -> next;
		temp -> next = NULL;
		return n;
	}
}
int linkedlist::delbeg()
{
	if(empty())
		return -1;
	int n;
	n = head -> data;
	node *temp = head;
	head = head -> next;
	delete temp;
	return n;
}
linkedlist::linkedlist()
{
	head = NULL;
}
linkedlist::~linkedlist()
{
	node *temp, *temp1;
	temp = head;
	while(temp != NULL)
	{
		temp1 = temp -> next;
		delete temp;
		temp = temp1;
	}
	head = NULL;
}
void linkedlist::showfront()
{
	if(empty())
	cout<<"Linked List is Empty"<<endl;
	else
	cout<<"First Node in the Linked List is : "<<head -> data<<endl;
}
void linkedlist::addend(int val)
{
	node *temp = new node(val);
	if(empty())
	{
		head = temp;
		return;
	}
	node *temp1 = head;
	while(temp1 -> next != NULL)
		temp1 = temp1 -> next;
	temp1 -> next = temp;
}
bool linkedlist::empty()
{
	if(head == NULL)
	return true;
	else
	return false;
}
void linkedlist::addbeg(int val)
{
	node *temp = new node(val);
	if(empty())
	{
		head = temp;
		return;
	}
	temp -> next = head;
	head = temp;
}
void linkedlist::show()
{
	if(empty())
	{
		cout<<"Linked List is Empty"<<endl;
		return;
	}
	node *temp = head;
	while(temp != NULL)
	{
		cout<<temp -> data<<" ";
		temp = temp -> next;
	}
	cout<<endl;
}