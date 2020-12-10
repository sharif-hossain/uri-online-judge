#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    double x1, y1, x2, y2, v, r1, r2, dx, dy, dist, range;
    cin >> x1 >> y1 >> x2 >> y2 >> v >> r1 >> r2;

    dx = (x2-x1) * (x2 - x1);
    dy = (y2 - y1) * (y2 - y1);

    dist = sqrt(dx + dy);

    dist += v * 1.50;

    range = r1 + r2;

     cout<<((dist <= range)? "Y"  : "N") << endl;

    return 0;
}
