#include<iostream>
#include<string>
using namespace std;

int main(int argc, char const *argv[])
{
    string name = "Ananta";
    string fruits[5];
    
   

    for(int i=0;i<5;i++){
        cout << "enter fruit name:";
        cin >> fruits[i];
    }
    

    int count = 0;  // variable initialization
    while(count < 5){   // condition
        cout << fruits[count] << " ";
        // count = count+1;
        count++;   // update loop variable
    }

    // for(int i=0;i<5;i++)
    // {
    //     cout << fruits[count] << " ";
    // }
    

    return 0;
}
