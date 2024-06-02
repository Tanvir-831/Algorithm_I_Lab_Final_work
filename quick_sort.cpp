#include <bits/stdc++.h>
#include<iostream>
using namespace std;
int a[]={15,22,62,11,32,42};
int par(int l, int r)
{
int pivotindex=l;
while(l!=r)
{
if(pivotindex==l)
{
if(a[pivotindex]<a[r])
{
r--;
}
else
{
swap(a[pivotindex],a[r]);
pivotindex=r;
}
}
else
{
if(a[l]<a[pivotindex])
{
l++;
}
else
{
swap(a[pivotindex],a[l]);
pivotindex=l;
}
}
}
return l;
}
void qs(int l, int r)
{
if(l>=r) return;
int mid=par(l,r);
qs(l,mid-1);
qs(mid+1,r);
}
int main()
{
cout<<endl<<"Before Shorting"<<endl;
for(int i=0;i<6;i++)
{
cout<<a[i]<<" ";
}
cout<<endl<<"After Shorting"<<endl;
qs(0,5);
for(int i=0;i<6;i++)
{
cout<<a[i]<<" ";
}
return 0;
}

