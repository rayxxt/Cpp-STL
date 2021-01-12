#include<iostream>
#include<set>
using namespace std;

//Set is used to store unique elements.
//Internally it used Red Black tree therefore operations take O(log n) time.

int main(){
    set<int> s;
    int arr[] = {2,6,56,3,9};
    int n = sizeof(arr)/sizeof(int);

    for(int i=0;i<n;i++){
        s.insert(arr[i]);
    }

    //remove element
    s.erase(9);

    auto it = s.find(6);
    s.erase(it);

    //iterating over elements
    for(set<int>::iterator it=s.begin();it!=s.end();it++){
        cout<<*it<<endl;
    }

}