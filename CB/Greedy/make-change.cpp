#include <bits/stdc++.h>
using namespace std;

int make_change(int coins[], int n, int money)
{
    int ans = 0;

    while (money > 0)
    {
        int idx = upper_bound(coins, coins + n, money) - 1 - coins;
        cout << coins[idx] << "+";
        money -= coins[idx];
        ans++;
    }
    cout << endl;
    return ans;
}

int main()
{
    int t = 39;
    int coins[] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 2000};
    int n = 9;

    cout << make_change(coins, n, t) << endl;
}