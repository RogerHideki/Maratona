class MyQueue {
public:
    stack<int> stackFront, stackBack;

    MyQueue() {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
    }

    void push(int x) {
        stackBack.emplace(x);
    }

    int pop() {
        int front = peek();
        stackFront.pop();
        return front;
    }

    int peek() {
        if (stackFront.empty()) {
            while (!stackBack.empty()) {
                stackFront.emplace(stackBack.top());
                stackBack.pop();
            }
        }
        return stackFront.top();
    }

    bool empty() {
        if (stackFront.empty() && stackBack.empty()) return true;
        return false;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */