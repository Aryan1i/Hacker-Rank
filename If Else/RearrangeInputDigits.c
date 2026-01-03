//Problem

    /*You are given a 4-digit integer N.
    
    Your task is to rearrange its digits in descending order, using only if-else statements.
    
    Note:
    
    You must not use arrays, loops, sorting functions, built-in sort utilities, or library functions.
    
    Instead, manually compare the digits using nested if-else conditions and determine their order from largest to smallest.
    
    Finally, print the rearranged digits without spaces.
    
    Input Format
    
    A single integer: {N}
    
    Constraints
    
    1000 ≤ N ≤ 9999
    N is always a 4-digit integer.
    Only if-else statements may be used for comparisons.
    No loops, no arrays, no sorting algorithms, no built-in functions like sort/max/min.
    Output Format
    
    Print the four digits of N, rearranged in descending order, without spaces.
    
    Sample Input 0
    
    2583
    Sample Output 0
    
    8532
    Sample Input 1
    
    2222
    Sample Output 1
    
    2222
    Sample Input 2
    
    9012
    Sample Output 2
    
    9210
    */

//Solution

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void descending3(int d1,int d2,int d3);
void desending2(int d1,int d2);
int main() {
    int n;
    scanf("%d",&n);
    
    int d1=n%10;
    n/=10;
    int d2=n%10;
    n/=10;
    int d3=n%10;
    n/=10;
    int d4=n;
    
        if(d1>=d2 && d1>=d3 && d1>=d4){
            printf("%d",d1);
            descending3(d2,d3,d4);
        }else if(d2>=d1 && d2>=d3 && d2>=d4){
            printf("%d",d2);
            descending3(d1,d3,d4);
        }else if(d3>=d1 && d3>=d2 && d3>=d4){
            printf("%d",d3);
            descending3(d1,d2,d4);
        }else {
            printf("%d",d4);
            descending3(d1,d2,d3);
        }
    return 0;
}

void descending3(int d1,int d2,int d3){
    if(d1>=d2 && d1>=d3){
        printf("%d",d1);
        desending2(d2,d3);
    }else if(d2>=d1 && d2>=d3){
        printf("%d",d2);
        desending2(d1,d3);
    }else {
        printf("%d",d3);
        desending2(d1,d2);
    }
}

void desending2(int d1,int d2){
    if(d1>=d2){
        printf("%d%d",d1,d2);
    } else{
        printf("%d%d",d2,d1);
    }
}
