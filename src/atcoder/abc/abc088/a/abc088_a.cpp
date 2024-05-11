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
    int n, a, x;
    cin >> n >> a;
    x = n % 500;
    if (x <= a)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}