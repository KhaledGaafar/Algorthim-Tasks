/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"please enter number of array elements    " ;
    cin >>n;
    int arr [n];
    cout<<"please enter elements   ";
    //input element in array
    for(int c=0;c<n;c++)
    {
        cin>>arr[c];
    }
    // sorted array by insertion sort algorthim
    for(int j=2;j<=n;j++)
    {
        int key=arr[j];
       int  i=j-1;
        while(i>=0 & arr[i]>key)
        {
            arr[i+1]=arr[i];
            i=i-1;
        }
         arr[i+1]=key;
        
    }
    
    for(int b=0;b<n;b++)
    {
        cout<<arr[b] << " ";
    }
    
}


