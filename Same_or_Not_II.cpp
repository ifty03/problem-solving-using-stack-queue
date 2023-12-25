#include <bits/stdc++.h>
using namespace std;

class MyStack
{
public:
    vector<int> v;
    void push(int val)
    {
        v.push_back(val);
    };

    void pop()
    {
        v.pop_back();
    }

    int top()
    {
        return v.back();
    }

    int size()
    {
        return v.size();
    }

    bool isEmpty()
    {
        return v.empty();
    }
};

class MyQueue
{
public:
    list<int> v;
    void push(int val)
    {
        v.push_back(val);
    };

    void pop()
    {
        v.erase(v.begin());
    }

    int front()
    {
        return v.front();
    }

    int size()
    {
        return v.size();
    }

    bool isEmpty()
    {
        return v.empty();
    }
};

int main()
{
    int n, m;
    cin >> n >> m;

    MyStack st;
    MyQueue q;
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

        while (!st.isEmpty())
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

    if (flag == 1)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }

    return 0;
}
