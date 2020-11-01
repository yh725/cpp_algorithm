#include <stdio.h>
using namespace std;

int main(){
	//freopen("input008.txt", "rt", stdin);
	
	char s[31];
	int i, cnt=0;
	scanf("%s", &s);
	
	for(i=0; s[i]!='\0' ; i++){
		if(s[i]=='(') cnt++;
		else if(s[i]==')') cnt--;
		
		if(cnt<0) break;
		
	}
	
	if(cnt==0) printf("YES");
	else printf("NO");
	
	return 0;
}
