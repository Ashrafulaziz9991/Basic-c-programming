#include <iostream>
#define fast  ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;

//if l>r then queue is empty
//if r+1 > arr_Size then queue is overflow
//r-l+1 then  queue size counter

const int Max_size = 50;

class Queue{
public:
    int arr[Max_size];
    int l, r;

    Queue()
    {
        l = 0;
        r = -1;
    }

    void enque(int value)
    {
        if (r+1 >= Max_size)
        {
            cout<<"Queue is Full"<<endl;
            return;
        }
        
        r++;
        arr[r] = value;
    }

    void deque()
    {
        if (l>r)
        {
            cout<<"Queue Is Already Empty"<<endl;
            return;
        }
        l++;
        //arr[l] = value;
    }

    void Frontt()
    {
        if (l>r)
        {
            cout<<"Queue Is Empty"<<endl;
            return;
        }
        
        cout<<"top of The Queue is "<<arr[l]<<endl;
    }

    int Front()
    {
        if (l>r)
        {
            cout<<"Queue Is Empty"<<endl;
            return -1;
        }
        return arr[l];
    }

    int getsz()
    {
        return r-l+1;
    }

};

int main()
{
    Queue q;
    q.enque(78);
    q.enque(7);
    q.enque(81);
    q.enque(58);

    q.Frontt();
    q.deque();
    q.Frontt();
    q.deque();
    q.Frontt();
    q.deque();
    q.Frontt();
    q.deque();

    // while (q.getsz()>0)
    // {
    //     int t = q.Front();
    //     //q.Frontt();
    //     cout<<q.Front()<<" ";
    //     q.deque();
    //     cout<<"\nprevious top "<<t<<endl; 
    // }
    return 0;
}