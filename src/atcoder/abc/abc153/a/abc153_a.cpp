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

int main () {
    int h, a;
    cin >> h >> a;
    if (h % a == 0) {
        cout << h / a << endl;
    } else {
        cout << h / a + 1 << endl;
    }
}