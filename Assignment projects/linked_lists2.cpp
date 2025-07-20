#include<bits/stdc++.h>
using namespace std;
//class for Node
class node
{
public:

    int data;
    node * next;
};

class Linked_list
{

public:

    node * head;

    Linked_list()
    {
        head = NULL;
    }
    node*create_new_node(int value){

    }

    int getSize(){

    }

    int getValue(index){

    }

    void printReverse(){

    }

    void swapFirst(){

    }

int main()
{
    LinkedList l;
    cout<<l.getSize()<<"\n";
    l.InsertAtHead(5);
    cout<<l.getSize()<<"\n";
    l.InsertAtHead(6);
    l.InsertAtHead(30);
    cout<<l.getSize()<<"\n";
    l.InsertAtHead(20);
    l.InsertAtHead(30);

    cout<<l.getValue(2)<<"\n";

    cout<<l.getValue(6)<<"\n";

    l.printReverse();
    l.Traverse();
    l.swapFirst();
    l.Traverse();
    l.printReverse();

    return 0;
}
