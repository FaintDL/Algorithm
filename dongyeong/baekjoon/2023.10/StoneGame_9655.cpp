#include <iostream>

using namespace std;

int main()
{
	int N;
	bool SC = true; // ���:true, â��:false

	cin >> N;

	if ((N / 3) % 2 == 0) SC = false;
	if (((N % 3) / 1) % 2 != 0) {
		if (SC == true) {
			SC = false;
		}
		else SC = true;
	}

	if (SC == false) cout << "CY\n";
	else cout << "SK\n";

	return 0;
}