#include <iostream>
#include <string>
using namespace std;
int main()
{
    long long int a;
        a = 260; // Используется long long int потому что для возведения в  степень не будет достаточно диапазона в 16 и 32 Бит
            char sym = 'a'; // В качестве переменной sym обозначю букву a

                cout << "Max bytes for char" << sizeof (char) << endl; // Максимально допустимое количество байт для переменной типа char
                cout << "Max bytes for double" << sizeof (double) << endl; // Максимально допустимое количество байт для переменной типа double
                cout << "Max bytes for int" << sizeof (int) << endl; // Максимально допустимое количество байт для переменной типа int
                cout << "Max bytes for bool" << sizeof (bool) << endl; // Максимально допустимое количество байт для переменной типа bool

                    cout << "a=^" << a*a*a*a << endl; // Из переменной a возводим число в 4 степень
                    cout << "a^5=" << a*a*a*a*a << endl; // Из переменной a возводим число в 5 степень

                        cout << "'a'+53=" << sym + 53 << endl; // В таблице ASCII символ a имеет номер 97, тоесть 97+53=150
                        cout << "37+'a'" << 37 + sym << endl; // В таблице ASCII символ a имеет номер 97, тоесть 37+97=134
    return 0;
}