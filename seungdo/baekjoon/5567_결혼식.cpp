#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(void)
{
	int n,m,answer=0;
	int x,y; 
	
	vector<vector<int> > v(502,vector<int>());
	int list[502] = {0};
	
	//�Է� 
	cin >> n >> m;
	for(int i=0;i<m;i++)
	{
		cin>>x>>y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	
	//list[] �� �ʴ��ؾ��һ���� üũ�Ѵ� 
	for(int i=0;i<v[1].size();i++)
	{
		int temp = v[1][i]; //1���� ģ�� 
		list[temp] = 1;
		
		for(int j=0;j<v[temp].size();j++)
		{
			int num = v[temp][j]; //�ʴ��ؾ��һ�� (1��ģ���� ģ��) 
			list[num] = 1;
		}	
	}
	
	//üũ�� list[] Ȯ�� 
	list[1] = 0;
	for(int i=0;i<=500;i++)
	{
		if(list[i] == 1)
		{
			answer++;
			//cout<<"i=="<<i<<endl;
		}
	}
	cout<<answer<<endl;
	return 0;
}
