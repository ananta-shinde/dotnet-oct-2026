#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int num;
    cout << "enter a number";
    cin >> num;
    
    if(num % 2 == 0){
        cout<< "number is even" << endl;
    }
    else{
        cout << "number is odd";
    }
    
    return 0;
}
