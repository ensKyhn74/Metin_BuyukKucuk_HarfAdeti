#include <stdio.h>
#include <string.h>

int main()
{
    
 char metin[50];
 int i = 0;
 int sayac1 = 0,sayac2 = 0; // sayac1 buyuk harflerin adetini,sayac2 ise küçük harflerin adetini hesaplar
 
 printf("metin girin: ");
 gets(metin);
 
 while(metin[i] != '\0')
 {
  if(isupper(metin[i]))
  {
    sayac1++;
  }
  
  else if(islower(metin[i]))
  {
    sayac2++;  
  }
  
  i++;
 }
 
 printf("metindeki karakterlerin %d tanesi buyuk\n",sayac1);
 printf("metindeki karakterlerin %d tanesi kucuk\n",sayac2);
 
 return 0;
} 