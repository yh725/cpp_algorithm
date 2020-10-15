#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int A, B, sum = 0;
	
	cin >> A >> B;
	
	for(int i=A; i<B ;i++){
			cout << i << "+";
			sum += i;
	}
	
	sum+=B;
	
	cout << B << "=" << sum;
	
	
	return 0;
}
