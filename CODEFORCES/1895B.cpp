// || ------------------------------------------------- || //
// || -------   (CODE == ERROR) ? FIX ; CODE!   ------- || //
// || ------------------------------------------------- || //
// || ---------------   lilmistake333   --------------- || //
// || ----------   SOMEONE YOU SHOULD KNOW   ---------- || //
// || -------------   O Z O Z Z O O Z O   ------------- || //
// || ------------------------------------------------- || //

#include <bits/stdc++.h>
using namespace std;

// || ------------------------------------------------- || //

#define _l                      ios_base::sync_with_stdio(0);
#define __i                     cin.tie(0),
#define ___l                    cout.tie(0);

// || ------------------------------------------------- || //

#define ull                     unsigned long long
#define uin                     unsigned int
#define ll                      long long
#define db                      double

#define MIN                     INT_MIN
#define MAX                     INT_MAX

#define str                     string
#define ins                     insert
#define pb                      push_back
#define pf                      push_front
#define fs                      first
#define sc                      second
#define ft                      front()
#define bk                      back()
#define brk                     break
#define con                     continue

#define gcd(X, Y)               __gcd(X, Y)
#define lb(X, Y)                lower_bound(every(X), Y)
#define ub(X, Y)                upper_bound(every(X), Y)
#define src(X, Y)               binary_search(every(X), Y)

#define en                      endl
#define sz                      size()
#define C(X)                    cout << X
#define CE(X)                   cout << X << en
#define every(X)                X.begin(), X.end()
#define f(X)                    for (int i = 0; i < X; i++)

// || ------------------------------------------------- || //

#define ___TC                   ll t; cin >> t;
#define ___MTC_SOLN             ___TC while (t--) lilm333 ( )
#define ___OTC_SOLN             lilm333 ( )
#define ___THE_END              return 0

// || ------------------------------------------------- || //

void lilm333()
{
    int n;
    cin >> n;
    int N = n * 2;
    vector<int> v;
    for (int i = 0; i < N; i++)
    {
        int x;
        cin >> x;
        v.pb(x);
    }
    sort(every(v));
    vector<int> v1, v2;
    for (int i = 1; i <= N / 2; i++)
        v1.pb(v[i - 1]);
    for (int i = (N / 2) + 1; i <= N; i++)
        v2.pb(v[i - 1]);
    int ans1 = 0, ans2 = 0;
    for (int i = 0; i < N / 2 - 1; i++)
    {
        ans1 += abs(v2[i] - v2[i + 1]);
        ans2 += abs(v1[i] - v1[i + 1]);
    }
    cout << ans1 + ans2 << en;
    for (int i = 0; i < N / 2; i++)
        cout << v2[i] << " " << v1[i] << en;
}

// || ------------------------------------------------- || //

int main()
{
    _l __i ___l

        ___MTC_SOLN;

    ___THE_END;
}
