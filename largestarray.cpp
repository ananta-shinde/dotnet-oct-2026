#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int size;
    cout << "enter collection size" ;
    cin >> size;
    int nums[size];

    for(int i=0;i<size;i++){
        cout << "enter number : ";
        cin >> nums[i];
    }

    int largest = nums[0];
    
    for(int i=0;i<size;i++){
        if(nums[i]>largest){
            largest = nums[i];
        }
    }

    cout << "largest number is"<< largest;
    

    
    

    
    return 0;
}
