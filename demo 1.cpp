#include<stdio.h>
#include<string.h>
int main(){
	char sentence[] = "Hello World !";
	int size = sizeof(sentence)/sizeof(char);
	for (int i=0;i<size; i++){
		printf("%d	,%c \n", i,sentence[i]);
	}
//	char str[] = "Hello World";
//	printf("%s\n", str);
//	
//	
//	printf("%s\n", &str[5]);
//	
//	printf("%.4s\n", str);
//	scanf("%c", str);
//int numbers;
//char str[100];
//printf("Nhap vao 1 so tu nhien bat ki: \n");
//
//scanf("%d", &numbers);
//
//printf("So ban vua nhap la: %d\n", numbers);
//
//printf("Nhap vao 1 chuoi ky tu bat ki: \n");
//
//getchar();
//
//gets(str);
//
//puts(str);

char str1[] = "abc";
char str2[] = "xyz";
int result = strcmp(str1,str2);
if(result==1){
	printf("Str1 giong str2 ");
}
else{
	printf("Str1 khac str2");
}

	return 10;
}
