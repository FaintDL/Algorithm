//boj 20920 ���ܾ� �ϱ�� ���ο� 
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <map> 
#include <stdio.h>
using namespace std;

bool compare(pair<int,string>a, pair<int,string>b)
{
	if(a.first == b.first) //�󵵼��� ������ 
	{
		if(a.second.length() == b.second.length()) 	//���̵� ������ 
			return a.second < b.second; 			// ���� �������� 
		else return a.second.length() > b.second.length(); //���� �ٸ��� �������� 
	}
	else return a.first > b.first; 
}

int main(void)
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int N,M;
	cin >> N >> M;
	map<string,int> voca;
	
	for(int i=0;i<N;i++)
	{
		string temp;
		cin >> temp;
		if(temp.size() < M) continue;
		voca[temp]++;
	}
	
	vector<pair<int, string> > book;
	for(auto w : voca)
	{
		book.push_back({w.second,w.first});
	}
	
	sort(book.begin(),book.end(), compare);
	for(auto w : book)
	{
		cout << w.second << '\n';
	}
}
