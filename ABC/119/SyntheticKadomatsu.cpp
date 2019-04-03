#include <bits/stdc++.h>



using namespace std;

typedef vector<int> VI;
typedef vector<string> VS;


//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

int N;
vector<int> target(3);
int ans = 1 << 30;
vector<int> l(8), check(8);

void calc(vector<int> v){

	vector<int> use(3, -1);
	vector<int> sum(3, 0);
	int cnt = 0;

	REP(i,N){
		if(v[i] != 3){
			sum[v[i]] += l[i];
			use[v[i]]++;
		}
	}

	REP(i,3){
		int t = max(0, use[i]);
		cnt += 10*t;
	}

	REP(i,3){
		if(sum[i]==0){
			REP(i,3)sum[i]=0;
			return;
		}
	}

	REP(i,3){
		cnt += abs(target[i] - sum[i]);
	}
	ans = min(ans, cnt);
	return ;

}

void dfs(int depth, vector<int> v){

	if(depth == N){
		calc(v);
		return ;

	}else{
		REP(i,4){
			v[depth] = i;
			dfs(depth+1, v);
		}
	}
	return ;
}

int main(void){

	cin >> N;
	REP(i,3) cin >> target[i];
	REP(i,N) cin >> l[i];
	dfs(0, check);

	cout << ans << endl;
	return 0;

}
