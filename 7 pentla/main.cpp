#include <iostream>
int populacja=1; int godzin=0;
int main()
{
    do
    {
        godzin++;
        populacja = populacja *2;
        std::cout<< " minelo godzin: "<< godzin;
        std::cout<< " liczba bakterii: "<<populacja<< std::endl;
    }   while(populacja<=1000000000);

    return 0;
}
