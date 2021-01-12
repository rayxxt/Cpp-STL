#include<iostream>
#include<map>
#include<string>
using namespace std;

int main(){
    map<string, int> m;
    
    string name;
    int price;
    cin>>name>>price;

    //insert- elements are inserted in pairs
    m.insert(make_pair(name,price));

    pair<string, int> p; //using the pair class
    p.first=name; //first and second are default params 
    p.second=price;
    m.insert(p);

    //search
    string key;
    cin>>key;
    auto it = m.find(key); //data type of the iterator - map< string, int >::iterator
    if(it!=m.end()){
        cout<<"price of "<<key<<" is "<<m[key]<<endl;
    }
    //data for unique keys can only be stored once

    if(m.count(key)){ //returns an int
        cout<<"Price of "<<key<<" is "<<m[key]<<endl;
    }

    //updating the value
    m[key]= 130;

    //deleting a key value pair
    m.erase(key);

    //adding key value pairs
    m["apple"] = 10;
    m["mango"]= 20;
    m["pineapple"] = 30;

    //iterating over the elements
    for(auto it=m.begin();it!=m.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
        // cout<<(*it).first<<" "<<(*it).second<<endl;
    }

    //for each loop
    for(auto p:m){
        cout<<p.first<<" "<<p.second<<endl;
    }
}