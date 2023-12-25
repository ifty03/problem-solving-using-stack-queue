#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;
        queue<char> st;
        for (int i = 0; i < s.size(); i++)
        {

            if (st.empty())
            {
                st.push(s[i]);
            }
            else
            {
                if (s[i] == '0')
                {
                    if (st.front() == '1')
                    {
                        st.pop();
                    }
                    else
                    {
                        st.push(s[i]);
                    }
                }
                else if (s[i] == '1')
                {
                    if (st.front() == '0')
                    {
                        st.pop();
                    }
                    else
                    {
                        st.push(s[i]);
                    }
                }
            }
        }

        if (st.empty())
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    // stack<int> st;

    return 0;
}
