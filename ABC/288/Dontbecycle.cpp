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

const int INF = 1e9;

int main(void){

	int N, M; cin >> N >> M;
	UnionFind uf(N);

	int ans = 0;
	REP(i,M){
		int A, B; cin >> A >> B;
		A--; B--;
		if(uf.same(A, B)){
			ans++;
		}else{
			uf.unite(A, B);
		}
	}
	
	cout << ans << endl;

	return 0;

}


