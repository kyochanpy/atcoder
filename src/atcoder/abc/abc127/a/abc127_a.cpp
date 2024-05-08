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
    int a, b;
    cin >> a >> b;
    if (a >= 13)
    {
        cout << b << endl;
    }
    else if (a <= 5)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << b / 2 << endl;
    }
}