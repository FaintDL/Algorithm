//22864 �Ƿε� 
#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;
int main(void)
{
	int a,b,c,m;
	//  5 3 2 10
	cin>>a>>b>>c>>m;
	int exp=0; //�۾���
	int hp=0; //�Ƿε� 
	for(int i=0;i<24;i++)
	{
		if(hp+a <= m) //�۾�����  (��) 
		{
			exp += b; //�۾������� 
			hp += a;  //�Ƿε����� 
		}
		else if(hp+a > m) //�۾��Ұ� (�޽�) 
		{
			hp-=c;	//�Ƿε�����	
			if(hp<0) hp = 0;
		}
	}
	cout << exp;
}
