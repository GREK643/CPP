#include <iostream>
#include <fstream>
#include <cstdlib>
#include <algorithm>
#include <string>

std::string temat, nick;
std::string tresc[5];
std::string  odpA[5],odpB[5],odpC[5],odpD[5];
std::string  prawidlowa[5];
std::string  odpowiedz;
int punkty=0;

int main()
{
    int nr_linii=1;
    std::string linia;
    int nr_pytania=0;

    std::fstream plik;
    plik.open("quiz.txt", std::ios::in);

    if (plik.good()==false)
    {
        std::cout<< "Nie udalo sie otworzyc pliku kurwiu!";
        exit(0);
    }
    while(getline(plik,linia))
    {
        switch(nr_linii)
        {
            case 1: temat=linia;                     break;
            case 2: nick=linia;                      break;
            case 3: tresc[nr_pytania]=linia;         break;
            case 4: odpA[nr_pytania]=linia;          break;
            case 5: odpB[nr_pytania]=linia;          break;
            case 6: odpC[nr_pytania]=linia;          break;
            case 7: odpD[nr_pytania]=linia;          break;
            case 8: prawidlowa[nr_pytania]=linia;    break;
        }
        if (nr_linii==8) {nr_linii=2; nr_pytania++;}
        nr_linii++;

    }
    plik.close();
        std::cout<<std::endl<<temat<<std::endl;
        std::cout<<std::endl<<nick<<std::endl;

        for(int i=0; i<=4;i++)
        {

        std::cout<<std::endl<<tresc[i]<<std::endl;
        std::cout<<"A. "<<odpA[i]<<std::endl;
        std::cout<<"B. "<<odpB[i]<<std::endl;
        std::cout<<"C. "<<odpC[i]<<std::endl;
        std::cout<<"D. "<<odpD[i]<<std::endl;
        std::cout<<"Twoja odpowiedz: ";
        std::cin>>odpowiedz;

        std::transform(odpowiedz.begin(), odpowiedz.end(), odpowiedz.begin(), ::tolower);

        if(odpowiedz==prawidlowa[i])
           {
               std::cout<<"Dobrze! Zdobywasz punkt!"<<std::endl;
               punkty++;
           }
           else std::cout<<"Zle! Brak punktu! Poprawna odpowiedz: "<<prawidlowa[i]<<std::endl;
           }
           std::cout<<std::endl<<"Koniec quizu!Zdobyte punkty: "  <<punkty;
           return 0;
}

