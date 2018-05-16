#include<iostream>

using namespace std;
void quick(int a[],int b,int c);
int Partition(int b[],int l,int r);
int main()
{
    int i;
    int arr[]={23,56,34,-7,2};
    cout<<"Unsorted array:";
    for(i=0;i<5;i++)
        {
        cout<<arr[i]<<endl;
        }
    cout<<endl;
    quick(arr,0,4);
    cout<<"Sorted array is:"<<endl;
    for(i=0;i<5;i++)
        {
        cout<<arr[i]<<endl;
        }
    return 1;
}
void quick(int a[],int b,int c)
{
    int i,p;
    if(b<c)
        {
        p=Partition(a,b,c);
        quick(a,b,p-1);
        quick(a,p+1,c);
        }
}
int Partition(int b[],int l,int r)
{
    int i=l,j=r,t,X=b[i];
    while(i<j)
        {
        while(b[i]<=X&&i<=r)
            i++;
        while(b[j]>X)
            j--;
        if(i<j)
            {
            t=b[i];
            b[i]=b[j];
            b[j]=t;
            }
        }
    t=b[j];
    b[j]=b[l];
    b[l]=t;
    return j;
}
