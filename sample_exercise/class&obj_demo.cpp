/*
#include<bits/stdc++.h>

using namespace std;

class student{
    public:

    string name;
    int age, std_id;
    string fathers_name;
    string Mothers_name;

    void print_student_info()
    {
        cout<<name<<" "<<age<<" "<<std_id<<" "<<fathers_name<<" "<<Mothers_name;
    }
};

int main()
{

    student S;
    cout<<"enter the name :";
    cin>>S.name; //= "abc";
    cout<<"\nenter age :";
    cin>>S.age; //= 23;
    cout<<"\nenter the id no :";
    cin>>S.std_id ;//= 155684;
    cout<<"\nenter your father's name :";
    cin>>S.fathers_name;// = "X";
    cout<<"\nenter your Mother's name :";
    cin>>S.Mothers_name;// = "Y";

    S.print_student_info();
    return 0;
}
*/

#include <iostream>
#include <string>

class Person
{
private:
    std::string name;
    int age;
    std::string address;
    std::string phoneNumber;

public:
    // Method to input data
    void input()
    {
        std::cout << "Enter name: ";
        std::getline(std::cin, name);  // Using getline to allow spaces in the name

        std::cout << "Enter age: ";
        std::cin >> age;
        std::cin.ignore();  // Clear the newline character left in the input buffer

        std::cout << "Enter address: ";
        std::getline(std::cin, address);  // Using getline to allow spaces in the address

        std::cout << "Enter phone number: ";
        std::getline(std::cin, phoneNumber);  // Using getline to allow spaces in the phone number
    }

    // Method to display data
    void display() //const
    {
        std::cout << "Name: " << name << "\nAge: " << age << "\nAddress: " << address << "\nPhone Number: " << phoneNumber << std::endl;
    }
};

int main()
{
    Person person;

    // Taking user input for the person object
    person.input();

//    std::cout << "Enter name: ";
//    std::getline(std::cin, person.name);  // Using getline to allow spaces in the name
//
//    std::cout << "Enter age: ";
//    std::cin >> person.age;
//    std::cin.ignore();  // Clear the newline character left in the input buffer
//
//    std::cout << "Enter address: ";
//    std::getline(std::cin, person.address);  // Using getline to allow spaces in the address
//
//    std::cout << "Enter phone number: ";
//    std::getline(std::cin, person.phoneNumber);

    // Displaying the entered data
    person.display();

    return 0;
}
