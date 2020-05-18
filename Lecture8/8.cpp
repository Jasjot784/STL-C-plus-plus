#include<iostream>
#include<ios>
#include<regex>
#include<string>
using namespace std;
int main(){
  cout<<boolalpha;
  const regex r("c+d+e+");

  for(string s;getline(cin,s);){
    for(sregex_iterator i(s.begin(),s.end(),r),end;i!=end;++i){
      cout<<(*i)[2]<<endl;
    }
    cout<<endl;
}
}
