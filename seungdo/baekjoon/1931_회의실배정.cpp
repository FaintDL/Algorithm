//1931_ȸ�ǽǹ��� 
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(const pair<int, int> &a, const pair<int, int> &b)
{    //�����°� ���� ���� 
    if(a.second == b.second)
    {
        return a.first < b.first;
    }
    return a.second < b.second;
}

int main(void)
{
    int N;
    vector<pair<int,int> > v; 
    //�Էºκ� 
    cin >> N;
    
    for(int i=0;i<N;i++)
    {
        int start, end;
        cin >> start >> end;
        v.push_back({start, end}); 
    }
    
    sort(v.begin(),v.end(), compare);
    
    /*
    for(int i=0;i<N;i++) //������� 
    {
        cout<<v[i].first << " " << v[i].second << endl;
    }*/
    int count = 0;
    int start = v[0].first;
    int end = v[0].second;
    
    count++;
    for(int i=1;i<N;i++)
    {
        if(v[i].first < end)
        {
            continue;
        }
        
        start = v[i].first;
        end = v[i].second;
        count++;
    }
    
    cout<<count<<endl;
    return 0;
}
