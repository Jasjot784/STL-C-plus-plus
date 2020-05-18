#include<iostream>
#include<ios>
#include<regex>
#include<string>
using namespace std;
int main(){
  cout<<boolalpha;
  const regex r("a(b+)(c+)d");

  for(string s;getline(cin,s);){
    smatch m;
    const bool b = regex_match(s,m,r);
    cout<<b<<endl;

    if(b){
      cout<<m[0]<<endl;
      cout<<m[1]<<endl;
      cout<<m[2]<<endl;
    }
  }
  cout<<endl;
}
