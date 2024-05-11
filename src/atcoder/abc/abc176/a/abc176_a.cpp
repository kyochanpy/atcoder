#pragma GCC optimize("Ofast")

#include <algorithm>
#include <climits>
#include <cmath>
#include <cstdio>
#include <functional>
#include <iostream>
#include <iterator>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int n, x, t;
    cin >> n >> x >> t;
    if (n % x == 0)
    {
        cout << n / x * t << endl;
    }
    else
    {
        cout << (n / x + 1) * t << endl;
    }
}