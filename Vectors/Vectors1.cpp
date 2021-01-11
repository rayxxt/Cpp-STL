#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> a;
    vector<int> b(5,10); // vector with 5 int elements with value 10
    vector<int> c(b.begin(), b.end()); //copying a vector
    vector<int> d{1,2,3,4,5,6,7}; //initialised a vector with all these elements

    //iterate over the elements of the array
    for(int i=0;i<c.size();i++){
        cout << c[i] << " ";
    }
    cout<<endl;

    for(auto it=b.begin();it!=b.end();it++){ //if we want to replce auto here, we use the iterator from the vector class which is initialised as 'vector<int>::iterator'
        cout<<*it<<" ";
    }
    cout<<endl;

    for(vector<int>::iterator it=b.begin();it!=b.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;


    d.push_back(12);
    for(int v: d){
        cout<<v<<" ";
    }
    cout<<endl;

    //some more functions
    cout<<d.size()<<endl;
    cout<<d.capacity()<<endl;
    cout<<d.max_size()<<endl;
}