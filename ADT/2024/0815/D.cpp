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

bool stand(char c){
	return c == '1';
}

int main(void){

	string S; cin >> S;

	if(S.front() == '1'){
		cout << "No" << endl;
		return 0;
	}

	vector<bool> pin(7);

	pin[0] = stand(S[6]);
	pin[1] = stand(S[3]);
	pin[2] = stand(S[1]) or stand(S[7]);
	pin[3] = stand(S[4]);
	pin[4] = stand(S[2]) or stand(S[8]);
	pin[5] = stand(S[5]);
	pin[6] = stand(S[9]);

	int left = -1;
	REP(i,7){
		if(pin[i]){
			left = i;
			break;
		}
	}

	if(left == -1){
		cout << "No" << endl;
		return 0;
	}

	int mid = -1;
	FOR(i,left+1,7){
		if(!pin[i]){
			mid = i;
			break;
		}
	}
	
	if(mid == -1){
		cout << "No" << endl;
		return 0;
	}

	int right = -1;
	FOR(i,mid+1,7){
		if(pin[i]){
			right = i;
			break;
		}
	}

	if(right == -1){
		cout << "No" << endl;
		return 0;
	}

	cout << "Yes" << endl;

	return 0;

}
