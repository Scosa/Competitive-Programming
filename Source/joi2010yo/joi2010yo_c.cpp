#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n;
bool used[10001];



	
int main (){
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int m;
	cin >> n >> m;
	vector<vector<int> > vec(n);
	for(int i=0;i<m;i++){
		int k ,l;
		cin >> k  >> l;
		k--;
		l--;
		vec[k].push_back(l);
		vec[l].push_back(k);
	}

	queue<pair<int,int> >  que;
	int ans=0;
	pair<int,int> b;
	b.first=0;
	b.second=0; 
	used[0]=true;
	que.push(b);
	while(!que.empty()){
		int st=que.front().first;
		int po=que.front().second;
		que.pop();
		if(po==3)continue;
		for(int i=0;i<vec[st].size();i++){
			if(used[vec[st][i]]==false){
				used[vec[st][i]]=true;
				que.push(make_pair(vec[st][i],po+1));
			}
		}
		ans++;
	}

	cout << ans-1 <<endl;
	
}



