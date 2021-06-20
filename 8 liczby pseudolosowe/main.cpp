#include <iostream>
#include <cstdlib>
#include <time.h>
int liczba, proba,ile_razy=0;
int main()
{
    std::cout << "o Jakiej liczbie z zakresu od 1 do 100 mysle? " << std::endl;
    srand(time(NULL));
    liczba = rand()%100+1;
    std::cout<< liczba << std::endl;
    while(proba!=liczba){
            ile_razy++;

        std::cout<<"zgadnij jaka to juz "<<ile_razy<<" raz ";
        std::cin>>proba;
        if(proba==liczba)
            std::cout<<" GG to byla "<<ile_razy<<" proba" <<std::endl;
        else if (proba>liczba)
            std::cout<<" xd "<<ile_razy<<" razy niezgadnac to trzeba byc pajacem"<<std::endl;
        else if(proba<liczba)
        std::cout <<" xd ty jestes genialny "<<ile_razy<<" razy niezgadnac to trzeba byc pajacem"<< std::endl;

    }
    system("pause");
    return 0;

}
