#include <iostream>
#include <map>

using namespace std;

int main()
{
	int N, count = 0;; // N : �Է¹��� ���� ��, count : �׷�ܾ� ��
	string S; // S : �Է¹��� ���ڿ�
	map<char, bool> M;

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> S;
		for (int j = 0; j < S.size(); j++) {

			if (j != 0 && S[j] == S[j - 1]) continue;
			else if (M.find(S[j]) == M.end()) M.insert({ S[j],true });
			else {
				count--;
				break;
			}
		}

		count++;
		M.clear();
	}

	cout << count << "\n";

	return 0;
}