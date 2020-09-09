/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    int coins[] = {500,250,100,50,10};
    int count[] = {0,0,0,0,0};
    int money = 890;
    int i = 0 ;
    
    while(money != 0){
        if(money < 0){
            count[i]--;
            money += coins[i++];
        }
        else{
            count[i]++;
            money -= coins[i];
        }
    }
    for(int i = 0 ; i < 5; i++)
        cout << count[i] << " ";
    return 0;
}
