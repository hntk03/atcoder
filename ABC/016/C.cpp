#include <bits/stdc++.h>



using namespace std;

typedef vector<int> VI;
typedef vector<string> VS;


//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)


#define MAX 11

int main(void){

	int N, M; cin >> N >> M;
	vector<vector<bool>> graph(MAX, vector<bool>(MAX,false));

	REP(i,M){
		int a, b; cin >> a >> b;
		graph[a-1][b-1] = true;
		graph[b-1][a-1] = true;
	}

	vector<int> sum(N,0);
	REP(i,N){
		REP(j,N){
			sum[i] += (int)graph[i][j];
		}
		sum[i]--;
		cout << "sum:" << sum[i] << endl;
	}

	REP(i,N){
		int ans = 0;
		REP(j,N){
			if(graph[i][j] == true) ans += sum[j];
		}
		cout << ans << endl;
	}





	return 0;

}
