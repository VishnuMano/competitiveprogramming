#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        /*
        50 7
        */

        int x, y, xSpots, baseLine;
        cin >> x >> y;
        baseLine = ceil(static_cast<double>(y)/2);
        if(y == 0)
        {
            cout << ceil(static_cast<double>(x)/15) << endl;
            continue;
        } else if (x == 0)
        {
            cout << baseLine << endl;
            continue;
        } else if (y % 2 == 0)
            xSpots = baseLine * 7;
        else if (y % 2 != 0)
            xSpots = ((baseLine - 1) * 7) + 11 + (2 * baseLine);
        
        if(x <= xSpots)
        {
            cout << baseLine << endl;
            continue;
        }
        else if (x > xSpots)
        {
            cout << baseLine + ceil(static_cast<double>((x%xSpots))/15) << endl;
            continue;
        }
    }
}