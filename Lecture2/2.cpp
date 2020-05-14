#include<iostream>
#include<map>
#include<string>
using namespace std;

void foo(const map<int,string>& m){
  // m[7] = "Seven" ;//error
  // cout<<m[3]<<endl; //error

  map<int,string>::const_iterator i =m.find(3);


  if(i==m.end()){
    cout<<"Not found"<<endl;
  }
  else{
    cout<<i->second<<endl;
  }
}
int main(){
  map<int, string> m;
  m[1]="one";
  m[2]="two";
  m[4]="four";
  m[3]="three";

  foo(m);
  }
