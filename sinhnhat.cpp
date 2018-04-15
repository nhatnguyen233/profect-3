#include<stdio.h>

int main(){
	
	int i,ngay,thang,nam,songay;
	int sumnam=0, sumngay=0;
	int tempthang, tempngay;
	int ngaysinh,thangsinh,namsinh;
	printf("Nhap ngay thang nam sinh: ");
	scanf("%i%i%i", &ngaysinh, &thangsinh, &namsinh);
	
	printf("ngay thang nam hien tai: ");
	scanf("%i%i%i", &ngay, &thang, &nam);
	
	for(i=namsinh + 1; i<=nam; i++){
		if(i%4==0){
			sumnam+=366;
		}
		else sumnam+=365;
	}
	if (thangsinh>thang){
		tempthang=thangsinh;
		thangsinh=thang;
		thang=tempthang;
		
	}
	for (i=thangsinh; i<thang;i++){
		switch(i){
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12: songay=31;
			case 4: case 6: case 9: case 11: songay=30;
			case 2: if(nam%4==0) songay=29;
					else songay=28;
		}
		if(ngaysinh>ngay){
			
			tempngay=ngaysinh;
			ngaysinh=ngay;
			ngay=tempngay;
			
		}
		sumngay=ngay-ngaysinh;
		printf("Tong so ngay sinh nhat la: %i", songay+sumngay+sumnam);
		
		return 0;
}
}
		

	
		
		
		
		
		
		
	
	
