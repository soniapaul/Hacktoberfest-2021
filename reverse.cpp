#include<iostream>
using namespace std;
int main(){
 int n,d,rev=0;
  cout<<"Enter the number:";
  cin>>n;
  while(n!=0){
    d=n%10;
    rev=rev*10+d;
    n=n/10;
  }
  cout<<"The reversed number is:"<<rev;
}
