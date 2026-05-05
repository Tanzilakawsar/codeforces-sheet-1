#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
int n,n1,n2;
cin>>n;
cout<<(n/365)<<" years"<<endl;
n1=n%365;
cout<<(n1/30)<<" months"<<endl;
n2=n1%30;
cout<<n2<<" days"<<endl;
return 0;
}
