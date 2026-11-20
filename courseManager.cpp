#include <iostream>
using namespace std;

// definiation
struct Course
{
    string name;
    double price;
    int duration;
    string topic[50];
    int topicCount = 0;
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
            list[courseIndex].topicCount++;
            index++;
            cout << "enter 1 to continue, 0 to exit";
            cin >> choice;
        }
        courseIndex++;
    }


    for(int i=0;i<2;i++){
        cout <<"Name : "<< list[i].name << "Price : " << list[i].price <<"Duration : " <<list[i].duration<<endl;
        cout << "topics :" <<endl;
        for(int j=0;j<list[i].topicCount;j++){
            cout<<list[i].topic[j]<<endl;
        }
    }



    return 0;
}
