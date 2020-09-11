#include <stdio.h>

// int ArraySize(int k[a]){
// 	return sizeof(k)/sizeof(k[0]);
// }


int main(){

	int n;
	scanf("%d",&n);
	int ko1=n;
	int ko2=n;

	int jedan[n];
	int dva[n];

	for (int i = 0; i < ko1; i++)
	{
		int a;
		scanf("%d",&a);
		jedan[i]=a;
	}

	for (int i = 0; i < ko1; i++)
	{
		int b;
		scanf("%d",&b);
		dva[i]=b;
	}
	int broj;
	int j=0;
	while(1){

		for (int i = 0; i < n; ++i)
		{
			if(jedan[i]!=dva[i+j]){
				j++;
				break;
			}
		}
		printf("%d\n",n-j-1);
		break;
	}

	return 0;
}