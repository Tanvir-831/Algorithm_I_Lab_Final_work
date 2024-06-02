#include <bits/stdc++.h>
using namespace std;
int main()
{
int a[1001],i,j,n;
cin>>n;
for (i=0;i<n;i++)
{
cin>>a[i];
}
for (i = 0; i < n - 1; i++){
for (j = 0; j < n - i - 1;
j++){
if (a[j] > a[j + 1]){
swap(a[j],a[j + 1]);
}
}
}
cout << "Sorted array: "<<endl;
for (i=0;i<n;i++)
{
cout<<a[i]<<" ";
}
return 0;
}
