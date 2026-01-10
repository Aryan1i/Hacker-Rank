//Problem

    /*Given an integer n, write a program to calculate the n-th prime number, starting from 1.
    
    Input Format
    
    A single integer 𝑛.
    Constraints
    
    1 <= n <=104
    Output Format
    
    Print the n-th prime number.
    Sample Input 0
    
    6
    Sample Output 0
    
    13
    Explanation 0
    
    13 is the 6th prime number.
    
    Sample Input 1
    
    12
    Sample Output 1
    
    37*/

//Solution

#include <stdio.h>
#include <math.h>

int main() {

    int n;
    scanf("%d",&n);
    
    int count=0;
    int num=2;
    while(count<n){
        int isPrime=1;
        for(int j=2;j<=sqrt(num);j++){
            if(num%j==0){
                isPrime=0;
                break;
            }
        }
        if(isPrime==1){
            count++;
        }
        num++;
    }
    
    printf("%d",num-1);
    
    return 0;
}
