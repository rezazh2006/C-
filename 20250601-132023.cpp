#include<iostream>
using namespace std;

int main()
{
   // cout << "Hello World!" << endl;
   int a,n;
   bool isprime=true;
   cout<<"enternumber:";
   cin>>n;
   if(n<=1){
   isprime=false;}
   else{
   for(int i=2;i*i<=n;i++){
   if(n % i==0){
   isprime=false;
   break;
   }
   }
   }
   if(isprime)
   cout<<"is the prime number:\t"<<n;
   else
   cout<<"it is not a prime number\t"<<n;
    return 0;
}