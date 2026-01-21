//Probelm

    /*You are given an integer N. Your task is to find the nearest prime number to N.
    
    If N itself is prime, return N.
    If there are two prime numbers at the same minimum distance from N, return the smaller one.
    Input Format
    
    A single integer N
    Constraints
    
    1 ≤ N ≤ 10^6
    Output Format
    
    Print the nearest prime number to N.
    Sample Input 0
    
    13
    Sample Output 0
    
    13
    Sample Input 1
    
    8
    Sample Output 1
    
    7*/

//Solution

#include <stdio.h>

int prime(int n);
int main() {
    int n;
    scanf("%d",&n);
    
    if(n==1){
        printf("2");
        return 0;
    }
    if(prime(n)){
        printf("%d",n);
        return 0;
    }
    
    int x=1;
    while(1){
        
        if(prime(n-x)){
            printf("%d",n-x);
            break;
        }
        
        if(prime(n+x)){
            printf("%d",n+x);
            break;
        }
        x++;
    }
    return 0;
}

int prime(int n){
    int i;
    for(i=2;i*i<=n;i++){
        if(n%i==0 ){
            return 0;
        }   
    }
    return 1;
}
