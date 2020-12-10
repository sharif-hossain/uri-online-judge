#include <iostream>

using namespace std;

int main()
{
    int N, R, G, B, result = 0, j = 1;
    cin >> N;
    string op;


    for(int i = 1; i <= N; i++)
    {
        cin >> op >> R >> G >> B;



         if(op == "eye")
         {
             result = .30 * R + .59 * G + .11 * B;
         }
         else if(op == "min")
         {
             result = min(R, min(G, B));
         }

         else if(op == "max")
         {
             result = max(R, max(G, B));
         }
         else if(op == "mean")
         {
             result = (R + G + B)/3;
         }

         cout << "Caso #" << j << ": " << result << endl;
         j++;
         result = 0;
    }
    return 0;
}
