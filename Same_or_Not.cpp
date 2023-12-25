#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    stack<int> st;
    queue<int> q;
    int flag = 0;

    if (n == m)
    {
        while (n--)
        {
            int a;
            int b;
            cin >> a >> b;

            st.push(a);
            q.push(b);
        }

        while (!st.empty())
        {
            if (st.top() == q.front())
            {
                st.pop();
                q.pop();
            }
            else
            {
                flag = 1;
                break;
            }
        }
    }
    else
    {
        flag = 1;
    }

    if (flag)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }

    return 0;
}
