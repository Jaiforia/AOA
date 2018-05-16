#include<iostream>

using namespace std;
int main()
{
    int n,i,j;
    cout<<"Enter the number of nodes:";
    cin>>n;
    int graph[n+1][n+1];
    int d[n+1],p[n+1]={0},visited[n+1]={0};
    for(i=1;i<=n;i++)
    {
        graph[i][i]=0;
        for(j=i+1;j<=n;j++)
        {
            cout<<"Enter the cost from "<<i<<" to "<<j<<": ";
            cin>>graph[i][j];
            graph[j][i]=graph[i][j];
        }
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
            cout<<graph[i][j]<<" ";
        cout<<endl;
    }
    for(i=0;i<=n;i++)
        d[i]=INT_MAX;
    int cur=1,m=0,dc=0;
    d[cur]=0;
    for(i=1;i<=n;i++)
    {
        visited[cur]=1;
        dc=d[cur];
        for(j=1;j<=n;j++)
        {
            if(graph[cur][j]!=0 && visited[j]!=1 && (graph[cur][j]+dc)<d[j])
            {
                d[j]=graph[cur][j]+dc;
                p[j]=cur;
            }
        }
        for(j=1;j<=n;j++)
        {
            if(visited[i]!=1)
            {
                m=d[i];
                break;
            }
        }
        for(j=1;j<=n;j++)
        {
            if(visited[j]!=1 && d[j]<m)
            {
                m=d[j];
                cur=j;
            }
        }
        visited[cur]=1;
    }
    int cost=d[6];
    cout<<"Cost = "<<cost<<endl;
    cout<< "Intermediate path 1->";
    int x=6;
    while(p[x]!=1)
    {
        cout<<p[x]<<"->";
        x=p[x];
    }
    cout<<6;
    return 1;
}
