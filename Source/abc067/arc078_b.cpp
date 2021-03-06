#include <bits/stdc++.h>
using namespace std;
bool used[100001];
bool used2[100001];
vector<vector<int> > vec(100001);
vector<int> dis_feneck(100000);
vector<int> dis_sunuke(100000);

void fbfs(int a){
	queue<pair<int,int> > que;
	que.push(pair<int,int>(a,0));
	while(!que.empty()){
		int now = que.front().first;
		int dis = que.front().second;
		used[now] = true;
		que.pop();
		dis_feneck[now]=dis;
		for(int i=0;i<vec[now].size();i++){
			if(used[vec[now][i]]==false)que.push(pair<int,int> (vec[now][i],dis+1));
		}
	}
}
void sbfs(int a){
	queue<pair<int,int> > que;
	que.push(pair<int,int>(a,0));
	while(!que.empty()){
		int now = que.front().first;
		int dis = que.front().second;
		used2[now] = true;
		que.pop();
		dis_sunuke[now]=dis;
		for(int i=0;i<vec[now].size();i++){
			if(used2[vec[now][i]]==false)que.push(pair<int,int> (vec[now][i],dis+1));
		}
	}
}


int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n;
	cin >> n;
	for(int i =0;i<n-1;i++){
		int k,l;
		cin >> k >> l;
		k--;
		l--;
		vec[k].push_back(l);
		vec[l].push_back(k);
	}

	fbfs(0);

	sbfs(n-1);

	int f_point=0;
	int s_point=0;
	for(int i=1;i<n-1;i++){
		//cout << dis_feneck[i] << " " << dis_sunuke[i] << endl;
		if(dis_feneck[i]<=dis_sunuke[i])f_point++;
		else s_point++;
	}

	if(s_point<f_point) cout << "Fennec" << endl;
	else cout << "Snuke" << endl;
	
}
