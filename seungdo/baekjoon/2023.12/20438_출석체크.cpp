//20438_�⼮üũ 
#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int N,K,Q,M;
	int student[5001]={1,};
	bool sleep[5001]={false};
	int left,right;
	int S,E;
	
	cin >> N >> K >> Q >> M; //1��°�� �Է� 
	for(int i=0;i<K;i++) //�����ִ� �л� �Է� 
	{
		int temp;
		cin >> temp;
		sleep[temp] = true;
	}
	for(int i=3;i<=N+2;i++)
	{
		student[i] = 1;
	}
		
	for(int i=0;i<Q;i++) //�⼮ �ڵ带 ���� �л� �Է� 
	{
		int temp;
		cin >> temp;
		if( sleep[temp] ) continue;//���������� �ڵ������
		for(int j=temp;j<=N+2;j+=temp)
		{
			if(sleep[j]) continue; //���� ��ŵ 
			student[j] = 0;
		}
	}
	for(int i=4;i<=N+2;i++)
	{
		student[i] += student[i-1];
	}
		
	for(int i=0;i<M;i++) //M���� �ٵ��� S , E ���� 
	{
		cin>>left>>right;
		cout<<student[right] - student[left - 1] <<'\n';
	}
	
	//���� �Է� 
	
	
	return 0;
}
