#include <bits/stdc++.h>
using namespace std;

class node
{

public:
    int data;
    node *next;

    node(int value)
    {

        this->data = value;
        this->next = NULL;
    }
};

class linked_list
{
public:
    node *head;

    linked_list()
    {
        head = NULL;
    }
/*
    node *create_new_node(int value) // it's a function that will return a node
    {
        node *newnode = new node;
        newnode->data = value;
        newnode->next = NULL;
        return newnode;
    }
*/
    void insert_at_head(int value)
    {
        node *a = new node(value);

        if (head == NULL)
        {
            head = a;
            return;
        }
        // if head is not equal to NULL
        a->next = head;
        head = a;
    }

    void travarse()
    {
        node *a = head;
        while(a!=NULL)
        {
            cout<<a->data<<" ";
            a = a->next;
        }
        cout<<endl;
    }
};

int main()
{
    // cout<<"hi";
/*
    node *a = new node(10);
    node *b = new node(20);
    node *c = new node(30);
    node *d = new node(40);

    a->next = b;
    b->next = c;
    c->next = d;

    cout << a->data << " " << a->next->data << " " << a->next->next->data << " " << a->next->next->next->data;
    //    cout<<" hi";

*/
    linked_list l;
/*
    l.travarse();
    l.insert_at_head(50);
    l.travarse();
    l.insert_at_head(40);
    l.travarse();
    l.insert_at_head(30);
    l.travarse();
    l.insert_at_head(20);
    l.travarse();
    l.insert_at_head(10);
    l.travarse();
    */
   l.insert_at_head(100);
   l.travarse();
   l.insert_at_head(90);
   l.travarse();
   l.insert_at_head(80);
   l.travarse();
   l.insert_at_head(70);
   l.travarse();
   l.insert_at_head(60);
   l.travarse();
   l.insert_at_head(50);
   l.travarse();
   l.insert_at_head(40);
   l.travarse();
   l.insert_at_head(30);
   l.travarse();
   l.insert_at_head(20);
   l.travarse();
   l.insert_at_head(10);
   l.travarse();
    return 0;
}
