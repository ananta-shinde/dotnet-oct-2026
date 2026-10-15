#include<iostream>
using namespace std;

struct User
{
    string name;
    int age;
    float weight;
};


int main(int argc, char const *argv[])
{
    int num[3] = {20,30,40};
    User myuser = {"Ananta",20,70};
    cout << myuser.age;
    return 0;
}
