#include <iostream>
#include <map>
#include <queue>
using namespace std;

typedef unsigned long long LL;
typedef pair<LL, LL> pll;

map<LL, int> visitedNumbers;
LL n, m, maxNumber = 1;
LL digitFlags[11];

int bfs(LL s)
{
    queue<pll> q;
    q.push(make_pair(s, 0));

    while (!q.empty())
    {
        pll now = q.front();
        q.pop();

        if (now.first == 0)
            return now.second;

        if (visitedNumbers[now.first])
            continue;

        visitedNumbers[now.first] = now.second;

        LL temp = now.first, len = 0;
        while (temp)
        {
            digitFlags[temp % 10] = 1;
            temp /= 10;
            len++;
        }

        if (len >= n)
            return now.second;

        for (int i = 2; i <= 9; i++)
        {
            if (digitFlags[i])
                q.push(make_pair(now.first * i, now.second + 1));
        }

        for (int i = 0; i <= 9; i++)
            digitFlags[i] = 0;
    }

    return -1;
}

int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        maxNumber *= 10;
    cout << bfs(m) << endl;

    return 0;
}
