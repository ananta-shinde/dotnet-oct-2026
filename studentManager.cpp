#include<iostream>
using namespace std;

struct Address{
    string localAddress;
    string city;
    string state;
    string pin;
};

struct Student
{
    int rollno;
    string name;
    string email;
    string password;
    Address address;
    int phy;
    int chem;
    int maths;

};








int main(int argc, char const *argv[])
{
    Student studList[10];
    int studentCount = 0;

    // add new student
    // 1. accept details and put it into structure
    cout << "enter student name :";
    cin >> studList[studentCount].name;
    cout << "enter student email :";
    cin >> studList[studentCount].email;
    cout << "enter student password :";
    cin >> studList[studentCount].password;
    cout << "enter student address :";
    cout << "enter loacal address :";
    cin >> studList[studentCount].address.localAddress;
    cout << "enter city :";
    cin >> studList[studentCount].address.city;
    cout << "enter state :";
    cin >> studList[studentCount].address.state;
    cout << "enter pin :";
    cin >> studList[studentCount].address.pin;
    cout<<"enter marks for subjects :";
    cout<< "enter marks for physics:";
    cin >> studList[studentCount].phy;
    cout<< "enter marks for Chem:";
    cin >> studList[studentCount].chem;
    cout<< "enter marks for Maths:";
    cin >> studList[studentCount].maths;
    studentCount++;


    
    return 0;
}
