#include<iostream>
#include<memory>
#include<utility>
using namespace std;
int main(){
  unique_ptr<int> up(new int(1729));
  cout<<*up<<endl;

  unique_ptr<int> up2 = move(up);
  //unique_ptr<int> up2(up)//error

  if(up){
    cout<<"unexpected"<<endl;
  }else{
    cout<<"yay"<<endl;
  }
  cout<<*up2<<endl;
  cout<<"done"<<endl;
}
