#include <iostream>
std::string imie; int liczba;
int main()
{
    std::cout << "podaj imie:";
    std::cin>> imie;
    std::cout<<"Podaj dodatnia liczbe:";
    std::cin>> liczba;

    for ( int i=1; i<=liczba; i++)
    {
    std::cout<<i<<". "<<imie<<std::endl;
    }
    return 0;
}
