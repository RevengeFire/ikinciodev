#include <stdio.h>

int main(){
	int not;
	float a,b,c;
	printf("isminiz : ");
	gets(isim);
	printf("ilk vize notunuz: ");
	scanf("%f",&a);
	printf("ikinci vize notunuz: ");
	scanf("%f",&b);
	printf("final notunuz: ");
	scanf("%f",&c);
	
	if (a<=100 && b<=100 && c<=100){
	float ortalama = (a+b)*0.4/2+c*0.6;
	int ortalama_int = (int) ortalama;
	if (ortalama_int>=90){
		printf("Puaniniz : %d ve basari notunuz AA, Sayin %s",ortalama_int,isim);
	}
	else if (ortalama_int>=80 && ortalama_int<90){
		system("cls");
		printf("Puaniniz : %d ve basari notunuz BA, Sayin %s",ortalama_int,isim);
	}
	else if (ortalama_int>=70 && ortalama_int<80){
		system("cls");
		printf("Puaniniz : %d ve basari notunuz BB, Sayin %s",ortalama_int,isim);
	}
	else if (ortalama_int>=60 && ortalama_int<70){
		system("cls");
		printf("Puaniniz : %d ve basari notunuz CB, Sayin %s",ortalama_int,isim);
	}
	else if (ortalama_int>=50 && ortalama_int<60){
		system("cls");
		printf("Puaniniz : %d ve basari notunuz CC, Sayin %s",ortalama_int,isim);
	}
	else if (ortalama_int>=40 && ortalama_int<50){
		system("cls");
		printf("Puaniniz : %d ve basari notunuz DC, Sayin %s",ortalama_int,isim);
	}
	else if (ortalama_int>=30 && ortalama_int<40){
		system("cls");
		printf("Puaniniz : %d ve basari notunuz DD, Sayin %s",ortalama_int,isim);
	}
	else if (ortalama_int>=20 && ortalama_int<30){
		system("cls");
		printf("Puaniniz : %d ve basari notunuz FD, Sayin %s",ortalama_int,isim);
	}
	else if (ortalama_int<20){
		system("cls");
		printf("Puaniniz : %d ve basari notunuz FF, Sayin %s",ortalama_int,isim);
	}
}
else printf("Lutfen notlarinizi dogru giriniz, Sayin %c!..",isim);
}
