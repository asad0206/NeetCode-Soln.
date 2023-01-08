//https://leetcode.com/problems/min-stack/
#include<bits/stdc++.h>
using namespace std;

class MinStack {
public:
    stack<int> stk;
    stack<int> min;
    MinStack() {
        
    }
    
    void push(int val) {
        if(min.empty()) {
            stk.push(val);
            min.push(val);
        }
        else {
            stk.push(val);
            if(val<=min.top()){
                min.push(val);
            }
        }
    }
    
    void pop() {
        if(!min.empty()){
            if(stk.top()==min.top()){
                min.pop();
            }
            stk.pop();
        }
    }
    
    int top() {
        return stk.top();
    }
    
    int getMin() {
        return min.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */