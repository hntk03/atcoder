#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

const int INF = 1e9;

struct UnionFind{
	vector<int> d;
	UnionFind(int n=0): d(n, -1){}
	int find(int x){
		if(d[x] < 0) return x;
		return d[x] = find(d[x]);
	}
	bool unite(int x, int y){
		x = find(x); y = find(y);
		if(x == y) return false;
		if(d[x] > d[y]) swap(x, y);
		d[x] += d[y];
		d[y] = x;
		return true;
	}
	bool same(int x, int y){ 
		return find(x) == find(y);
	}
	int size(int x){
		return -d[find(x)];
	}
};

int deg[100005];
vector<int> to[100005];


int main(void){

	int n, m, k; cin >> n >> m >> k;
	UnionFind uf(n);

	REP(i,m){
		int a, b; cin >> a >> b;
		a--; b--;
		deg[a]++;
		deg[b]++;
		uf.unite(a, b);
	}

	REP(i,k){
		int a, b; cin >> a >> b;
		a--; b--; 
		to[a].push_back(b);
		to[b].push_back(a);
	}
	
	REP(i,n){
		int ans = uf.size(i)-1-deg[i];
		for(int u: to[i]){
			if(uf.same(i,u)) --ans;
		}
		cout << ans << " ";
	}

	return 0;

}
