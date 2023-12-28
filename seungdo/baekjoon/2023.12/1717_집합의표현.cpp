//1717_������ǥ�� 
#include <iostream>
#include <algorithm>

using namespace std;
int arr[1000001] = {0};
int find(int a);
int check(int a,int b) //������������? 
{
	if(find(a)==find(b))
	{
		cout<<"YES\n";
		return 0;	
	}
	cout<<"NO\n";
	return 0;
	
}
int unionF(int a,int b)//��ġ�¿��� 
{
	int x = find(a);
	int y = find(b);
	if(x==y) return 0;
	if(x<y) arr[y] = x; //�������� ��Ʈ�� ���Բ����ֱ� 
	else arr[x] = y;
	return 0;
}
int find(int a)//��Ʈ�� ã�¿��� 
{
	if(arr[a] == a) //������ ��Ʈ 
		return a;
	return arr[a] = find(arr[a]);
	//�ƴϸ� ��Ʈ��ã�������� find ��� 
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n,m;
	cin>>n>>m;
	for(int i=0;i<=n;i++) //���� �ʱ�ȭ 
	{
		arr[i] = i;
	}
	
	int temp,a,b;
	for(int i=0;i<m;i++)
	{
		cin>>temp>>a>>b;
		if(temp==0)
		{
			unionF(a,b);
		}
		else if(temp==1)
		{
			check(a,b);
		}
	}
	return 0;
}
