#include <vector>
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main() {
	string line;
	int cnt = 0;
	getline(cin, line);
	cin >> cnt;
	cout << line << endl << cnt << endl;
	cin >> cnt;
	cout << cnt << endl;
	return 0;
}