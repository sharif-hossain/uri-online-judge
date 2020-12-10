#include <iostream>

using namespace std;

int main()
{
    int x, y, op, match = 0, inter = 0, gremio = 0, empate = 0;

    while(1)

    {
        cin >> x;
        cin >> y;

        if(x > y)
        {
            inter ++;
        }
        else if(x < y)
        {
            gremio ++;
        }

        else if(x == y)
        {
            empate ++;
        }

        match ++;
        cout << "Novo grenal (1-sim 2-nao)" << endl;

        cin >> op;

        if(op == 1)
        {
            continue;
        }
        if(op == 2)
        {
            break;
        }
    }

    cout << match << " grenais" << endl;

    cout << "Inter:" << inter << endl;
    cout << "Gremio:" << gremio << endl;
    cout << "Empates:" << empate << endl;


    if(inter > gremio)
    {
        cout << "Inter venceu mais" << endl;
    }
    else if(gremio > inter)
    {
        cout << "Gremio venceu mais" << endl;
    }
    else if(inter == gremio)
    {
        cout << "Nao houve vencedorn" << endl;;
    }


    return 0;
}
