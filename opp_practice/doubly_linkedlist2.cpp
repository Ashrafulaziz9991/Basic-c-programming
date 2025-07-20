#include <bits/stdc++.h>
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
        next = NULL;
        prev = NULL;
    }
};

class doubly_link
{

public:
    node *root;
    int sz;

    doubly_link()
    {
        root = NULL;
        sz = 0;
    }

    void insert_root(int value)
    {
        sz++;
        node *a = new node(value);
        if (root == NULL)
        {
            root = a;
            return;
        }
        a->next = root;
        root = a;
    }

    void insert_after_value(int index, int data)
    {
        if (index > sz || index < 0)
        {
            /* code */
            return;
        }

        if (root == NULL)
        {
            return;
        }

        sz++;
        node *a = root;
        int current_index = 0;
        while (current_index != index - 1)
        {
            /* code */
            a = a->next;
            current_index++;
        }
        node *newnode = new node(data);
        newnode->next = a->next;
        newnode->prev = a;
        node *b = a->next;
        // newnode = b->prev;
        b->prev = newnode;
        // b = newnode;
        a->next = newnode;
    }

    // void Swap(int x, int y)
    // {
    //     node *b = root;
    //     int current_index = 0;

    //     while (current_index != x-1 & current_index != y-1)
    //     {
    //         /* code */
    //         b = b->next;
    //         current_index++;
    //     }
    //     node *a = b->prev;
    //     node *c = b->next;

    //     while (current_index != y-1)
    //     {
    //         /* code */
    //         b = b->next;
    //         current_index++;
    //     }
    //     b->prev = b->next;
    //     b->next = b->prev;
    //     a->next = b;
    //     c->prev = b;
    // }

    // node *getNodeAt(int x)
    // {
    //     node *temp = root;
    //     int current = 0;
    //     while (current != x-1)
    //     {
    //         /* code */
    //         temp = temp->next;
    //         current++;
    //     }
    //     return temp;
    // }

    node *getNodeAt(int x)
    {
        if (x < 0)
        {
            // Negative indices are invalid
            //cerr << "Error: Index cannot be negative." << endl;
            return NULL;
        }

        node *temp = root;
        int current = 0;

        while (temp != NULL && current != x)
        {
            temp = temp->next;
            current++;
        }

        if (temp == NULL)
        {
            // Index out of bounds
            //cerr << "Error: Index out of bounds." << endl;
            return NULL;
        }

        return temp;
    }

    void swap(int i, int j)
    {
        if (i == j)
            return;
        node *nodeI = getNodeAt(i);
        node *nodeJ = getNodeAt(j);
        if (!nodeI || !nodeJ)
            return;
        swap(nodeI->data, nodeJ->data);
    }

    void traverse()
    {
        node *a = root;
        while (a != NULL)
        {
            cout << a->data << " ";
            a = a->next;
        }
        cout << endl;
    }
};

int main()
{
    // ios_base::sync_with_stdio(0);
    // cin.tie(0);
    doubly_link dl;

    dl.insert_root(978);
    dl.insert_root(278);
    dl.insert_root(178);
    dl.insert_root(786);
    dl.insert_root(778);
    dl.insert_root(708);
    dl.insert_root(608);
    dl.insert_root(70);
    dl.insert_root(788);
    dl.insert_root(6089);
    dl.insert_root(10070);
    dl.traverse();

    dl.insert_after_value(4, 9);
    dl.traverse();

    dl.swap(4, 7);
    dl.traverse();
    return 0;
}

/*  v             wb*/