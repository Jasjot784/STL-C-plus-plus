#include<iostream>
#include<memory>
using namespace std;
int main(){
  shared_ptr<int> sp(new int(1234));
  shared_ptr<int> sp2(sp);
  cout<<*sp<<endl;
  cout<<*sp2<<endl;

  cout<<"done"<<endl;
}
