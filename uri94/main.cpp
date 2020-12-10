#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    string ch;
    int n,  N, coelho = 0, rato = 0, sapo = 0;
    float p1, p2, p3, sum = 0;
    cin >> N;
    for(int i = 1; i <= N; i++)
    {
        cin >> n;
        cin >> ch;
        sum += n;

        if( ch == "C")
        {
            coelho += n;
        }
        if(ch == "R")
        {
            rato += n;
        }
        if(ch == "S")
        {
            sapo += n;
        }
    }
    cout << "Total: " << sum <<  " cobaias" << endl;
    cout << "Total de coelhos: " << coelho << endl;
    cout << "Total de ratos: " << rato << endl;
    cout << "Total de sapos: " << sapo << endl;
    cout << fixed << setprecision(2) << "Percentual de coelhos: " << (coelho * 100)/sum << " %" << endl;
    cout << fixed << setprecision(2) << "Percentual de ratos: " << (rato * 100)/sum << " %" << endl;
    cout << fixed << setprecision(2) << "Percentual de sapos: " << (sapo * 100)/sum << " %" << endl;
    return 0;
}
