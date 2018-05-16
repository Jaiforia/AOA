#include<iostream>

using namespace std;

int main()
{
    int i,j,n;
    cout<<"Enter the number of nodes:";
    cin>>n;
    int graph[n+1][n+1];
    int d[n+1],p[n+1]={0},visited[n+1]={0};
    for(i=0;i<=n;i++)
        d[i]=INT_MAX;
    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n;j++)
        {
            if(i==j)
                graph[j][j]=0;
            else
            {
                cout<<"Enter the cost from node "<<i<<" to "<<j<<":";
                cin>>graph[i][j];
                graph[j][i]=graph[i][j];
            }
        }
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            cout<<graph[i][j]<<" ";
        }
        cout<<endl;
    }
    int cur=1,min=0;
    d[cur]=0;
    for(i=1;i<=n;i++)
    {
        visited[cur]=1;
        for(j=1;j<=n;j++)
        {
            if(visited[j]!=1 && graph[cur][j]!=0 && d[j]>graph[cur][j])
            {
                d[j]=graph[cur][j];
                p[j]=cur;
            }
        }
        for(j=1;j<=n;j++)
        {
            if(visited[j]!=1)
            {
                min=d[j];
                break;
            }
        }
        for(j=1;j<=n;j++)
        {
            if(visited[j]!=1 && d[j]<=min)
            {
                min=d[j];
                cur=j;
            }
        }
    }
    int sum=0;
    for(i=1;i<=n;i++)
    {
        sum=sum+d[i];
    }
    cout<<"Sum of tree = "<<sum<<endl;
    for(i=2;i<=n;i++)
    {
        cout<<"The weight between node "<<i<<" and "<<p[i]<<" = "<<d[i]<<endl;
    }
}
