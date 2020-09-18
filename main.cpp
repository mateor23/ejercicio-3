#include <math.h>
#include <iostream>

using namespace std;

int main()
{
    int num1,num2,num3;
    int sum1 = 0;
    int sum2 = 0;
    int sum3 = 0;
    int ac1 = 0;
    int ac2 = 0;
    int ac3 = 0;
    cout << "Ingrese tres numeros: ";
    cin >> num1;
    cin >> num2;
    cin >> num3;
    while (num1>0) {
        ac1 = num1 % 10;
        sum1 = sum1 + pow (ac1,ac1);
        num1 = num1 / 10;
    }
    while (num2>0) {
        ac2 = num2 % 10;
        sum2 = sum2 + pow (ac2,ac2);
        num2 = num2 / 10;
    }
    while (num3>0) {
        ac3 = num3 % 10;
        sum3 = sum3 + pow (ac3,ac3);
        num3 = num3 / 10;
    }
    cout << "El resultado es: " << sum1+sum2+sum3 << endl;
    return 0;
}
