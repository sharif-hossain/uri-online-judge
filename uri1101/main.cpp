#include <iostream>

using namespace std;

int main()
{
    int M, N, sum = 0;

    for(int i = 1;  ; i++)
    {
        cin >> M;
        cin >> N;
        if(M == 0 || N == 0 || M < 0 || N < 0)
        {
            break;
        }
        if(M > N)
        {

            for(int i = N; i <= M; i++)
            {
                cout << i << " " ;
                sum += i;
            }
        }
        else if(M < N)
        {
            for(int i = M; i <=N; i++)
            {
                cout << i << " ";
                sum += i;
            }
        }
        cout << "Sum=" << sum << endl;
        sum = 0;
    }
    return 0;
}
