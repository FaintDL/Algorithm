#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
//15486 ���2 
using namespace std;
int max(int a,int b)
{
	if(a<b) return b;
	return a;
}

int main(void)
{
	int N;
	vector<int> time;
	vector<int> reward;
	
	int dp[1500001]={0};
	int ans = 0;
	
	cin >> N;
	
	for(int i=0;i<N;i++)
	{
		int temp_time;
		int temp_reward;
		
		cin >> temp_time >> temp_reward;
		time.push_back(temp_time);
		reward.push_back(temp_reward);	
	}
	
	for(int i=N-1;i>=0;i--)
	{
		int finish_time = i + time[i];
		if(finish_time <= N) //��� ���� ����� ������ ��� 
		{
			dp[i] = max(dp[finish_time]+reward[i] , dp[i+1]);
		}
		else //��� ���ı��� ����� �̾����� ��� 
		{
			dp[i] = dp[i+1];
		}
	}
	ans = dp[0];
	cout << ans << endl;
	return 0;
}

