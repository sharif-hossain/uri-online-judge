#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float num, tax1, tax2, tax3, tax4;
    cin >> num;
    if(num >= 0 && num <= 2000)
    {
        cout << "Isento" << endl;
    }
    if(num >= 2000 && num <= 3000)
    {
        tax2 = (num - 2000.01) * .08;

        cout << fixed << setprecision(2) << "R$ " << tax2 << endl;
    }
    else if(num >= 3000 && num <= 4500)
    {
        tax3 = 0 + 80 + (num - 3000.01)*.18;

        cout << fixed << setprecision(2) << "R$ " << tax3 << endl;
    }
    else if(num > 4500)
    {
        tax4 = 0 + 80 + 270 + (num -4500.00) * .28;
        cout << fixed << setprecision(2) << "R$ " << tax4 << endl;
    }

    return 0;
}
