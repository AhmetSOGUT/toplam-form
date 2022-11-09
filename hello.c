#include <stdio.h>


int main(){
	
    float n,k,toplam=0,sonuc;
   scanf("%f",&n);
    for( k=1; k<=n; k++){
          
       
         sonuc = (k+1)/k;
        
         toplam=toplam+sonuc;

    }  
    
    printf("%.2f\n",toplam);
    
    
    return 0;

}