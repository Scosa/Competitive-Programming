#include <bits/stdc++.h>
using namespace std;


using namespace std;
typedef long long ll; 







int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	//input
	int n;
	cin >> n;
	
	if(n<=59)cout << "Bad" << endl;
	else if(n<=89)cout <<"Good" <<endl;
	else if(n<=99)cout << "Great"<< endl;
	else cout << "Perfect"<<endl;
}



