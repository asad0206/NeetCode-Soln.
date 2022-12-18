// https://leetcode.com/problems/evaluate-reverse-polish-notation/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int evalRPN(vector<string> &tokens)
    {
        stack<long long int> stk;
        for (auto x : tokens)
        {
            if (x == "+" || x == "-" || x == "*" || x == "/")
            {
                long long int up = stk.top();
                stk.pop();
                long long int down = stk.top();
                stk.pop();
                up = ((x == "+") ? down + up : (x == "-") ? down - up
                                           : (x == "*")   ? down * up
                                                          : down / up);
                stk.push(up);
            }
            else
            {
                stk.push(stoi(x));
            }
        }
        return stk.top();
    }
};