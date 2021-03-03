#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
long long int kadane(const std::vector<long long int> &a, long long int n)
{
    long long int currentSum = a[0], ans = a[0];
    for (long long int i = 1; i < a.size(); i++)
    {
        currentSum = max(a[i], currentSum + a[i]);
        ans = max(ans, currentSum);
    }
    return ans;
}
int main()
{
    long long int n, k, t, x;
    cin >> t;
    while (t--)
    {
        long long int flag = 0, s = 0;
        cin >> n >> k;
        vector<long long int> a;
        for (long long int i = 0; i < n; i++)
        {
            cin >> x;
            s += x;
            a.push_back(x);
        }
        if (k == 1)
        {
            cout << kadane(a, a.size()) << endl;
        }
        else
        {
            for (long long int i = 0; i < n; i++)
            {
                a.push_back(a[i]);
            }
            long long int ans = kadane(a, a.size());
            if (s <= 0)
                cout << ans << endl;
            else
                cout << ans + s * (k - 2) << endl;
        }
    }
}