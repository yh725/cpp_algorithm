#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int n, m, i, a_cnt=0, b_cnt=0, c_cnt=0;
	char idx;
	
	scanf("%d", &n);
	
	vector<int> a(n);
	
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	
	sort(a.begin(), a.end());
	
	scanf("%d", &m);
	
	vector<int> b(m);
	
	for(i=0; i<m; i++){
		scanf("%d", &b[i]);
	}
	
	sort(b.begin(), b.end());
	
	vector<int> c(n+m);
	
	for(i=0; i<n+m; i++){
		if(a[a_cnt] == b[b_cnt]){
			c[c_cnt++] = a[a_cnt++];
			b_cnt++;
		}else if(a[a_cnt] < b[b_cnt]){
			a_cnt++;
		}else{
			b_cnt++;
		}
		
		if(a_cnt>n || b_cnt>m) break;
	}
	
	for(i=0; i<c_cnt; i++) printf("%d ", c[i]);
	
	return 0;
}
