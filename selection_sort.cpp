#include <bits/stdc++.h>
using namespace std;
void s_sort(int a[],int n)
{
int i, j,min_idx;
for(i=0;i<n-1;i++)
{
min_idx = i;
for (j = i+1; j < n; j++)
if (a[j] < a[min_idx])
min_idx = j;
if(min_idx!=i)
swap(a[min_idx],a[i]);
}
}
int main()
{
int a[1001],n,i;
cin>>n;
for(i=0;i<n;i++)
{
cin>>a[i];
}
s_sort(a,n);
cout << "Sorted array is: \n";
for (i=0;i<n;i++)
{
cout <<a[i]<< " ";
}
return 0;
}

