#include <iostream>
using namespace std;

// definiation
struct Course
{
    string name;
    double price;
    int duration;
    string topic[50];
};

int main(int argc, char const *argv[])
{

    Course list[2];

    int courseIndex = 0;
    while (courseIndex != 2)
    {
        // Course course;
        cout << "enter course name :";
        cin >> list[courseIndex].name;
        cout << "enter course duration :";
        cin >> list[courseIndex].duration;
        cout << "enter course price :";
        cin >> list[courseIndex].price;
        int choice = 1;
        int index = 0;
        while (choice != 0)
        {
            cout << "enter topic name :";
            cin >> list[courseIndex].topic[index];
            index++;
            cout << "enter 1 to continue, 0 to exit";
            cin >> choice;
        }
        courseIndex++;
    }
    return 0;
}
