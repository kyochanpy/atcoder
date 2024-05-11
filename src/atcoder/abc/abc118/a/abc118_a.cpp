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
    if (b % a == 0)
    {
        cout << a + b << endl;
    }
    else
    {
        cout << b - a << endl;
    }
}