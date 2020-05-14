#include<iostream>
#include<functional>
#include<map>
#include<string>
using namespace std;
int main(){
  map<int, string,greater<int> > m;
  m[1]="one";
  m[2]="two";
  m[4]="four";
  m[3]="three";

  for (map<int,string,greater<int> >::iterator i=m.begin();i!=m.end();i++) {
    cout<<"("<<i->first<<","<<i->second<<")"<<endl;
  }
}
