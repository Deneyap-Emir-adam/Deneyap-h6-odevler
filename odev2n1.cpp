#include <iostream>
using namespace std;

int main()
{
    int sayi_a = 50+rand()%50;
    int sayi_b = 50+rand()%50;
    cout << "Ilk sayi:" << sayi_a << endl;
    cout << "Ikinci sayi:" << sayi_b << endl;
    if (sayi_a>sayi_b)
    {
        cout << "Ilk sayi buyuktur";
    }
    else if (sayi_b>sayi_a)
    {
        cout << "Ikıncı sayi buyuktur";
    }
    else
    {
        cout << "Iki sayi esittir";
    }
    return 0;
}
