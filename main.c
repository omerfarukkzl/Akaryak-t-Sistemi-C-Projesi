#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
    int devam=1,toplam=0,PompaTuru,YakitTipi,YakitMiktari;
	while(devam==1)
	{
		
	KarsilamaMesaji();
	
	FiyatListesi();
	
	YakitTipi=DegerGirisi();
	
	YakitMiktari=DegerGirisi2();
	
	PompaTuru=DegerGirisi3();
	
	toplam+=YakitAl(YakitTipi,YakitMiktari,PompaTuru);
	
	printf("Odemeniz gereken tutar: %d \n\n",toplam); 
	
	printf("Tekrar akaryakit almak ister misiniz? (EVET=1 HAYIR=2)\n\n");
	scanf("%d",&devam);
	if(devam==2)
	{
		devam=2;
	}
	
	printf("*****Bizi tercih ettiginiz icin tesekkur ederiz. :)*****");
	
	
	}
	
		
	return 0;
}


void KarsilamaMesaji()
{
	FILE *dosya;

	int c=0;

	dosya=fopen("BilgilendirmeMetni.txt","r");

	if(dosya==NULL)

		printf("bu dosya yok\n");

	else

		{

			do

			{

				c=getc(dosya);//dosyadan karakter oku

				putchar(c);// ekranda göster

			}

			while(c!=EOF);

			

		}
		printf("\n");

	fclose(dosya);
}
void FiyatListesi()
{
	FILE *dosya;

	int c=0;

	dosya=fopen("yakitfiyatlari.txt","r");

	if(dosya==NULL)

		printf("bu dosya yok\n");

	else

		{

			do

			{

				c=getc(dosya);//dosyadan karakter oku

				putchar(c);// ekranda göster

			}

			while(c!=EOF);

			

		}

	fclose(dosya);
}

int DegerGirisi()
{
	int yakittipi2;
	char plaka;
	printf("\nPlaka giriniz: ");
	scanf("%s",&plaka);
    printf("Yakit tipini Seciniz: (Benzin=1,Dizel=2,LPG=3)\n");
	scanf("%d",&yakittipi2);

	return yakittipi2;

}
int DegerGirisi2()
{
	int yakitmiktari2;  
	printf("Yakit miktarini Giriniz: \n");
	scanf("%d",&yakitmiktari2);

	return yakitmiktari2;

}
int DegerGirisi3()
{
	int pompaturu2;

	printf("Pompa turunu seciniz: (1,2,3)\n");
	scanf("%d",&pompaturu2);
	
	return pompaturu2;
}


int YakitAl(int YakitTipi,int YakitMiktari,int PompaTuru)
{
	int toplamUcret,benzin=25,dizel=20,lpg=10;
	
	
	
	if(PompaTuru==1)
	{
		
		if(YakitTipi==1)
		{
			toplamUcret=(YakitMiktari)*(benzin*1.1);
		
		}
	    else if(YakitTipi==2)
	    {
	    	toplamUcret=(YakitMiktari)*(dizel*1.1);
		}
		else if(YakitTipi==3)
		{
			toplamUcret=(YakitMiktari)*(lpg*1.1);
		}
	}
	else if(PompaTuru==2)
	{
		
		if(YakitTipi==1)
		{
			toplamUcret=(YakitMiktari)*(benzin*1.2);
		}
	    else if(YakitTipi==2)
	    {
	    	toplamUcret=(YakitMiktari)*(dizel*1.2);
		}
		else if(YakitTipi==3)
		{
			toplamUcret=(YakitMiktari)*(lpg*1.2);
		}
	}
	else if(PompaTuru==3)
	{
		
		if(YakitTipi==1)
		{
			toplamUcret=(YakitMiktari)*(benzin*1.3);
		}
	    else if(YakitTipi==2)
	    {
	    	toplamUcret=(YakitMiktari)*(dizel*1.3);
		}
		else if(YakitTipi==3)
		{
			toplamUcret=(YakitMiktari)*(lpg*1.3);
			
			return toplamUcret;
		}
	}
}



