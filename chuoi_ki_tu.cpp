#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
	char chuoi[100];
	printf("\nNhap vao chuoi bat ky :");
	scanf("%s",chuoi);
	int k=0,dem=0;
	while(k<10){
		if(chuoi[k]!='\0') dem++;
		else break;
		k++;
	
	}
	printf("Chuoi ban da nhap co %d ky tu",dem);
	return  0;}
