#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

bool check(ll x){

	for(int i=3;i<x;i+=2){
		if(x%i == 0) return false;
	}
	return true;
}


int main(void){


	ll X; cin >> X;

	bool flag = true;
	if(X > 2){
		while(flag){
			if(X % 2 != 0 and check(X)) break; 
			X++;
		}
	}

	cout << X << endl;


	return 0;

}
