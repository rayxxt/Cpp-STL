#include<iostream>
#include<list>
using namespace std;

int main(){
    list<string> l{"orange","mango","banana","pineapple","apple"};
    l.sort();

    for(auto i:l){
        cout<<i<<" ";
    }
    cout<<endl;

    //remove a particular element by name
    string f;
    cin>>f;
    l.remove(f);

    for(auto i:l){
        cout<<i<<" ";
    }
    cout<<endl;

    //removing element by index
    list<string>::iterator it = l.begin(); //we can use auto as data type
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        it++;
    }
    l.erase(it);
    
    for(auto i:l){
        cout<<i<<" ";
    }

    //inserting at a particular position
    it = l.begin();
    cin>>n;
    for(int i=0;i<n;i++){
        it++;
    }
    l.insert(it,"grapes");

    for(auto i:l){
        cout<<i<<" ";
    }
}