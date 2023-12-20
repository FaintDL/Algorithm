//2178 �̷�ã�� 
#include <stdio.h>
#include <iostream>
#include <queue>

using namespace std;

int N,M;
int map[101][101]={0,};
int visited[101][101]={0,};
int dist[101][101]={0,};

int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};

queue<pair<int,int> > q;
void bfs(int x, int y)
{         
    visited[x][y] = 1;
    q.push(make_pair(x,y));
    dist[x][y]++;

    while (!q.empty())
	{
        int cur_x = q.front().first;
        int cur_y = q.front().second;
        q.pop();
        for (int i=0; i<4; ++i)
		{
            int next_x = cur_x+dx[i];
            int next_y = cur_y+dy[i];
            if (0<=next_x && next_x<N && 0<=next_y && next_y<M)  //�̷ι��� ��������? 
            {
            	if(visited[next_x][next_y]==0 && map[next_x][next_y] == 1 )	//�湮�ߴ��� , �̵������� �̷�����   
            	{
            		dist[next_x][next_y] = dist[cur_x][cur_y] + 1;
					visited[next_x][next_y] = 1;					//�湮 üũ  
	                q.push(make_pair(next_x, next_y)); 
				}
			}
        }
    }
}

int main()
{
    cin >> N >> M;
    for (int i=0; i<N; i++)
	{
	    string s;
        cin >> s;
        for (int j=0; j<M; j++)
		{ 
            map[i][j] = s[j]-'0';    
        }
    }
    bfs(0,0);                          
    cout << dist[N-1][M-1];            
}
