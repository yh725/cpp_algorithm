#include <iostream>
using namespace std;

int main() {
	
	int N, sum = 1;
	
	cin >> N;
	
	cout << "1";
	
	for(int i=2; i<=N/2 ;i++){
		if (N%i==0) {
			cout << " + " << i ;
			sum += i;	
		}
	}
	
	cout << " = " << sum;
	
	
	return 0;
}
