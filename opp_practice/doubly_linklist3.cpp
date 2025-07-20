#include <bits/stdc++.h>
#define blank NULL
using namespace std;

class node
{
public:
    int data;
    node *next;
    node *prev;

    node(int value)
    {
        data = value;
        next = blank;
        prev = blank;
    }
};

class doubly_list
{
public:
    node *root;
    int sz;

    doubly_list()
    {
        root = blank;
        sz = 0;
    }

    void insert_root(int value)
    {
        sz++;
        node *Newnode = new node(value);
        if (root == blank)
        {
            root = Newnode;
            return;
        }
        node *a = root;
        Newnode->next = a;
        a->prev = Newnode;
        root = Newnode;
    }

    void delete_root()
    {
        if (sz == 0)
        {
            cout << "List is Empty" << endl;
            return;
        }

        if (root == blank)
        {
            cout << "Empty" << endl;
            return;
        }
        node *a = root;
        node *b = root->next;
        delete a;

        if (b != blank)
        {
            b->prev = blank;
        }
        root = b;
        sz--;
    }

    void display()
    {
        node *a = root;
        while (a != blank)
        {
            cout << a->data << " ";
            a = a->next;
        }
        cout << endl;
    }

    void listsz()
    {
        cout << "list size is " << sz << endl;
    }
};

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    doubly_list dl;
    dl.insert_root(7);
    dl.insert_root(71);
    dl.listsz();
    // dl.insert_root(72);
    // dl.insert_root(73);
    // dl.insert_root(87);
    dl.display();

    dl.delete_root();
    dl.display();
    dl.listsz();

    return 0;
}