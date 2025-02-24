#include <queue>
using namespace std;

class MyStack {
private:
    queue<int> q1, q2;

public:
    MyStack() {}

    void push(int x) {
        q2.push(x); // Push the element into the empty q2
        while (!q1.empty()) {
            q2.push(q1.front()); // Transfer all elements from q1 to q2
            q1.pop();
        }
        swap(q1, q2); // Swap q1 and q2 to maintain the stack order in q1
    }

    int pop() {
        int topElement = q1.front(); // Get the top element
        q1.pop(); // Remove it from q1
        return topElement;
    }

    int top() {
        return q1.front(); // Return the top element
    }

    bool empty() {
        return q1.empty(); // Check if q1 is empty
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
