#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int N, X, Y;
    double div;
    cin >> N;
    for(int i = 1; i <= N; i++){
        cin >> X;
        cin >> Y;
        if(Y == 0){
            cout << "divisao impossivel" << endl;
        }
        else if(X == 0){
                div = 0;
            cout << fixed << setprecision(1) << div << endl;
        }
        else{
            div = float(X)/Y ;
            cout << fixed << setprecision(1) << div << endl;
        }
    }




    return 0;
}
