#include<iostream>
#include<queue>
#include<vector>
using namespace std;

class Person{
public:
    int age;
    string name;

    Person(string n,int a){
        name = n;
        age = a;
    }
};

class PersonCompare{
public:
    bool operator()(Person a,Person b){
        return a.age > b.age;
    }
};

int main(){
    priority_queue<Person, vector<Person>, PersonCompare > pq;

    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string n;
        int a;
        cin>>n>>a;
        Person p(n,a);
        pq.push(p);
    }
    cout<<endl;
    
    while(!pq.empty()){
        Person p = pq.top();
        cout<<p.name<<" "<<p.age<<endl;
        pq.pop();
    }
}