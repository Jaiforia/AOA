#include<iostream>

using namespace std;
void mergesort(int arr[],int a,int b);
void Merge(int arr[],int l,int m1,int m2,int r);

int main()
{
    int n,i;
    int arr[]={56,36,23,2,1};
    mergesort(arr,0,4);
    cout<<"Sorted array is :";
    for(i=0;i<5;i++)
        cout<<arr[i]<<" ";
    return 0;
}

void mergesort(int arr[],int a,int b)
{
    int m;
    if(a<b)
    {
        m=(a+b)/2;
        mergesort(arr,a,m);
        mergesort(arr,m+1,b);
        Merge(arr,a,m,m+1,b);
    }
}
void Merge(int arr[],int l,int m1,int m2,int r)
{
    int Merge_arr[6];
    int i,p,j,k;
    p=l;
    k=0;

    while(l<=m1 && m2<=r)
    {
        if(arr[l]<arr[m2])
        {
            Merge_arr[k]=arr[l];
            l++;
            k++;
        }
        else
        {
            Merge_arr[k]=arr[m2];
            m2++;
            k++;
        }
    }
    while(l<=m1)
    {
        Merge_arr[k]=arr[l];
        l++;
        k++;
    }
    while(m2<=r)
    {
        Merge_arr[k]=arr[m2];
        m2++;
        k++;
    }
    for(i=p,j=0;i<=r;i++,j++)
        arr[i]=Merge_arr[j];
}
