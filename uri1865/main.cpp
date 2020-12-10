#include <iostream>

using namespace std;

int main()
{
    int N, force;
    cin >> N;

    string name;

    for(int i = 0; i < N; i++)
    {
        cin >> name >> force;

        if(name == "Thor")
        {
            cout << "Y" << endl;
        }
        else
        {
            cout << "N" << endl;
        }
    }
    return 0;
}
