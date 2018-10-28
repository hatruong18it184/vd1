#include<stdio.h>
#include<conio.h>
main(){
	int sdm,sdc;
	printf("nhap so dien cu: ");
	scanf("%d",&sdc);
	printf("nhap so dien moi: ");
	scanf("%d",&sdm);
	int tt=sdm-sdc;
	if(sdm>sdc){
		int s=0;
	    // so dien tieu thu <50,don gia la 1500
	    if(tt<50) s=tt*1500;
	    // so dien tieu thu >=50&&<=100,don gia la 2000
	    else if(tt>=50&&tt<=100) s=tt*2000-49*500;
	    // so dien tieu thu >100,don gia la 3000
	    else s=tt*3000-51*1000-49*1500;
	    printf("tong tien dien =%d ",s);
	}
	else printf("ban da nhap sai moi ban nhap lai: ");

}

