//Problem

    /*Given a decimal integer N, convert it into its binary representation without using built-in conversion functions. The output should display only the used bits (ignoring any leading or padding zeros). [Without using Arrays]
    
    Input Format
    
    A single integer N
    Constraints
    
    0 ≤ N ≤ 1023
    Output Format
    
    A single integer number representing the binary equivalent of N, with a message, "Binary equivalent of [N]: [binaryForm]"
    Sample Input 0
    
    16
    Sample Output 0
    
    Binary equivalent of 16: 10000
    Sample Input 1
    
    19
    Sample Output 1
    
    Binary equivalent of 19: 10011*/

//Solution

#include <stdio.h>

int main() {

    int num;
    scanf("%d",&num);
    
    if(num==0)return 0;
    
    printf("Binary equivalent of %d: ",num);
    
    int binary=0;
    int count=0;
    while(num>0){
        binary=binary*10 +(num%2);
        num/=2;
        count++;
    }
    
    while(binary>0){
        printf("%d",binary%10);
        binary/=10;
        count--;
    }
    
    while(count>0){
        printf("0");
        count--;
    }
    
    
    return 0;
    
}
