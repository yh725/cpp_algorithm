#include <stdio.h>
#include <vector>
using namespace std;

int main(){
	//삽입 정렬 응용2 -  Inversion Sequence
	/*
	int n, i, j, idx, cnt;
	
	scanf("%d", &n);
	
	int num[n];
	
	for(i=0; i<n; i++){
		scanf("%d", &num[i]);
	}
	
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			if((i+1)==num[j]){
				idx=j; 	
				break;
			}
		}
		cnt=0;
		for(j=0; j<idx; j++){
			if(num[j]>num[idx]) cnt++;
		}
		printf("%d ", cnt);
	}
	*/
	
	//삽입 정렬 응용2 -  Inversion Sequence - 원래 수열
	int n, i, j, pos;
	scanf("%d", &n);
	vector<int> is(n+1), os(n+1);	// '0' 초기화 
		
	
	for(i=0; i<n; i++){
		scanf("%d", &is[i]);
	}
	
	for(i=n-1; i>=0; i--){
		pos=i;
		for(j=0; j<is[i]; j++){
			os[pos]=os[pos+1];
			pos++;
		}
		os[pos]=i+1;
	}

	for(i=0; i<n; i++){
		printf("%d ", os[i]);
	}		
	return 0;
}
