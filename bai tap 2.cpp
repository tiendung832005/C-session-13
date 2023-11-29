#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int countCurrent(char str[], char target){
	int count = 0;
	for (int i=0;str[i]!='\0';i++){
		if(str[i] ==  target){
			count++;
		}
	}
	return count;
}
int main(){
	char a[1000];
	int find;
	int result;
	do{
	printf("\n*************MENU***********\n");
	printf("1. Nhap vao chuoi ki tu \n");
	printf("2. In ra noi dung chuoi \n");
	printf("3. Nhap vao 1 ky tu, dem so lan xuat hien ky tu trong chuoi\n");
	printf("4. Nhap vao 2 ky tu, thay the cac ky tu thu 2 trong chuoi thanh ky tu thu nhat\n");
	printf("5. Nhap vao 1 ky tu, xoa bo cac ky tu trong chuoi");
	printf("6. Thoat\n");
	int choice;
	printf("Lua chon cua ban la: ");
	scanf("%d", &choice);
	switch(choice){
		case 1:
			printf("Nhap vao chuoi ky tu: ");
			gets(a);
			break;
		case 2:
			printf("Noi dung chuoi vua nhap la: %s", a);
			break;
		case 3:
			printf("Nhap ky tu muon dem so lan xuat hien: ");
			scanf("%c", &find);
			result = countCurrent(a, find);
			printf("So lan xuat hien la: %d", result);
			break;
		case 6:
			printf("Ket thuc chuong trinh!");
			exit(0);
			default:
				printf("Vui long chon tu 1 den 6: ");
	}
	
		
	}
	while(1==1);
	
}
