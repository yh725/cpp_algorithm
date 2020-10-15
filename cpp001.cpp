#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int N, M, sum = 0;
	
	cin >> N >> M;
	
	for(int i=1; i <=N ;i++){
		if(i%M==0){
			sum += i;
		}
	}
	
	cout << sum << endl;
	
	return 0;
}
