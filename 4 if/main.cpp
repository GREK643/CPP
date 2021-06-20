#include <iostream>

using namespace std;
int wiek;

int main()
{
    cout << "Ile masz lat:";
    cin>> wiek;
    if (wiek<18)
        {
            cout<<"nie mozesz glosowac i nie mozesz kandysowac na prezydenta ";
        }
    else if ((wiek>=18)&&(wiek<35))
    {
        cout<<"mozesz glosowac i nie mozesz kandysowac na prezydenta ";
        }
    else
        {
            cout<<" mozesz glosowac i mozesz kandydowac na prezydenta";
        }



    return 0;
}
