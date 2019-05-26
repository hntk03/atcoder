#include <bits/stdc++.h>



using namespace std;

typedef vector<int> VI;
typedef vector<string> VS;


//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)



int main(void){

	long long int N, M; cin >> N >> M;
	priority_queue<pair<long long int, long long int>> que;
	REP(i,N){
		long long int A; cin >> A;
		que.push(make_pair(A, 1));
	}
	REP(i,M){
		long long int B, C; cin >> B >> C;
		que.push(make_pair(C, B));
	}

	long long int cnt = 0;
	long long int ans = 0;
	while(cnt != N){
		if(que.top().second + cnt <= N){
			ans += que.top().first * que.top().second;
			cnt += que.top().second;
		}else{
			long long int c = N - cnt;
			ans += c * que.top().first;
			cnt += c;
		}
		que.pop();
	}

	cout << ans << endl;

	return 0;

}
