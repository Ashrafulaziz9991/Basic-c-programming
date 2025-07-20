//singly list
#include <bits/stdc++.h>
#define nll NULL
using namespace std;

class node{
public:
    int data;
    node* next;

    node(int val)
    {
        data = val;
        next = nll;
    }
};

class listt{
public:
    node* root, *tail;
    int sz;

    listt()
    {
        root = nll, tail = nll;
        sz = 0;
    }

    void Push_front(int val)
    {
        sz++;
        node* Newnode = new node(val);
        if (root == nll)
        {
            root = Newnode;
            tail = Newnode;
            return;
        }
        Newnode->next = root;
        root = Newnode;
    }

    void Push_back(int val)
    {
        sz++;
        node* Newnode = new node(val);
        if (root == nll)
        {
            root = Newnode;
            tail = Newnode;
            return;
        }
        tail->next = Newnode;
        tail = Newnode;
    }

    void tarverse()
    {
        node* x = root;
        while (x != nll)
        {
            cout<<x->data<<" ";
            x = x->next;
        }
        cout<<endl;    
    }

    void PositionVal(int index)
    {
        if (root == nll)
        {
            cout<<"Empty"<<endl;
            return;
        }
        if (index < 0 || index > sz)
        {
            cout<<"Invalid index"<<endl;
            return;
        }
        
        node* a = root;
        int curr_index = 0;

        while (curr_index != index)
        {

            a = a->next;
            curr_index++;
        }
        cout<<index<<" no index value is "<<a->data<<endl;
    }

    void insert_after_value(int cur_data, int new_data)
    {
        if (root == nll)
        {
            cout<<"List is Empty"<<endl;
            return;
        }

        if (!exist(cur_data))
        {
            cout<<"Can't insert during the absent the following value"<<endl;
            return;
        }
        
        
        node* a = root;
        int curr_index = 0;

        while (curr_index != sz-1)
        {
            if (a->data == cur_data)
            {
                break;
            }
             a = a->next;
            curr_index++;
        }
        node* Newnode = new node(new_data);
        Newnode->next = a->next;
        a->next = Newnode;
    }

    void delete_tail()
    {
        if (root == nll)
        {
            cout<<"list is Empty"<<endl;
            return;
        }
        
        node* a = root;
        node* b = root->next;
        node* d = b->next;
        node* c = tail;
        
//        d = c;
        delete c;
        sz--;
    }

    void delete_Any_index(int index)
    {
        if (root == nll)
        {
            cout<<"list is Empty"<<endl;
            return;
        }

        node* a = root;
        int curr_index = 0;

        while (curr_index != index - 1)
        {
            a = a->next;
            curr_index++;
        }
        node* b = a->next;
        a->next = b->next;
        delete b;
        sz--;
    }

    void delete_root()
    {
        if (root == nll)
        {
            cout<<"list is Empty"<<endl;
            return;
        }
        
        node* a = root;
        node* b = root->next;
        
        root = b;
        delete a;
        sz--;
    }

    bool exist(int val){
        node* a = root;
        int cur_index = 0;
        while (cur_index != sz-1)
        {
            if (a->data == val)
            {
                return true;
            }
            a = a->next;
            cur_index++;
        }
        return false;
    }
};

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    listt l;
    l.Push_front(7);
    l.Push_front(74);
    l.Push_front(47);
    l.Push_front(73);
    l.Push_front(17);

    l.tarverse();

    l.Push_back(4);
    l.Push_back(54);
    l.Push_back(41);

    l.tarverse();

    l.PositionVal(4);

     l.insert_after_value(4, 10);//4 is the current data & 10 is the new data
    // l.tarverse();

    // l.delete_root();
    // l.tarverse();

    l.delete_Any_index(3);
    l.tarverse();

    cout<<l.exist(102);

    return 0;
}