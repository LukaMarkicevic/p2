#include <stdio.h>

int main(){

	int n;
	int k;
	scanf("%d%d",&n,&k);
	int arej[n];

	for(int i=0;i<n;i++){
		int z;
		scanf("%d",&z);
		arej[i]=z;
	}
	int count=0;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(arej[i]+arej[j]==k){
				count++;
			}
		}
	}
	printf("%d\n",count);


	return 0;
}