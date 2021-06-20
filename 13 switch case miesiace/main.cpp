#include <iostream>
#include<cstdlib>
int nr_miesiaca;
int main()
{
    std::cout << "Podaj Numer miesiaca: " ;
    if(!(std::cin>> nr_miesiaca))
    {
    std::cerr << "To nie liczba";
    exit(0);
    }

    switch(nr_miesiaca)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        std::cout<< "Ten miesiac ma 31 dni";
    break;
    case 4:
    case 6:
    case 9:
    case 11:
        std::cout<< "Ten miesiac ma 31 dni";
    case 2:
        {
            int rok;
            std::cout<< "Podaj rok : ";
            std::cin>> rok;
            if (((rok%4==0)&&(rok%100!=0)||(rok%400==0)))
            std::cout<< "Ten miesiac ma 29 dni";
            else
        std::cout<< "Ten miesiac ma 28 ";}
        break;
        default :std::cout<< "Niepoprawny numer miesiaca";



    }
    return 0;
}
