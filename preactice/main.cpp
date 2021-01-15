#include <bits/stdc++.h>

using namespace std;

int main()
{
    int h, m;
    while (cin >> h >> m)
    {
        vector<double> v;
        v.clear();
        double sum = 0, x;
        int k = (h*60)/m;
        for (int i = 0; i < k; i++)
        {
            cin >> x;
            sum += x;
            v.push_back(x);
        }
        double media = (double)sum/k, sum2 = 0;
        for (int i = 0; i < v.size(); i++) sum2 += pow(v[i]-media, 2);
        printf("%.5lf\n", sqrt((double)sum2/(k-1)));
    }
return 0;
}
