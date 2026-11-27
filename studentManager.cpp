#include <iostream>
using namespace std;

struct Address
{
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
    int totalMarks;
};

int main(int argc, char const *argv[])
{
    Student studList[10];
    int studentCount = 0;

    while (true)
    {
        int choice;
        cout << "choose from following option :" << endl;
        cout << "1.add new student  2.update student  3.prit all students" << endl;
        cout << "4.get student details 5. print topper 9.exit" << endl;
        cout << "enter your choice :";
        cin >> choice;

        if(choice == 9){
            break;
        }
        // add new student
        // 1. accept details and put it into structure
        if (choice == 1)
        {
            studList[studentCount].rollno = studentCount + 1;
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
            cout << "enter marks for subjects :";
            cout << "enter marks for physics:";
            cin >> studList[studentCount].phy;
            cout << "enter marks for Chem:";
            cin >> studList[studentCount].chem;
            cout << "enter marks for Maths:";
            cin >> studList[studentCount].maths;
            studList[studentCount].totalMarks = studList[studentCount].phy + studList[studentCount].chem + studList[studentCount].maths;

            studentCount++;
            cout << "student created successfully" << endl;
        }

        // update a student
        if (choice == 2)
        {
            int roll;
            string key;
            string value;
            cout << "updating student : ";
            cout << "enter roll no :";
            cin >> roll;
            cout << "which property";
            cin >> key;
            cout << "enter new value for property";
            cin >> value;

            for (int i = 0; i < studentCount; i++)
            {
                if (studList[i].rollno == roll)
                {
                    if (key == "name")
                    {
                        studList[i].name = value;
                    }
                    if (key == "email")
                    {
                        studList[i].email = value;
                    }
                    if (key == "password")
                    {
                        studList[i].password = value;
                    }
                }
            }

            cout << "student updated successfully" << endl;
        }

        // print list of studnets
        if (choice == 3)
        {
            for (int i = 0; i < studentCount; i++)
            {
                cout << "name: " << studList[i].name << " email :" << studList[i].email << " password :" << studList[i].password << endl;
            }
        }

        // print details of studnet by roll no
        if (choice == 4)
        {
            int roll;
            cout << "enter roll no :";
            cin >> roll;
            for (int i = 0; i < studentCount; i++)
            {
                if (studList[i].rollno == roll)
                {
                    cout << "name: " << studList[i].name << " email :" << studList[i].email << " password :" << studList[i].password << endl;
                }
            }
        }

        // print topper details
        if (choice == 5)
        {
            int highest = studList[0].totalMarks;
            int index = 0;
            for (int i = 0; i < studentCount; i++)
            {
                if (studList[i].totalMarks > highest)
                {
                    highest = studList[i].totalMarks;
                    index = i;
                }
            }
            cout << "name: " << studList[index].name << " email :" << studList[index].email << " password :" << studList[index].password << endl;
        }
    }

    return 0;
}
