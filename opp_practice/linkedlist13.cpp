#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int x;
    node *next;

    node(int value)
    {
        x = value;
        next = NULL;
    }
};

class linkedlist
{
public:

    linkedlist()
    {
        root = NULL;
        sz = 0;
    }

    node *root;
    int sz = 0;

    void insertAtroot(int value)
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
        // count+=a;
    }

    void traverse()
    {
        node *a = root;
        while (a != NULL)
        {
            cout << a->x << " ";
            a = a->next;
        }
        cout << endl;
    }

    void Reverse(node *a)
    {
        if (a == NULL)
        {
            //cout<<"value does not exist"<<endl;
            return;
        }
        
        Reverse(a->next);
        cout<<a->x<<" ";
    }

    void printReverse()
    {
        cout<<"Reverse way is : ";
        Reverse(root);
        cout<<endl;
    }

    int search_any_value(int value)
    {
        node *a = root;
        int index = 0;
        while (a != NULL)
        {
            if (a->x == value)
            {
                return index;
            }
            a = a->next;
            index++;
        }
        return -1;
    }

    void search_all_value(int value)
    {
        node *a = root;
        int index = 0;
        while (a != NULL)
        {
            if (a->x == value)
            {
                cout << value << " is found at index " << index << endl;
                return;
            }
            a = a->next;
            index++;
        }
        cout << value << " is not found in the list" << endl;
    }

    void insert_any_index(int index, int data)
    {
        if (index < 0 || index > sz)
        {
            cout<<"index is not found"<<endl;
            return;
        }
        
        if (index == 0)
        {
            insertAtroot(data);
            return;    
        }
        
        sz++;
        node *a = root;
        int current_index = 0;

        while (current_index != index-1)
        {
            a = a->next;
            current_index++;
        }

        node *newnode = new node(data);
        newnode->next = a->next;
        a->next = newnode;
    }

    void insert_after_value(int value, int data)
    {
        sz++;
        node *a = root;
        int current_index = 0;
        while (current_index != sz-1)
        {
            if (a->x == value)
            {
                break;
            }
            a = a->next;
        }

        if (a == NULL)
        {
            cout<<"The value Doesn't exist"<<endl;
            return;
        }

        node *b = new node(data);
        b->next = a->next;
        a->next = b;
    }

    void Swap(int i, int j)
    {
        node *a = root;
        int current_index = 0;
        while (current_index != i)
        {
            /* code */
            if (a->next == i)
            {
                break;
            }
            a = a->next;
        }
        
    }

    void delete_root()
    {
        if (root == NULL)
        {
            cout<<"Empty"<<endl;
            return;
        }
        sz--;
        node *a = root;
        root = a->next;
        delete a;
    }

    void delete_any_index(int index)
    {
        if(index < 0 || index > sz-1)
        {
            cout<<"index not found"<<endl;
            return;
        }

        if(index == 0)
        {
            delete_root();
            return;
        }
        
        sz--;
        node *a = root;
        int current_index = 0;
        while (current_index != index-1)
        {
            a = a->next;
            current_index++;
        }

        node *b = a->next;
        a->next = b->next;
        //a->next = a->next->next;
        delete b;
        
    }

    int getsize()
    {
        return sz;
    }

    int getLast()
    {
        if (root == NULL)
        {
            return -1;
        }

        node *a = root;
        int current_index = 0;
        while (current_index != getsize() - 1)
        {
            /* code */
            a = a->next;
            current_index++;
        }
        return a->x;
    }

    double getsum()
    {
        double counter = 0;
        node *a = root;
        while (a != NULL)
        {
            counter += a->x;
            a = a->next;
        }
        return counter;
    }

    double getAverage()
    {
        return getsum()/sz;
    }

};

int main()
{
    // ios_base::sync_with_stdio(0);
    // cin.tie(0);

    linkedlist D;
    
    D.insertAtroot(7);
    D.insertAtroot(4);
    D.insertAtroot(6);
    D.insertAtroot(2);
    D.insertAtroot(3);

    D.traverse();
    cout<<D.getsum()<<endl;
    cout<<D.getsize()<<endl;
    cout<<D.getAverage()<<endl;

    D.insertAtroot(87);
    D.insertAtroot(70);
    D.insertAtroot(77);
    D.insertAtroot(74);
    D.insertAtroot(7);
    D.insertAtroot(4);

    D.traverse();
    cout<<D.getsum()<<endl;
    cout<<D.getAverage()<<endl;
    cout<<D.getLast()<<endl;
    cout<<D.getsize()<<endl;

    D.insert_after_value(7, 10);
    D.traverse();
    cout<<D.getsum()<<endl;
    cout<<D.getAverage()<<endl;
    cout<<D.getLast()<<endl;
    cout<<D.getsize()<<endl;
    D.printReverse();
    
    return 0;
}
