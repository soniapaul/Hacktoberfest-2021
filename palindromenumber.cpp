#include<iostream>
using namespace std;
int main(){
  int n,d,rev=0;
  cout<<"Enter the number:";
  cin>>n;
  int a=n;
  while(n!=0){
    d=n%10;
    rev=rev*10+d;
    n=n/10;
  }
 if(rev==a)
 cout<<"Palindrome Number...";
 else
 cout<<"Not a Palindrome Number...";
 
 return 0;
  
}
