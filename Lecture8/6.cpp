#include<iostream>
#include<ios>
#include<regex>
#include<string>
using namespace std;
int main(){
  cout<<boolalpha;
  const regex r("c+d+e+");
  const string fmt("MEOW");

  for(string s;getline(cin,s);){
    cout<<regex_replace(s,r,fmt)<<endl;
    cout<<endl;
}
}
