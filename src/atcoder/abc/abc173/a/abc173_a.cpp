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
    int n;
    cin >> n;
    if (n % 1000 == 0)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << 1000 - n % 1000 << endl;
    }
}