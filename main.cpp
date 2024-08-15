#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void storeName();//kho doo` choi, noi chua ham lien quan chuoi
				 //y = f(x) = x^2

void storeNameV2();//khai báo chuôi kiêu "" cho hiêu qua?, tu chèn null vào cuôi'
				   //chuôi chu' ko phai cuôi' mang?

void storeNameV3();//Ðôi? kí tu. hoa sang thuong, thuong sang hoa of 1 chuoi

void storeNameV4();//Ðôi? chuôi tu thuong sang hoa

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
	char name[50] = "NguyEn PhUc AnH TuAn$$$"; //dôi? tên thành chu hoa
	printf("The original name: %s\n", name); //C tu dong * tât' ca? kí tu.
	
	strupr(name);//dù, why dua mang cho hàm, mà hàm thay dôi?
				 //mang bi thay doi!!!!
				 //truyene` tham chiêu', truyên` con tro?, giông' hàm swap(*
				 //tên mang? name o main(), dua cho ham strupr()
				 //hàm run xong, name bi. thay dôi?
				 //rõ ràng name là dia chi name[0] dua cho hàm
				 
	printf("After repair name: %s \n", name);
}



void storeNameV3() {
	char name[50] = "NguyEn PhUc AnH TuAn"; //dôi? tên thành chu hoa
	printf("The original name: %s\n", name); //C tu dong * tât' ca? kí tu.
	//dôi? tu hoa sang thuong
	//quet qua tat ca? các kí tu, +-32 don vi tùy hoa thuong
	for(int i = 0; i < strlen(name); i++) {
		if(name[i] >= 'a' && name[i] <= 'z') //TOANG VÌ DÂU' CÁCH, GACH. NGANG - 32 RA KÍ TU GÌ
			name[i] = name[i] - 32;
	}
	printf("The upper case name: %s\n", name);
}


void storeNameV2() {
	char name[] = "E't-O-E't";
	//khai báo chuôi nhanh hon, khoi caan` tung ki tu
	//nháy dôi
	//C tu chen them kí tu null vao cuôi' chuôi!!!!
	printf("Your name: %s\n", name);
	printf("The length of your name: %d\n", strlen(name));
	
	//kiêm? tra phaan` còn lai. of array-chuoi là gì
	//[50] byte: E't-O-E't NULL, RÁC HAY CÁI ME. GÌ CHUA BIÊT'
	printf("The rest of the array after the name/NULL\n");
	//sau ki tu 10 la gì
	for(int i = 0; i < 50; i++) {
		printf("%c ", name[i]);
	}
}

void storeName() {
	//int a[] = {2, 4, 6, 8, 10};
	
	//char name[] = {'S', 'O', 'S', '$', '#', '\0'};
	char name[] = {'S', 'O', 'S', 0, '$', '#', '\0'};
	//kí tu dc quyeen` xài theo 2 cách: mã ASCII hoac ki tu
	//ki tu nhay don, mã ASCII là con sô' nguyên
	
	//hàm xem dô. dài cua? chuôi/tên mình strlen(dua chuoi vao) -> dô. dài cua chuôi
	int len = strlen(name);
	printf("%d\n", len);
	
	printf("Your name: %s\n", name);
	//%s quét chuôi/ mang? cho dên' khi gap NULL stop ngay!!!
	//báo hiêu. hêt' chuôi rooooi`, thì xài for bthg
	//for bt se quét qua tung ptu mang
}
