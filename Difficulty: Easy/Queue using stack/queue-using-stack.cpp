class myQueue {
    stack<int> input;
    stack<int> output;
    int peekele = -1;

public:
    myQueue() {}

    void enqueue(int x) {
        if (input.empty() && output.empty()) {
            peekele = x; // first element becomes front
        }
        input.push(x);
    }

    void dequeue() {
        if (input.empty() && output.empty()) return;

        if (output.empty()) {
            // Transfer all elements from input to output
            while (!input.empty()) {
                output.push(input.top());
                input.pop();
            }
        }

        output.pop();

        // Update peekele correctly
        if (!output.empty()) {
            peekele = output.top();
        } else if (!input.empty()) {
            // The "front" will be the oldest element in input.
            // To get it without extra space, just store it during next enqueue.
            // (peekele will be updated on next enqueue automatically)
            stack<int> temp = input;
            while (temp.size() > 1) temp.pop();
            peekele = temp.top();
        } else {
            peekele = -1; // queue became empty
        }
    }

    int front() {
        if (input.empty() && output.empty()) return -1;
        if (!output.empty()) return output.top();
        return peekele;
    }

    int size() {
        return input.size() + output.size();
    }
};
