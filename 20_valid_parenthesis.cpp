// https://leetcode.com/problems/valid-parentheses/description/

#include <bits/stdc++.h>
using namespace std;

// Oms soln
class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> p;
        p.push('a');
        for (auto a : s)
        {
            if (a == '(' || a == '{' || a == '[')
            {
                p.push(a);
            }
            else if ((a == ')' && p.top() == '(') ||
                     (a == '}' && p.top() == '{') ||
                     (a == ']' && p.top() == '['))
            {
                p.pop();
            }
            else
            {
                return false;
            }
        }
        bool result = (p.size() != 1) ? false : true;
        return result;
    }
};

/*6ms soln whichi did first and then i saw ppl giving 0ms solutions so i copied them
i was a fool to check for every corner case :)
class Solution {
public:
    bool isValid(string s) {
        stack<char> p;
        for(auto a: s){
            if(p.empty() && (a == ')' || a == ']' || a == '}')){
                return false;
            }
            else if(a=='(' || a=='{' || a=='['){
                p.push(a);
            }
            else if((a==')' && p.top()=='(') ||
            (a=='}' && p.top()=='{') ||
            (a==']' && p.top()=='[')){
                p.pop();
            }
            else{
                return false;
            }
        }
        return p.empty();
    }
};*/