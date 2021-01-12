#include<iostream>
#include<set>
using namespace std;

//Multi Set can store elements with same values, it uses a BST
//elements are stored in a specefic order according to internal sorting object
//values once insertng can't be modified
// associative container - elements referre by value, not by index

typedef multiset<int>::iterator dtype;

int main(){
    int arr[] = {4,7,3,8,8,8,6,9};
    multiset<int> m(arr,arr+6);

    //insert
    m.insert(90);

    //remove
    m.erase(7);

    //count
    cout<<"Count- "<<m.count(8)<<endl;

    //find
    auto it = m.find(7);
    cout<<"Find- "<<*it<<endl;

    pair<dtype,dtype> range = m.equal_range(8);

    for(dtype it=range.first;it!=range.second;it++){
        cout<<*it<<" ";
    }

    cout<<endl<<endl;

    //lower bound and upperbound functions are also there
    //they return iterator to that position

    //iterate
    for(auto it:m){
        cout<<it<<endl;
    }
}