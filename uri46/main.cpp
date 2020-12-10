#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float salary, bonus;
    int  percent;
    cin >> salary;

    if(salary >= 0 && salary <= 400)
    {
        bonus = 0.15*salary;
        salary = salary + salary * .15;
        percent = 15;
    }
    else if(salary >= 400.01 && salary <= 800.00)
    {
        bonus = salary * .12;
        salary = salary + salary * .12;
        percent = 12;
    }
    else if(salary >= 800.01 && salary <= 1200.00)
    {
        bonus = salary * .10;
        salary = salary + salary * .10;
        percent = 10;
    }
    else if(salary >= 1200.01 && salary <= 2000.00)
    {
        bonus = salary * .07;
        salary = salary + salary * .07;
        percent = 7;
    }
    else if(salary > 2000.00)
    {
        bonus = salary * .04;
        salary = salary + salary * .04;
        percent = 4;
    }
    cout << fixed << setprecision(2) << "Novo salario: " << salary << endl;
    cout << fixed << setprecision(2) << "Reajuste ganho: " << bonus << endl;
    cout << "Em percentual: " << percent << " %" << endl;
    return 0;
}
