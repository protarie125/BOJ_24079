#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int x, y, z;
	cin >> x >> y >> z;

	cout << (x + y <= z ? 1 : 0);

	return 0;
}