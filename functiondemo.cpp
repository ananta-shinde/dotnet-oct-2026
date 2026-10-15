#include<iostream>
using namespace std;

void interstCalculator(){
    int p,r,n;
    cout << "enter principle amount";
    cin >> p;
    cout << "enter rate";
    cin >> r;
    cout << "enter no of years";
    cin >> n;
    cout << (p*r*n)/100;
}

void addition(){
    int n1,n2;
    cout << "enter a number:";
    cin >> n1;
    cout << "enter a number:";
    cin >> n2;
    cout << n1+n2;
}

int main()
{
   
    
    // for(int i=0;i<5;i++){
    //     cout << "enter principle amount";
    //     cin >> p;
    //     cout << "enter rate";
    //     cin >> r;
    //     cout << "enter no of years";
    //     cin >> n;
    //     cout << (p*r*n)/100;
    // }
    interstCalculator();
    cout << "hello i have come out of logic";
    interstCalculator();

    // int choice = 0;


    // while(choice != 9){
    //     cout << "enter principle amount";
    //     cin >> p;
    //     cout << "enter rate";
    //     cin >> r;
    //     cout << "enter no of years";
    //     cin >> n;
    //     cout << (p*r*n)/100 << endl;
    //     cout <<"enter 0 to continue, 9 to exit";
    //     cin >> choice;
    // }
     interstCalculator();

    return 0;
}
