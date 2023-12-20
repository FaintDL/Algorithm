//boj 1753 �ִܰ�� 
#include <stdio.h>
#include <iostream>
#include <queue> 
using namespace std;
#define INF 9999999 		// ��ξ��� 
#define MAX_VERTEX 20001 	// �ִ� vertex ����
#define MAX_EDGE 300001 	// �ִ� edge ����

int d[MAX_VERTEX];
vector<pair<int, int> > edge[MAX_EDGE];

void dijkstra(int start)
{
	
    d[start] = 0;
    //���ο��� ���� ����ġ 0 
    priority_queue<pair<int, int> > pq;
    pq.push(make_pair(0, start));
    while(!pq.empty())
	{
        int current = pq.top().second;
        int dist = -pq.top().first;
        pq.pop();
        
        if (d[current] < dist) //�̹� �ּҰŸ��� �־ ������ �ȵɰͰ�����  
		{
            continue;
        }
        
        for (int i=0; i<edge[current].size(); ++i)
		{
            int next = edge[current][i].second;
            int nextdist = dist + edge[current][i].first;
            if (d[next] > nextdist)
			{
                d[next] = nextdist;
                pq.push(make_pair(-nextdist, next));
            }
        }
    }
}

int main()
{
    int v, e , start ;
    cin >> v >> e >> start;
    for (int i=1; i<v+1; ++i)
    	d[i] = INF; //�ִ����� �ʱ�ȭ 
    
    for (int i=0; i<e; ++i)
	{
        int a, b, cost;
        cin >> a >> b >> cost;
        edge[a].push_back(make_pair(cost, b));
    }
    dijkstra(start);
    for (int i=1; i<v+1; ++i)
	{
        if (d[i] == INF)
		{
            cout <<"INF"<<"\n";    
        }
        else{
            cout << d[i] << "\n";
        }
    }

    return 0;

}
