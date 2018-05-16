#include<iostream>
using namespace std;
void heapify(int a[],int i,int n);
int main()
{
    int i,j,n;
    int arr[]={0,23,56,34,-7,2};
    for(i=5/2;i>=1;i--)
    {
        heapify(arr,i,5);
    }
    cout<<"Max Heap:";
    for(i=1;i<=5;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int temp;
    for(i=5;i>=1;i--)
    {
        temp=arr[1];
        arr[1]=arr[i];
        arr[i]=temp;
        heapify(arr,1,i-1);
    }
    cout<<"Array after sorting:"<<endl;
    for(i=1;i<=5;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 1;
}
void heapify(int a[],int i,int n)
{
    int j=i*2,X=a[i];
    while(j<=n)
    {
        if(j<n&&a[j]<a[j+1])
            j++;
        if(X>a[j])
            break;
        a[j/2]=a[j];
        j=j*2;
    }
    a[j/2]=X;
}
