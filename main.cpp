#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = int64_t;
using vl = vector<ll>;

ll t, p, q;
vl dp;

ll solve(ll n, ll mod, ll a, ll b) {
  if (1 == n) {
    return a % mod;
  }

  return solve(n - 1, mod, b % mod, (a + b) % mod);
}

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  cin >> t;
  for (auto i = 1; i <= t; ++i) {
    cout << "Case #" << i << ": ";

    cin >> p >> q;
    cout << solve(p, q, 1, 1) << '\n';
  }

  return 0;
}