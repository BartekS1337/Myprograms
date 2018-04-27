#include<iostream>
#include<vector>
#include<utility>
//graf
using namespace std;
/*
int main(){
    int vertex, edge;
    int a, b;
    cin >> vertex >> edge;
    vector<int> graph[vertex];

    for(int i=0;i<vertex;i++)
    {
    graph[i].push_back(0);
    }

    for(int i=0;i<edge;i++)
    {
    cin >> a >> b;
    graph[a].push_back(b);
    graph[b].push_back(a);
    }

    for(int i=0;i<vertex;i++)
    {
        cout<<"#"<<i<<" ";
    for(int j=0;j<graph[i].size();j++)
    {

        cout<<graph[i][j]<<" ";
    }
        cout<<endl;
    }

return 0;
}
*/
/*
int main(){
    int vertex, edge;
    int a, b;
    cin >> vertex >> edge;
    vector<int> graph[vertex];

    for(int i=0;i<vertex;i++)
    {
    graph[i].push_back(0);
    }

    for(int i=0;i<edge;i++)
    {
    cin >> a >> b;
    graph[a].push_back(b);
    }

    for(int i=0;i<vertex;i++)
    {
        cout<<"#"<<i<<" ";
    for(int j=0;j<graph[i].size();j++)
    {

        cout<<graph[i][j]<<" ";
    }
        cout<<endl;
    }

return 0;
}
*/
int main(){
    int vertex, edge;
    int a, b, value;

    cin >> vertex >> edge;
    vector<pair<int,int> > graph[vertex];

    for(int i=0;i<vertex;i++)
    {

    graph[i].push_back(make_pair(0,0));

    }

    for(int i=0;i<edge;i++)
    {
    cin >> a >> b >> value;
    make_pair(a,value);
    graph[a].push_back(make_pair(b,value));

    }

    for(int i=0;i<vertex;i++)
    {
        cout<<"#"<<i<<" ";
    for(int j=0;j<graph[i].size();j++)
    {

        cout<<graph[i][j].first<<","<<graph[i][j].second<<" ";
    }
        cout<<endl;
    }

return 0;
}


