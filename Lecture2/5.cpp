#include<iostream>
 #include<algorithm>
 #include<vector>
 using namespace std;
 int main(){
   vector<int> v;
   v.push_back(11);
   v.push_back(22);
   v.push_back(33);
   v.push_back(44);
   v.push_back(55);

   v.erase(remove_if(v.begin(),v.end(),
 [](int e){
   return e%2 == 1;
 }),v.end());

   for (vector<int>::iterator i=v.begin();i!=v.end();i++) {
     cout<<*i<<endl;
   }
 }
