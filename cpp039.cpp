#include <stdio.h>
#include <vector>
using namespace std;

int main(){
	int n, m, i, a_cnt=0, b_cnt=0;
	char idx;
	
	scanf("%d", &n);
	
	vector<int> a(n+1);
	
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	
	scanf("%d", &m);
	
	vector<int> b(m+1);
	
	for(i=0; i<m; i++){
		scanf("%d", &b[i]);
	}
	
	vector<int> c(n+m+1);
	
	for(i=0; i<n+m; i++){
		if(a[a_cnt] < b[b_cnt]){
			c[i] = a[a_cnt++];
		}else{
			c[i] = b[b_cnt++];
		}
		
		if(a_cnt>n || b_cnt>m) break;
	}
	
	while(a_cnt>n && b_cnt<m){
		c[i++] = b[b_cnt++];
	} 
	while(a_cnt<n && b_cnt>m){
		c[i++] = a[a_cnt++];
	} 
	
	for(i=0; i<n+m; i++) printf("%d ", c[i]);
	
	return 0;
}
