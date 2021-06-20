#include <iostream>
#include <fstream>
std::string imie, nazwisko;
int nr_tel;
int main()
{
    std::cout << "Imie: "; std::cin>>imie;
    std::cout<< "Nazwisko: "; std::cin>>nazwisko;
    std::cout<< "Nr telefonu: "; std::cin>>nr_tel;
    std::fstream plik;
    plik.open("wizytowka.txt",std::ios::out| std::ios::app);
    plik<< imie<<std::endl;
    plik<< nazwisko<<std::endl;
    plik<< nr_tel<< std::endl;
    plik.close();
        return 0;
}
