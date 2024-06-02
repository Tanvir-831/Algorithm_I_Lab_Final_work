#include <bits/stdc++.h>
using namespace std;
int binarySearch(int array[], int x,int low, int high)
{
while (low <= high)
{
int mid = low + (high - low) /2;
if (array[mid] == x)
return mid;
if (array[mid] < x)
low = mid + 1;
else
high = mid - 1;
}
return -1;
}
int main() {
int array[1001],x,n;
cout<<"Enter the size of the Array:"<<endl;
cin>>n;
cout<<"Enter the array"<<endl;
for(int i=0;i<n;i++)
{
cin>>array[i];
}
cout<<"Enter the Target element"<<endl;
cin>>x;
int result = binarySearch(array,x, 0, n-1);
if (result == -1)
cout<<"Not found"<<endl;
else
cout<<"Element is found at position: "<<result+1<<endl;
return 0;
}

