#include <iostream>
#include <iomanip>
long double fib[100000]; int n;
int main()
{
    std::cout << "ktory wyrazow ciagu fibbonaciego mam pokazac" << std::endl;
    std::cin>>n;
    fib[0]=1;
    fib[1]=1;
    for(int i=2;i<n; i++)
    {
        fib[i]=fib[i-1]+fib[i-2];
    }
    std::cout<< std::setprecision(10000);
    for(int i=2;i<n; i++)
    {
        std::cout<<std::endl<<"wyraz nr "<<i+1<<": "<<fib[i];
    }
    std::cout<<std::endl<< "wyraz nr "<<n<<":"<<fib[n-1]<<std::endl;
    std::cout<<" zlota liczba: " <<fib[n-1] /fib[n-2];
    return 0;
}
