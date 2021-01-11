//Priority Queue (Heap)
//Push - O(log n)
//Pop - O(log n)
//Top- O(1)

#include<iostream>
#include<queue>
using namespace std;

int main(){
    // priority_queue<int> pq; //max heap by default

    priority_queue<int, vector<int>, greater<int> > pq; //min heap

    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        pq.push(num);
    }

    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }
}