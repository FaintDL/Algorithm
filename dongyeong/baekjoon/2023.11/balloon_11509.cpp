#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int N;
	vector<int> H;	// �� ǳ���� ���� �Է°�
	vector<int> v;	// ȭ�� ����. v.size()==ȭ�� ����

	cin >> N;

	for (int i = 0; i < N; i++) {
		int input;

		cin >> input;
		H.push_back(input);
	}

	v.push_back(H.back());
	H.pop_back();

	while (!H.empty()) {
		bool check = true;	// �̹� ���� ȭ���� �ϳ��� �ش� ���̿� ������ false, ������ true
		int size = v.size();

		for (int i = 0; i < size; i++) {
			if (v[i] + 1 == H.back()) {
				v[i]++;
				check = false;
				break;
			}
		}

		if (check) v.push_back(H.back());

		H.pop_back();
	}

	cout << v.size() << "\n";

	return 0;
}