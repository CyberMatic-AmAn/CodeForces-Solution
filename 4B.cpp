#include<bits/stdc++.h>
using namespace std;

int main()
{
    int d, sumTime, minTime[30], maxTime[30];
    cin >> d >> sumTime;
    for (int i = 0; i < d; ++i)
    {
        cin >> minTime[i] >> maxTime[i];
    }
    int minTimeSum = accumulate(minTime, minTime + d, 0);
    int maxTimeSum = accumulate(maxTime, maxTime + d, 0);
    if (minTimeSum <= sumTime && sumTime <= maxTimeSum)
    {
        cout << "YES" << endl;
        for (int i = 0; i < d; ++i)
        {
            int t = min(minTime[i] + sumTime - minTimeSum, maxTime[i]);
            if (i + 1 < d) {
                cout << t << " ";
            } else {
                cout << t << endl;
            }
            sumTime -= (t - minTime[i]);
        }
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
