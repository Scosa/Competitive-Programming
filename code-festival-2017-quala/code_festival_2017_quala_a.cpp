#include <iostream>
#include <string>

using namespace std;

int main()
{	
	string input;
	cin >> input;
	if (input.find("YAKI") == 0) {
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << endl;
	}
    return 0;
}


