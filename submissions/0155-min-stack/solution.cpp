class MinStack {
public:

    stack<int,vector<int>> values;
    stack<int,vector<int>> minimums;

    MinStack() {

    }
    
    void push(int value) {
     values.push(value);
        if(minimums.empty()) minimums.push(value);
        else minimums.push(min(value,minimums.top()));
        
    }
    
    void pop() {
     values.pop();
        minimums.pop();
    }
    
    int top() {
        return values.top();
    }
    
    int getMin() {
        return minimums.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
