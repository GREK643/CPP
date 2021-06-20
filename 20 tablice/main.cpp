#include <iostream>

int main()
{
   std::string imie;
    std::cout<<"Podaj imie: ";
    std::cin>> imie;

    int dlugosc=imie.length();

    std::cout << (imie[dlugosc - 1] == 'a' || 'A' ? "Jestes kobieta" : "Jestes mezcyzna");

    return 0;
}
