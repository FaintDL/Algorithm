#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
//12015 ���� �� �����ϴ� �κ� ����  2
using namespace std;
int main(void) 
{
	vector<int>v;
	vector<int>dp;
	int N , ans=0;
	cin >> N;
	for(int i=0;i<N;i++)
	{
		int temp;
		cin >> temp;
		v.push_back(temp);
	}
	
	dp.push_back(v[0]);
	
	for(int i=1;i<N;i++)
	{
		int key = v[i];
		int size = dp.size();
		if(dp[size-1] < key) 	//LIS �� ������ ���Һ��� ���� ū ��� 
		{						//�������� �ܼ��� �߰����ش� 
			dp.push_back(key);
		}
		else //LIS �� ������ ���Һ��� ����������� 
		{	//�̺�Ž��
		 	int lo = 0;
		 	int hi = size;
			while(lo < hi)
			{
				int mid = (lo + hi)/2;
				if(dp[mid]<key)
				{
					lo = mid+1;
				}
				else
				{
					hi = mid;
				}
			}
			dp[lo] = key;
		}
	}
	
	ans = dp.size();
	
	cout<<ans<<"\n";
}
