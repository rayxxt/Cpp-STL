#include<iostream>
#include<cstring>
#include<unordered_map>
using namespace std;

class Student{
public:
    string fname;
    string lname;
    int roll;

    Student(string fname, string lname, int roll){
        this->fname=fname;
        this->lname=lname;
        this->roll=roll;
    }

    bool operator==(const Student &s)const{
        return roll == s.roll;
    }
};

class HashFn{
public:
    size_t operator()(const Student &s)const{
        return s.fname.length() + s.lname.length(); 
    }
};

int main(){
    unordered_map<Student,int,HashFn> umap;

    Student s1("Pranav","Mendi",22);
    Student s2("Ram", "Sharma",56);
    Student s3("Shyam","Yadav",123);
    Student s4("Hello","world",13);

    //storing marks
    umap[s1]=100;
    umap[s2]=20;
    umap[s3]=76;
    umap[s4]=59;

    //finding the marks of a student
    cout<<umap[s2]<<endl;

    //iterating
    for(auto s:umap){
        cout<<s.first.fname<<" "<<s.first.lname<<" has got "<<s.second<<endl; //s is a pair
    }
}