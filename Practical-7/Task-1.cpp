#include <iostream>
#include <string.h>
using namespace std;
int main(){
   string s1;
   string s2;
   int q;
   getline(cin,s1);
   getline(cin,s2);
   q=s1.compare(s2);
   if(q==0){
     cout<<"Equal";
   }
   else if(q>0){
     cout<<"s1 is greater";
   }
   else{
    cout<<"s2 is greater";
   }
}
