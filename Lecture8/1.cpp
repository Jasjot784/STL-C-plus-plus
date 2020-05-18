#include<iostream>
#include<ios>
#include<regex>
#include<string>
using namespace std;
int main(){
  cout<<boolalpha;
  const regex r("ab+c");

  for(string s;getline(cin,s);){
    cout<<regex_match(s,r)<<endl;
    cout<<endl;
  }
}
