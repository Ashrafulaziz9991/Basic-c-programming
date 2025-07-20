#include<bits/stdc++.h>
using namespace std;

int main()
{
    /*this is not from user input,
    and data is also not storing in the file,
    so if we write something new, the speech will
    be change*/
    ofstream file;
    file.open("owner_of_device.txt");
    file<<"HEY!! I am ASHRAFUL AZIZ,\ni'm learning data structure, and it's my 3rd course";
    file.close();
    return 0;
}
