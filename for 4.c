/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdbool.h>
//a va b butun sonlar berilgan(a<b). a va b sonlari orasidagi barcha butun -
//a va b ni ham chiqaruvchi va chiqarilgan sonlar sonini chiqaruchi dastur
int main(){
    double narxi;
    printf("narxini kriting ");
    scanf("%lf", &narxi);
    
    //printf("b ni kriting ");
    //scanf("%d", &b);

    for(double i=1; i<=10; i+=1){
        printf("\n %lf kanfet: ", i );
        printf("%lf", i*narxi);
        //counter++;
        
        
    }
    //printf("chiqqan sonlar soni: %d\n", counter);
return 0;
}
