#include<iostream>
#include<queue>
using namespace std;

int main(){
    priority_queue<int> pq;
    pq.push(10);
    pq.push(4);
    pq.push(20);
    pq.push(1);

    while(!pq.empty()){
    cout << pq.top() << " ";
    pq.pop();
    }
}