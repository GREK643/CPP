#include <iostream>
#include <fstream>
#include <cstdlib>

float liczby[100];
int main()
{
   std::string linia;
   int nr_linii=1;

   std::fstream plik;
   plik.open("pomiary.txt", std::ios::in);

   if(plik.good()==false) std::cout<<"Nie mozna otworzc pliku!";

   int licznik=0;
   while(!plik.eof())
   {
       getline(plik,linia);
       liczby[licznik]=atof(linia.c_str());
       licznik++;
   }
   plik.close();
   std::cout<<"Ilosc pomiarow: "<<licznik<<std::endl;
   for(int i=0;i<licznik;i++)
   {
       std::cout<<liczby[i]<<std::endl;
   }
   return 0;
}
