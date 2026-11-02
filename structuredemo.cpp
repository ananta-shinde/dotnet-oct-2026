#include <iostream>
using namespace std;

struct Student
{
    int rollno;
    string name;
    float marks;
};

int main(int argc, char const *argv[])
{

    int size;
    cout << "enter no of students";
    cin >> size;

    Student list[size];

    for (int i = 0; i < size; i++)
    {
        cout << "enter name:";
        cin >> list[i].name;
        cout << "enter roll no:";
        cin >> list[i].rollno;
        cout << "enter marks:";
        cin >> list[i].marks;
    }

    for (int i = 0; i < size; i++)
    {
        cout << "roll no: " << list[i].rollno << " name: " << list[i].name << " marks: " << list[i].marks << endl;
    }

    return 0;
}
