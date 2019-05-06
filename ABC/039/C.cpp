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

	string S; cin >> S;

	vector<string> p;
	p.push_back("WBWBWWBWBWBW"); //Do
	p.push_back("WBWWBWBWBWWB"); //Re
	p.push_back("WWBWBWBWWBWB"); //Mi
	p.push_back("WBWBWBWWBWBW"); //Fa
	p.push_back("WBWBWWBWBWWB"); //So
	p.push_back("WBWWBWBWWBWB"); //La
	p.push_back("WWBWBWWBWBWB"); //Si

	vector<string> o;
	o.push_back("Do");
	o.push_back("Re");
	o.push_back("Mi");
	o.push_back("Fa");
	o.push_back("So");
	o.push_back("La");
	o.push_back("Si");

	REP(i,7){
		if(p[i] == S.substr(0,12)){ 
			cout << o[i] << endl;
			return 0;
		}
	}


	return 0;

}
