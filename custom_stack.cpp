#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
template <class T>
class CustomStack {
private:
    vector<T> data;

public:
    void push(const T& value) {
        data.push_back(value);
    }

    void pop() {
        if (!data.empty()) {
            data.pop_back();
        }
    }
    T& top()  {
        if (!data.empty()) {
            return data.back();
        }
        
    }

    bool empty() {
        return data.empty();
    }

    size_t size() const {
        return data.size();
    }

};

int main() {
    CustomStack<int> myStack;

    myStack.push(10);
    myStack.push(20);
    myStack.push(30);
    myStack.push(40);
    myStack.push(50);
    cout << "Stack size: " << myStack.size() << endl;
    cout << "Top element: " << myStack.top() << endl;

    myStack.pop();
    cout << "Stack size after pop: " << myStack.size() <<endl;
    cout << "Top element after pop: " << myStack.top() << endl;

    if (myStack.empty()) {
        cout << "Stack is empty." << endl;
    } else {
        cout << "Stack is not empty." <<endl;
    }
    return 0;
}