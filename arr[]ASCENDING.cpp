#include<stdio.h>
int main(){
	int num[10];
	int i,j,a,n;
	printf("Enter No. of elements:");
	scanf("%d",&n);
	printf("Enter the elements:");
	for(i=0;i<n;i++) {
	scanf("%d",num[i]);
}
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				if(num[i]>num[j]){
				a=num[i];
				num[i]=num[j];
				num[j]=a;
			}
			}
		}
	printf("The ascending order of elements are:");
	for(i=0;i<n;i++){
		printf("%d",num[i]);
	}
	return 0;
}
