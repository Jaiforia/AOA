#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    int arr[]={23,56,34,-7,2,-10,19};
    int temp,h=7/2;
    while(h!=0)
    {
        for(i=h;i<7;i++)
        {
            j=i;
            temp=arr[i];
            while(arr[j-h]>temp&&j>h-1)
            {
                arr[j]=arr[j-h];
                j=j-h;
            }
            arr[j]=temp;
        }
        h=h/2;
    }
    cout<<"Array after sorting:"<<endl;
    for(i=0;i<7;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 1;
}
