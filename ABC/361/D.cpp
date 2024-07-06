#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//container util
#define SORT(c) sort((c).begin(),(c).end())
#define all(a) (a).begin(), (a).end()

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

//print
#define pv(val) cerr << #val << '=' << (val) << endl

const int INF = 1e9;
int N;

map<string, set<string>> mp;
map<string, bool> visited;

void dfs(string s){
	if(visited[s]) return;
	visited[s] = true;

	int dotIndex = 0;
	REP(i,s.length()){
		if(s[i] == '.'){
			dotIndex = i;
			break;
		} 
	}

	REP(i,s.length()-1){
		if(s[i] == '.') continue;
		if(s[i+1] == '.') continue;

		string to = s;
		REP(j,2){
			swap(to[i+j], to[dotIndex+j]);
		}
		mp[s].insert(to);
	}

	for(string to : mp[s]){
		dfs(to);
	}
}

int main(void){

	cin >> N;		
	string S; cin >> S;
	string T; cin >> T;

	string now = S + "..";


	dfs(now);

	map<string, int> dist;
	queue<string> que;

	dist[now] = 0;
	que.push(now);

	while(!que.empty()){
		string v = que.front();
		que.pop();

		for(string to : mp[v]){
			if(dist.count(to) != 0) continue;
			dist[to] = dist[v] + 1;
			que.push(to);
		}
	}
	
	string goal = T + "..";
	if(dist.count(goal) == 0) cout << -1 << endl;
	else cout << dist[goal] << endl;

	return 0;

}
