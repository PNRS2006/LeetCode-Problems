class MyStack {
public:
    queue<int>s;
    MyStack() {
    }
    
    void push(int x) {
        s.push(x);
        int n = s.size();
        while(n>1){
            s.push(s.front());
            s.pop();
            n--;
        }
    }
    
    int pop() {
        int k = s.front();
        s.pop();
        return k;
    }
    
    int top() {
        return s.front();
    }
    
    bool empty() {
        return s.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */