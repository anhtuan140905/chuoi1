#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void storeName();//kho doo` choi, noi chua ham lien quan chuoi
				 //y = f(x) = x^2

void storeNameV2();//khai b�o chu�i ki�u "" cho hi�u qua?, tu ch�n null v�o cu�i'
				   //chu�i chu' ko phai cu�i' mang?

void storeNameV3();//��i? k� tu. hoa sang thuong, thuong sang hoa of 1 chuoi

void storeNameV4();//��i? chu�i tu thuong sang hoa

void storeNameV5();

int main(int argc, char *argv[]) {
	//storeName();
	//storeNameV2();
	//storeNameV3();
	//storeNameV4();
	storeNameV5();
	return 0;
}

void storeNameV5(){
	char name[50];
	printf("Input your name: "); 
	fgets(name, sizeof(name),stdin);
	
	printf("Hi %s\n", name);
}

void storeNameV4() {
	char name[50] = "NguyEn PhUc AnH TuAn$$$"; //d�i? t�n th�nh chu hoa
	printf("The original name: %s\n", name); //C tu dong * t�t' ca? k� tu.
	
	strupr(name);//d�, why dua mang cho h�m, m� h�m thay d�i?
				 //mang bi thay doi!!!!
				 //truyene` tham chi�u', truy�n` con tro?, gi�ng' h�m swap(*
				 //t�n mang? name o main(), dua cho ham strupr()
				 //h�m run xong, name bi. thay d�i?
				 //r� r�ng name l� dia chi name[0] dua cho h�m
				 
	printf("After repair name: %s \n", name);
}



void storeNameV3() {
	char name[50] = "NguyEn PhUc AnH TuAn"; //d�i? t�n th�nh chu hoa
	printf("The original name: %s\n", name); //C tu dong * t�t' ca? k� tu.
	//d�i? tu hoa sang thuong
	//quet qua tat ca? c�c k� tu, +-32 don vi t�y hoa thuong
	for(int i = 0; i < strlen(name); i++) {
		if(name[i] >= 'a' && name[i] <= 'z') //TOANG V� D�U' C�CH, GACH. NGANG - 32 RA K� TU G�
			name[i] = name[i] - 32;
	}
	printf("The upper case name: %s\n", name);
}


void storeNameV2() {
	char name[] = "E't-O-E't";
	//khai b�o chu�i nhanh hon, khoi caan` tung ki tu
	//nh�y d�i
	//C tu chen them k� tu null vao cu�i' chu�i!!!!
	printf("Your name: %s\n", name);
	printf("The length of your name: %d\n", strlen(name));
	
	//ki�m? tra phaan` c�n lai. of array-chuoi l� g�
	//[50] byte: E't-O-E't NULL, R�C HAY C�I ME. G� CHUA BI�T'
	printf("The rest of the array after the name/NULL\n");
	//sau ki tu 10 la g�
	for(int i = 0; i < 50; i++) {
		printf("%c ", name[i]);
	}
}

void storeName() {
	//int a[] = {2, 4, 6, 8, 10};
	
	//char name[] = {'S', 'O', 'S', '$', '#', '\0'};
	char name[] = {'S', 'O', 'S', 0, '$', '#', '\0'};
	//k� tu dc quyeen` x�i theo 2 c�ch: m� ASCII hoac ki tu
	//ki tu nhay don, m� ASCII l� con s�' nguy�n
	
	//h�m xem d�. d�i cua? chu�i/t�n m�nh strlen(dua chuoi vao) -> d�. d�i cua chu�i
	int len = strlen(name);
	printf("%d\n", len);
	
	printf("Your name: %s\n", name);
	//%s qu�t chu�i/ mang? cho d�n' khi gap NULL stop ngay!!!
	//b�o hi�u. h�t' chu�i rooooi`, th� x�i for bthg
	//for bt se qu�t qua tung ptu mang
}
