#include <bits/stdc++.h>
using namespace std;
int main()
{
int ar[1001],n,i,j,k;
cout<<"Enter the Number of Index:"<<endl;
cin>>n;
cout<<"Enter the Unsorted Array:"<<endl;
for(i=0;i<n;i++)
{
cin>>ar[i];
}
for (i=1;i<n;i++)
{
k=ar[i];
j = i - 1;
while (j >= 0 && ar[j]>k)
{
ar[j + 1] = ar[j];
j = j - 1;
}
ar[j + 1]=k;
}
cout<<"After Sort:"<<endl;
for (int i = 0; i < n; i++)
{
cout << ar[i] << " ";
}
return 0;
}

