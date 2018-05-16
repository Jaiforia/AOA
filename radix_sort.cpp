#include<iostream>

#include<math.h>
using namespace std;
int main()
{

    int i,j,n,temp=0,d=0,r;
    int arr[]={23,56,34,-7,2};
    int a[9][5];
    for(i=0;i<=9;i++)
    {
        for(j=0;j<5;j++)
        {
            a[i][j]=-1;
        }
    }
    for(i=0;i<5;i++)
    {
        if(temp<arr[i])
            temp=arr[i];
    }
    while(temp!=0)
    {
        temp=temp/10;
        d++;
    }
    int k=0;
    for(i=0;i<d;i++)
    {
        for(j=0;j<5;j++)
        {
            r=(arr[j]/(int)pow(10,i))%10;
            if(r<0)
                r=r*-1;
            while(a[r][k]!=-1)
            {
                k++;
            }
            a[r][k]=arr[j];
        }
        int count=0;
        for(j=0;j<=9;j++)
        {
            for(k=0;k<n;k++)
            {
                if(a[j][k]==-1)
                {
                    break;
                }
                else
                {
                    arr[count]=a[j][k];
                    count++;
                    a[j][k]=-1;
                }
            }
        }
    }
    cout<<"Array after sorting:"<<endl;
    for(i=0;i<5;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}
