#include <iostream>
#include <vector>
using namespace std;
int kadane(int a[], int n)
{
    int ans = a[0], cur_sum = a[0];
    for (int i = 1; i < n; i++)
    {
        cur_sum = max(cur_sum + a[i], cur_sum);
        ans = max(ans, cur_sum);
    }
    return ans;
}
int main()
{
    int n = 7, i, j;
    int a[7] = {8, -8, 9, -9, 10, -11, 12};

    cout << kadane(b, 2 * n - 1);
}