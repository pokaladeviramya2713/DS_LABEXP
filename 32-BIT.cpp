#include<stdio.h>
int reverseDigit(int num){
	int rev_num=0;
	while(num!=0){
		rev_num=rev_num*10+num%10;
		num/=10;
	}
	return rev_num;
}
int main(){
	int num=8294;
	printf("ReverseDigits of given no.is %d",reverseDigit(num));
	return 0;
}
