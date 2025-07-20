#include<bits/stdc++.h>
using namespace std;

void display(int n)
{
    cout<<"The value is "<<n<<endl;
    return;
}

int main()
{
    /*int a = 5, b = 70;

    int *x;
    int *y;

    x = &a;
    y = &b;

    //*y = 9;

    cout<<"The value of Y is "<<y<<endl;*/
    /*
    display(a);
    display(b);
    display(*x);
    display(*y);
    //display(y);
    */
   /*//memory adress of 
   cout<<"The value of X is "<<x<<endl;
   cout<<"The value of *Y is "<<*y<<endl;
   cout<<"The value of *X is "<<*x<<endl;
   cout<<"The value of A is "<<a<<endl;
   cout<<"The value of B is "<<b<<endl;

    int *A = new int(80);
    int *B = new int(70);
    int *C = new int(60);
    int *D = new int(50);
    display(*A);
    display(*B);
    display(*C);
    display(*D);*/

    int *ptr = new int;

    *ptr = 9;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;

    int x = 9, y = 7;

    //cout<<
    //printf("the value of x is %d  and y is %d\n",x,y);
    //printf("the value of x is %b  and y is %b\n",x,y);
    //printf("the value of x is %o  and y is %o\n",x,y);
    //printf("the value of x is %hex  and y is %hex\n",x,y);
   /* cout<<"the value of x is "<<x<<endl;
    cout<<"the hexadecimal value of x is "<<hex<<x<<endl;
    cout<<"the Octal value of x is "<<oct<<x<<endl;
    cout<<"the Binary value of x is "<<bitset<32>(x)<<endl;
    cout<<"the Binary value of y is "<<bitset<32>(y)<<endl;
    printf("the value of x is %b  and y is %b\n",x,y);*/

    cout<<x<<endl;
    cout<<&x<<endl;
    //cout<<hex<<&x<<endl;
    cout<<y<<endl;
    cout<<&y<<endl;
    //cout<<hex<<&y<<endl;
    
    return 0;
}