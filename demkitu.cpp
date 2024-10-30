// Trieu Than Channel - Let's Grow Together!

#include<stdio.h>
#include<string.h>

// viet chuong trinh dem so lan xuat hien cua cac ki tu a,D, B, c,... 
// trong chuoi cho truoc khong phan biet chu hoa, chu thuong.
/*	Y tuong: * dung xau s[], str[26], mang a[26] ung voi 26 chu cai de dem so lan xuat hien tung chu cai.
	doc thong tin tu file/nhap tu ban phim/ gan truoc xau vao bien char s[].
	sau do viet thuong tat ca cac ki tu, tao mot xau str gom 26 chu cai "abc...xyzw"
	so sanh neu ki tu s[i] == str[j] thi a[j]++;
	cuoi cung in ra ket qua.
*/
//"abcdefghijklmpnoqrstuvxywz"

void xuat( int a[], char str[] ){
	for(int i = 0; i< 26; i++ )
		printf("\n%c: %d", str[i], a[i]);
}

void dem( char s[] ){
	strlwr(s);// viet thuong tat ca cac ki tu cua xau
	char str[26];
	strcpy(str,"abcdefghijklmpnoqrstuvxywz");
	int a[26] = {0};
	for(int i = 0; i< strlen(s); i++ )
		for(int j = 0; j < 26; j++ )
			if( s[i] == str[j] ) a[j] ++;
	xuat(a, str);
}

void nhap(){
	FILE *fin = fopen("Data1.txt","r");
	char s[255];
	fgets(s,255,fin);
	fclose(fin);
	dem(s);
}

int main(){
	nhap();
	return 0;
}
