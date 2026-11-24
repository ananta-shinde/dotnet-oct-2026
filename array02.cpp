#include <iostream>
using namespace std;

struct Fruit
{
    string name;
    float price;
};

int main(int argc, char const *argv[])
{
    // allocating menory
    Fruit fruits[5];

    // acepting data and putting into memory
    for (int i = 0; i < 5; i++)
    {
        cout << "enter fruit name:";
        cin >> fruits[i].name;
        cout << "enter price :";
        cin >> fruits[i].price;
    }

    // array traversal
    for (int i = 0; i < 5; i++)
    {
        cout << "Name: " << fruits[i].name << " price :" << fruits[i].price << endl;
    }

    cout << "*******************************************"<<endl;

    // filtering accouding to price
    for (int i = 0; i < 5; i++)
    {
        if (fruits[i].price >= 500)
        {
            cout << "Name: " << fruits[i].name << " price :" << fruits[i].price << endl;
        }
    }

    cout << "*******************************************"<<endl;

    for (int j = 0; j < 5; j++){
        for (int i = 0; i < 4; i++){
            if (fruits[i].price > fruits[i + 1].price){
                Fruit temp;
                temp.name = fruits[i].name;
                temp.price = fruits[i].price;

                fruits[i].name = fruits[i+1].name;
                fruits[i].price = fruits[i+1].price;

                fruits[i+1].name = temp.name;
                fruits[i+1].price = temp.price;
            }
        }
    }


    // array traversal
    for (int i = 0; i < 5; i++)
    {
        cout << "Name: " << fruits[i].name << " price :" << fruits[i].price << endl;
    }



    return 0;
}
