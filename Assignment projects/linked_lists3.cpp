#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

class LinkedList
{
private:
    Node* head;
    int size;

public:
    LinkedList() : head(nullptr), size(0) {}

    void InsertAtHead(int val)
    {
        Node* newNode = new Node(val);
        newNode->next = head;
        head = newNode;
        size++;
    }

    int getSize() //const
    {
        return size;
    }

    int getValue(int index) const
    {
        if (index >= size || index < 0)
        {
            return -1;
        }
        Node* current = head;
        for (int i = 0; i < index; i++)
        {
            current = current->next;
        }
        return current->data;
    }

    void printReverse() const
    {
        printReverseHelper(head);
        cout << endl;
    }

    void printReverseHelper(Node* node) const
    {
        if (node == nullptr)
        {
            return;
        }
        printReverseHelper(node->next);
        cout << node->data << " ";
    }

    void swapFirst()
    {
        if (head == nullptr || head->next == nullptr)
        {
            return;
        }
        Node* first = head;
        Node* second = head->next;
        first->next = second->next;
        second->next = first;
        head = second;
    }

    void Traverse() const
    {
        Node* current = head;
        while (current != nullptr)
        {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
};

int main()
{
    LinkedList l;
    cout << l.getSize() << "\n";
    l.InsertAtHead(5);
    cout << l.getSize() << "\n";
    l.InsertAtHead(6);
    l.InsertAtHead(30);
    cout << l.getSize() << "\n";
    l.InsertAtHead(20);
    l.InsertAtHead(30);
    cout << l.getValue(2) << "\n";
    cout << l.getValue(6) << "\n";
    l.printReverse();
    l.Traverse();
    l.swapFirst();
    l.Traverse();
    l.printReverse();
    return 0;
}

