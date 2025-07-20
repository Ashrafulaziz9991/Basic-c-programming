#include <bits/stdc++.h>
using namespace std;

class student
{
public:
    string name;
    int level;
    int roll;
    int Id;
    char section;
    //using contractor
    student(string Name, int Level, int Roll, int ID, char Section)
    {
        name = Name;
        level = Level;
        roll = Roll;
        Id = ID;
        section = Section;
    }

    void Display()
    {
        cout << "Student Information :\n";
        cout << "Name : " << name << "\nClass : " << level << "\nRoll Number : " << roll <<" \nID : "<< Id << "\nSection : " << section << endl;
        cout << endl;
    }
};

int main()
{
    
    //we're using constractor here only for practice
    //by practicing this type of confusion will be removed
    student A("ARIF", 12, 3, 3003, 'A');
    A.Display();
    student B("SHARIF", 11, 13, 3403, 'A');
    B.Display();
    student C("SHAFIQ", 12, 73, 3473, 'B');
    C.Display();
    student X("ANIS", 11, 3, 3413, 'A');
    X.Display();
    student Y("RIFAT", 12, 80, 3693, 'B');
    Y.Display();
    student Z("SHARIF", 11, 83, 3473, 'B');
    Z.Display();
    student N("Naufal", 11, 70, 7802, 'A');
    N.Display();

    return 0;
}