#include <iostream>
using namespace std;

int main(){
	int N, i=0, max=-2147000000, min=2147000000;
	cin >> N ;
	int age[N];
	for (i; i<N ; i++){
		cin >> age[i];
	}
	
	for (i=0; i<N ;i++){
		if(max < age[i]){
			max = age[i];	
		}
		if(min > age[i]){
			min = age[i];	
		}
	}
	
	cout << max-min << endl;
	
	return 0;
}
