#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double N, s1, s2, b1, b2, a1, a2, ser1 = 0, ser2 = 0, bloc1 = 0, bloc2 = 0,  attak1 = 0, attak2 = 0;
    double service, block, attack;
    string name;
    cin >> N;

    for(int i = 1; i <= N; i++)
    {
        cin >> name;

        cin >> s1 >> b1 >> a1;
        cin >> s2 >> b2 >> a2;

        ser1 += s1;
        ser2 += s2;
        bloc1 += b1;
        bloc2 += b2;
        attak1 += a1;
        attak2 += a2;

        service =  (ser2*100)/ser1;
        block = (bloc2*100)/bloc1;
        attack = (attak2*100)/attak1;
    }
    cout << fixed << setprecision(2) << "Pontos de Saque: " << service << " %." << endl;
    cout << fixed << setprecision(2) << "Pontos de Bloqueio: " << block << " %." << endl;
    cout << fixed << setprecision(2) << "Pontos de Ataque: " << attack << " %." << endl;
    return 0;
}
