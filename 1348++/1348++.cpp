#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    cout << fixed << setprecision(2);

    int aX, aY, bX, bY, kX, kY, length;
    cin >> aX >> aY >> bX >> bY >> kX >> kY >> length;

    /*int middleX = (bX + aX) / 2, middleY = (bY + aY) / 2;

    double middleD = sqrt(pow(kX - middleX, 2) + pow(kY - middleY, 2));

    double result = middleD - length;

    if (result < 0)
    {
        cout << 0.00;
    }
    else
    {
        cout << result;
    }*/

    double bD = sqrt(pow(kX - bX, 2) + pow(kY - bY, 2)), aD = sqrt(pow(kX - aX, 2) + pow(kY - aY, 2));

    cout << endl << max(bD, aD) - length;
}