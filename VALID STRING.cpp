#include<stdio.h>
#include<string.h>
int main(){
	char input[100];
	printf("Enter a string:");
	scanf("%s",&input);
	if(strlen(input)>0){
		printf("VALID");
	}
	else{
		printf("INVALID");
	}
	return 0;
}
