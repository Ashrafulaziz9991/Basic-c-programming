#include<bits/stdc++.h>
using namespace std;

class node
{
public:

    int data;
    node * nxt;
};

class linked_list
{
public:
    node * head;

    linked_list()
    {
        head = NULL;
    }

    node* create_new_node(int value)//it's a function that will return a node
    {
        node *newnode = new node;
        newnode -> data = value;
        newnode -> nxt = NULL;
        return newnode;
    }
    //insert a new value at head
    void insert_at_head(int value)
    {
        node *a = create_new_node(value);

        if(head == NULL)
        {
            head = a;
            return;
        }
        //if head is not equal to NULL
        a -> nxt = head;
        head = a;

    }
    //print the linked_list
    void travarse()
    {
        node *a = head;
        while(a!=NULL)
        {
            cout<<a->data<<" ";
            a = a->nxt;
        }
        cout<<endl;
    }
    //search for a single value
    int search_distinct_value(int value)
    {
        node* a = head;
        int index = 0;

        while(a!=NULL)
        {
            if(a->data == value)
            {
                return index;
            }
            a = a->nxt;
            index++;
        }
        return -1;
    }
    //search all possible occurence
    void search_all_value(int value)
    {
        node* a = head;
        int index = 0;

        while(a!=NULL)
        {
            if(a->data == value)
            {
                cout<<value<<" is founded at index "<<index<<endl;
            }
            a = a->nxt;
            index++;
        }
    }
};

int main()
{
    linked_list l;
    l.travarse();
    l.insert_at_head(30);
    l.travarse();
    l.insert_at_head(30);
    l.travarse();
    l.insert_at_head(20);
    l.travarse();
    l.insert_at_head(10);
    l.travarse();


    cout<<"5 is found at "<<l.search_distinct_value(5)<<"\n";
    cout<<"10 is found at "<<l.search_distinct_value(10)<<"\n";
    cout<<"30 is found at "<<l.search_distinct_value(30)<<"\n";
//    l.search_distinct_value();
//    l.search_distinct_value();

    l.search_all_value(30);
    //cout<<"Hello";
    return 0;
}