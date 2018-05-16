#include<iostream>
using namespace std;
int main()
{
    int i,j,temp;
    int arr[]={23,56,34,-7,2,-10,19,54,777,544,22};
    for(i=10;i>=0;i--)
    {
        for(j=0;j<=i;j++)
        {
            if(arr[j]>arr[j+1])
            {
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
            }
        }
    }
    cout<<"Array after sorting:"<<endl;
    for(i=0;i<11;i++)
    {
        cout<<arr[i]<<endl;
    }
return 1;
}
