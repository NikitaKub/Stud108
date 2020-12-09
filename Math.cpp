#include <iostream> 
#include "windows.h"
#include "string.h"
#include "math.h"

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    
    int y, v, Alpha = 180, Beta = 180;
    double x, w, z, A, B, C;

    cout << "y= ";
    cin >> y;
    cout << "v= ";
    cin >> v;
    cout << "x= ";
    cin >> x;
    cout << "w= ";
    cin >> w;
    cout << "z= ";
    cin >> z;

    
    A = 3 * pow(v, 3) - x * z / pow(w, 2) + x * v + x + y / y - v - x * y - v / 1 / 13 * y;

    B = sin(60) + cos(Alpha) + 1 + pow(cos(3 * Alpha), -1) + tan(Beta);

    C = pow(10, 3) * w * z + 11 * y - 5 * pow(y, 2) * x / w;

    cout << "A= " << A << endl;
    cout << "B= " << B << endl;
    cout << "C= " << C << endl;

    system("pause");
    return 0;
}
