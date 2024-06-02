#include<bits/stdc++.h>
using namespace std;
int main()
{
int arr[1001],i,f,n,num,index;
cout<<"\nHow Many Numbers:";
cin>>n;
cout<<"\nEnter the Numbers: ";
for(i=0; i<n; i++)
{
cin>>arr[i];
}
cout<<"\nEnter a Number to Search:";
cin>>num;
for(i=0; i<n; i++)
{
if(arr[i]==num)
{
index = i+1;
f=0;
break;
}
}
if(f==0)
{
cout<<"\nFound at position :"<<index;
}
else{cout<<"\nNot Found!!!";}
cout<<endl;
}
