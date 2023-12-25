#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    queue<string> q;
    while (t--)
    {
        int x;
        string n;
        cin >> x;
        if (x == 0)
        {
            cin >> n;
            q.push(n);
        }
        else
        {
            if (q.empty())
            {
                cout << "Invalid" << endl;
            }
            else
            {
                cout << q.front() << endl;
                q.pop();
            }
        }
    }

    return 0;
}
