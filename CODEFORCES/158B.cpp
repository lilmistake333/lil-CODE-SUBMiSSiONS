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
    vector<int> v(5);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v[x]++;
    }
    int ans = v[4];
    ans += v[3];
    if (v[1] < v[3])
        v[1] = 0;
    else
        v[1] = v[1] - v[3];
    ans += v[2] / 2;
    if (v[2] % 2)
    {
        ans++;
        v[2] = 0;
        if (v[1] >= v[2])
            v[1] = v[1] - 2;
        else
            v[1] = 0;
    }
    ans += ceil(v[1] / 4.0);
    cout << ans;
}

// || ------------------------------------------------- || //

int main()
{
    _l __i ___l

        ___OTC_SOLN;

    ___THE_END;
}
