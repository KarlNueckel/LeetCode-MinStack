class MinStack {
public:
    vector <int> smack;
    MinStack() {
    }
    
    void push(int val) {
        smack.push_back(val);
    }
    
    void pop() {
        smack.pop_back();
    }
    
    int top() {
        auto it = smack.rbegin();
        return *it;
    }
    
    int getMin() {
        return *min_element (smack.begin(), smack.end());
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