#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int smallest_element(priority_queue<int,vector<int>, greater<int>>& pq, int k) {

 

    for (int i = 1; i < k; ++i) {
        pq.pop();
    }
    return pq.top();
}

 

int main() {
    priority_queue<int, vector<int>,greater<int>> priority_queue;
    priority_queue.push(3);
    priority_queue.push(2);
    priority_queue.push(4);
    priority_queue.push(1);
    priority_queue.push(5);
    priority_queue.push(6);
    int k ;
    cout<<"enter a value:";
    cin>>k;
    int result =smallest_element(priority_queue, k);
      cout << "The " << k << "th smallest element is: " << result << endl;

 

    return 0;
}