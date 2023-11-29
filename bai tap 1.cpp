#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int countDigits(char str[]){
	int numbers=0;
	for(int i=0;str[i] != '\0';i++){
					if(str[i]>= '0' && str[i]<= '9'){
						numbers++;
					}
	}
	return numbers;

	
}
int countSpecial(char str[]){
	int count=0;
	for(int i=0;str[i] != '\0';i++){
		if (str[i]=='~'|| str[i] =='`' || str[i]=='!' || str[i]=='@' || str[i]=='#'|| str[i]=='%'|| str[i]=='$'|| str[i]=='^'||str[i]=='&'||str[i]=='*'||str[i]=='*'||str[i]=='('||str[i]==')'||str[i]=='-'||str[i]=='_'||str[i]=='='||str[i]=='+'||str[i]=='?'||str[i]=='/'||str[i]=='[]' ){
			count++;
		}
	}
	return count;
}
int main(){
char a[1000];
int numbers;
	do{
		printf("\n**************MENU************\n");
		printf("1. Nhap vao chuoi ky tu \n");
		printf("2. In ra do dai chuoi va noi dung chuoi vua nhap \n");
		printf("3. In ra chuoi dao nguoc \n");
		printf("4. In ra so luong chu cai trong chuoi \n");
		printf("5. In ra so luong chu so trong chuoi \n");
		printf("6. In ra so luong ky tu dac biet trong chuoi \n");
		printf("7. Thoat\n");
		int choice;
		printf("Lua chon cua ban la: ");
		scanf("%d", &choice);
		switch(choice){
			case 1:
				printf("Nhap vao chuoi ki tu: ");
				gets(a);
				break;
			case 2:
				printf("Do dai chuoi la: %d\n", strlen(a));
				printf("Noi dung chuoi vua nhap la: %s\n", a);
				break;
			case 3:
				printf("Chuoi dao nguoc la: %s", strrev(a));
				break;
			case 4:
				printf("So luong chu cai trong chuoi la: \n");
				for(int i=0;i<strlen(a);i++){
					printf("%c\n", a[i]);
				}
				break;
			case 5:
				printf("So luong chu so trong chuoi la: %d\n", countDigits(a));
				break;
			
			case 6:
				printf("So luong ky tu dac biet trong chuoi la: %d\n", countSpecial(a));
				break;
				
				
			case 7:
				printf("Ket thuc chuong trinh!");
				exit(0);
				default:
					printf("Vui long chon tu 1 den 7: ");
		}
		
	}
	while(1==1);
	
	

}
