#include <stdio.h>
#include <stdlib.h>

  int zincir(int sayi){
      int k,p,t,sayac=1;
      if(sayi<10 && sayi>=100){
        printf("Yanlis!! Lutfen 2 basamakli bir sayi giriniz...");
      }
     while(sayi>=10){
        k = (sayi%10)*10;
        p = sayi/10;
        t = k+p;
        //printf("%d \n",t);
        if(t>sayi){
            sayi = t-sayi;
            sayac++;
        }
        else if(sayi>t){
            sayi = sayi-t;
            sayac++;

        }

    }
     printf("Cikarma zincir uzunlugu : %d",sayac);

   return k;

}


int main()
{
    int sayi,k,p,t,sayac=1;
    printf("Sayiyi giriniz...");
    scanf("%d",&sayi);
    zincir(sayi);

    /*while(sayi>=10){
        k = (sayi%10)*10;
        p = sayi/10;
        t = k+p;
        //printf("%d \n",t);
        if(t>sayi){
            sayi = t-sayi;
            sayac++;
        }
        else if(sayi>t){
            sayi = sayi-t;
            sayac++;

        }

    } printf("%d",sayac);*/















    return 0;
}
