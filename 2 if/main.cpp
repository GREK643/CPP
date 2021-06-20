#include <iostream>

using namespace std;

string PIN;

int main()
{
    cout << "Witaj!" << endl;
    cout << "Podaj numer PIn:";
    cin >> PIN;

    if(PIN=="1729")
    {
        cout<<"Ladowanie serwisu";

    }
    else{
        cout<<"niepoprawny Pin";
    }
    return 0;
}
