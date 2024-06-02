#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,a,j;
    cout<<"Program for selection Sort..."<<endl;
    cout<<"Enter the number of elements:";
    cin>>n;
    int ar[n];
    cout<<"\nEnter the  elements:";
    for(int i=0; i<n; i++)
    {
        cin>>ar[i];
    }
    for (int i = 1; i < n; i++)
    {
        a = ar[i];
        j = i - 1;
        while (j >= 0 && ar[j] > a)
        {
            ar[j + 1] = ar[j];
            j = j - 1;
        }
        ar[j+1] = a;
    }
     cout << "Sorted array: \n";
    for (i=0; i < n; i++)
        cout << ar[i] << " ";
    cout << endl;
    return 0;
}


