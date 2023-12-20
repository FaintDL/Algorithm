//19583 ���̹�������ȸ
#include <iostream>
#include <algorithm>
#include <string>
#include <set>
using namespace std;

int cal(string s)
{
	int temp;
	temp = 60 * stoi(s.substr(0,2)) + stoi(s.substr(3,2));
	return temp;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	string start,mid,end;
	cin>>start>>mid>>end;
	
	int s = cal(start);
	int m = cal(mid);
	int e = cal(end);
	
	string time,name;
	int t,count=0;
	set<string> first;
	while(cin>>time>>name)
	{
		t = cal(time);
		if(t<=s)
		{	//���� 1.��ȸ�������� �⼮ 
			first.insert(name); 
		}
		if(m <= t && t <= e)
		{	// ���� 2. ��ȸ�� ������ ��Ʈ������ ������ ���� �⼮ 
			if(first.find(name) != first.end())
			{	//�Ѵ� �����ϸ� �⼮�Ϸ� 
				count++;
				first.erase(name);
			}
		}
	}
	
	cout<<count<<endl;
	return 0;
}
