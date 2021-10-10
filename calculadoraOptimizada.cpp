#include<iostream>
#include<string.h>
#include<cstring>
#include<cmath>
using namespace std;
int calculadora(int base1, int base2, char Numero[6], int resultado[6], int numeros[6], int numerofinal10)
{
    for (int i = 0; i <= 5; i++)
    {
        if (Numero[i] == 'A')
        {
            numeros[i] = 10;
        }
        else if (Numero[i] == 'B')
        {
            numeros[i] = 11;
        }
        else if (Numero[i] == 'C')
        {
            numeros[i] = 12;
        }
        else if (Numero[i] == 'D')
        {
            numeros[i] = 13;
        }
        else if (Numero[i] == 'E')
        {
            numeros[i] = 14;
        }
        else if (Numero[i] == 'F')
        {
            numeros[i] = 15;
        }
        else if (Numero[i] == '1')
        {
            numeros[i] = 1;
        }
        else if (Numero[i] == '2')
        {
            numeros[i] = 2;
        }
        else if (Numero[i] == '3')
        {
            numeros[i] = 3;
        }
        else if (Numero[i] == '4')
        {
            numeros[i] = 4;
        }
        else if (Numero[i] == '5')
        {
            numeros[i] = 5;
        }
        else if (Numero[i] == '6')
        {
            numeros[i] = 6;
        }
        else if (Numero[i] == '7')
        {
            numeros[i] = 7;
        }
        else if (Numero[i] == '8')
        {
            numeros[i] = 8;
        }
        else if (Numero[i] == '9')
        {
            numeros[i] = 9;
        }
        else
        {
            numeros[i] = 0;
        }
    }
    int i3 = 5;
    for (int i2 = 0; i2 < 6; i2++)
    {
        numerofinal10 += (numeros[i2] * pow(base1, i3));
        i3--;
    }
    return numerofinal10;


}


string to_base(int Numero, int base2)
{
    string bases = "0123456789ABCDEF";
    string result = "";
    while (Numero > 0)
    {
        result = bases[Numero % base2] + result;
        Numero /= base2;
    }
    return result;

}
int main()
{
    int base1, base2;
    int numeros[6];
    int resultado[6];
    char Numero[5] = "0";
    int Numerofinal10 = 0;
    string resultado2;
    std::cout << "Hola escribe el numero que quieras calcular maximo 6 digitos, si son menos de 5 digitos rellenelo con 0 a la izquierda" << std::endl;
    std::cin >> Numero;
    std::cout << Numero << std::endl;
    std::cout << "Digite el numero de base en el que estas" << std::endl;
    std::cin >> base1;
    std::cout << "Digite el numero de base en el que quieras hacer la operacion" << std::endl;
    std::cin >> base2;
    Numerofinal10 = calculadora(base1, base2, Numero, resultado, numeros, Numerofinal10);
    std::cout << std::endl;
    resultado2 = to_base(Numerofinal10, base2);
    std::cout << "Tu numero final es ";
    std::cout << resultado2;
    return 0;
}