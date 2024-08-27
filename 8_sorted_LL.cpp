#include<iostream>
using namespace std;
class node
{
    int data;
    node *next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};
class LinkedList
{
    node *head;
    public:
    LinkedList()
    {
        head = NULL;
    }
    ~LinkedList()
    {
        node *temp;
        node *temp1;
        temp = head;
        while(temp != NULL)
        {
            temp1 = temp -> next;
            delete temp;
            temp = temp1;
        }
        head = NULL;
    }
};
int main()
{
    return 0;
}