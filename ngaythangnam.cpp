#include<stdio.h>

int main(){
	
	int songay, thang, nam;
	printf("ngay, thang, nam:");
	scanf("%d%d%d", &songay, &thang, &nam);
	
	if(thang>=1 && thang<12){
		switch(thang)
		{
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

		printf("thang %d nam %d co so ngay la: %d", thang, nam, songay);
	}
	else {
		printf("khong hop le");
	}
	
	return 0;
}
	
	
	
	
