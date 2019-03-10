#include <stdio.h>
#include <cmath>
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

	char Sa[101];
	char Sb[101];
	char Sc[101];

	scanf("%s", Sa);
	scanf("%s", Sb);
	scanf("%s", Sc);

	int la, lb, lc;
	la = strlen(Sa);
	lb = strlen(Sb);
	lc = strlen(Sc);

	int idxa, idxb, idxc;
	idxa = idxb = idxc = 0;

	char card = Sa[0];
	idxa=1;
	while(idxa <= la and idxb <= lb and idxc <= lc){
		switch(card){
			case 'a':
				card = Sa[idxa++];
				break;
			case 'b':
				card = Sb[idxb++];
				break;
			case 'c':
				card = Sc[idxc++];
				break;
		}
		if(idxa == la){ 
			printf("A\n");
			break;
		}
		if(idxb == lb){ 
			printf("B\n"); 
			break;
		}
		if(idxc == lc){ 
			printf("C\n");
			break;
		}
	}


	return 0;

}
