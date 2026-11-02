#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
   int size;
   cout<<"enter collection size:";
   cin >> size;

   int marks[size];
   string names[size];

   for(int i=0;i<size;i++){
      cout << "enter name of student";
      cin >> names[i];
      cout<<"enter marks:";
      cin >> marks[i];
   }

   int count = 0;
   for(int i=0;i<size;i++){
       if(marks[i] >= 350){
           count++;
       }
   }

   cout<< "total no of students :"<< size << endl;
   cout<< "no of passed students :"<< count<< endl;;
   cout<< "no of failed students :"<< size-count <<endl;
    

   // print all students
   cout<< "**********************************" <<endl;
   for(int i=0;i<size;i++){
        cout << "name :"<< names[i] << " marks:"<<marks[i] << endl;
   }


   int largest = marks[0];
   int indexOFLargest = 0;
   for(int i=0;i<size;i++){
      if(marks[i] > largest){
        largest = marks[i] ;
        indexOFLargest = i;

      }
   }

   // printing topper details
   cout << "**************************************"<<endl;
   cout<< "details of topper :     name: "<<names[indexOFLargest] <<"marks :"<< largest<< endl;;


    
    return 0;
}
