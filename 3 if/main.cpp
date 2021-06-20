#include <iostream>

using namespace std;
string login, haslo;

int main()
{
    cout << "Podaj login:";
    cin>>login;
    cout << "Podaj haslo:";
    cin>>haslo;
    if ((login=="admin")&&(haslo=="haslo"))
    {
        cout<< "Podane dane sa poprawne";
    }
    else{
        cout<< "Nie udalo sie zalogowac";
    }

    return 0;
}
