//List is like a doubly linked list

#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int> l{1,4,5,3,7,6};
    l.push_back(8);

    // we can also make list<string>

    //sorting
    l.sort();

    //reverse
    l.reverse();

    //remove the front element
    l.front(); //to check element at the front
    l.pop_front();

    //remove from back
    l.back(); // to check element at the back
    l.pop_back();

    //iterating using iterators
    for(list<int>::iterator it=l.begin();it!=l.end();it++){ //we can also use auto here
        cout<<*it<<" ";
    }

    //iterate over the list
    // for(auto i:l){
    //     cout<<i<<" ";
    // }
}