#include<iostream>
#include<map>
#include<string>
using namespace std;

//map does not have repeated keys but multi-map can have same keys for different values

//All the operations in Map and multi map are in O(log n) time

int main(){
    multimap<char, string> m;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        char key;
        string val;
        cin>>key>>val;
        m.insert(make_pair(key,val));
    }

    //print the map
    cout<<endl<<"Map- "<<endl;
    for(auto it=m.begin();it!=m.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
    cout<<endl;

    auto it2 = m.lower_bound('b');
    auto it3 = m.upper_bound('c');
    for(auto it4=it2; it4!=it3;it4++){
        cout<<it4->first<<"->"<<it4->second<<endl;
    }

    //find and delete
    auto f = m.find('b');
    if(f->second=="ball"){
        m.erase(f->first);
    }

    //using the for each loop
    cout<<endl<<"Map- "<<endl;
    for(auto it:m){
        cout<<it.first<<" "<<it.second<<endl;
    }
}   