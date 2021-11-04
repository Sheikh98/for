/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdbool.h>
//k va butun sonlar berilgan (n>0). k sonini n marta chiqaruvchi programma tuzish
int main(){
    int n, k;
    printf("n ni kriting ");
    scanf("%d", &n);

    printf("k ni kriting ");
    scanf("%d", &k);

    for(int i=0; i<n; i++){
        printf("\n%d", k);

    }
return 0;
}
