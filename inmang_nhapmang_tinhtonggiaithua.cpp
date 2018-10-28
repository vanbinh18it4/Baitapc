#include<stdio.h>
#include<conio.h>
#include<string.h>
int giaithua(int n){
	int i, giaithua=1;
    for(i = 1; i <= n; i++)
    {
        giaithua=giaithua*i;
    }
   	return giaithua; 
}
int main(){
	int n,i,j,tong=0;
	//câu 1: nhap mang
	printf("Nhap vao mang n phan tu: ");
	scanf("%d",&n);
	int mang[100];
	for ( i = 0; i < n; ++i){
		printf("mang[%d] = ",i);
		scanf("%d",& mang[i]);		
	}
	//cau 2: in mang
	printf("Mang ban vua nhap :\n");
	for (int i = 0; i < n ; ++i)
		printf(" mang[%d]= %d\n",i,mang[i]);
	
	//cau 3: tính tong giai thua cac phan tu trong mang
	for (j=0 ; j<n ;j++){
		tong=tong+giaithua(mang[j]);
	}
	printf("tong giai thua cac phan tu cua mang: s=%d",tong);
		
}



