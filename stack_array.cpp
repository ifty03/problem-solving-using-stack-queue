#include <bits/stdc++.h>
using namespace std;

class Stack
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
    };
    void top()
    {
        v.back();
    };
    int size()
    {
        v.size();
    };
    bool empty()
    {
        return v.empty();
    };
};

int main()
{

    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    while (!st.empty()){

    }

    return 0;
}
