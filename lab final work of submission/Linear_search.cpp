#include<iostream>
using namespace std;
int main()
{
    cout<<"Program for Linear Search..."<<endl;
    cout<<endl;
    int n;
    cout<<"Enter total number of elements: ";
    cin>>n;
    cout<<"Enter "<<n<< " numbers: ";
    int arr[n];
    int i, num, index;
    for(i=0; i<n; i++)
        cin>>arr[i];
    cout<<"\nEnter a Number to Search: ";
    cin>>num;
    for(i=0; i<10; i++)
    {
        if(arr[i]==num)
        {
            index = i+1;
            break;
        }
    }
    cout<<"\nFound at Index No. "<<index;
    cout<<endl;
    return 0;
}
