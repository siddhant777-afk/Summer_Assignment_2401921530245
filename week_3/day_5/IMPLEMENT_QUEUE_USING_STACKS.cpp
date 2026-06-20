class MyQueue {
public:
    stack<int> st;
    stack<int> st1;
    MyQueue() {}

    void push(int x) { st.push(x); }

    int pop() {
        peek();
        int num = st1.top();
        st1.pop();
        return num;
    }

    int peek() {
        if (st1.empty()) {
            while (!st.empty()) {
                st1.push(st.top());
                st.pop();
            }
        }
        return st1.top();
    }

    bool empty() { return st.empty() && st1.empty(); }
};