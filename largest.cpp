#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n1,n2,n3;
    cout << "enter number :";
    cin >> n1;
    cout << "enter number :";
    cin >> n2;
    cout << "enter number :";
    cin >> n3;

    if(n1>n2 && n1>n3){
        cout << "largest number is :" << n1;
    }

    if(n2>n1 && n2>n3){
        cout << "largest number is :" << n2;
    }
    
    if(n3>n1 && n3>n2){
        cout << "largest number is :" << n3;
    }


    return 0;
}
