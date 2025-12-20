//Problem

    /*Write a program to determine whether a given integer n is positive or negative using bitwise operators.
    
    Note: You are not allowed to use comparison operators like <, >, <=, or >=.
    
    Input Format
    
    A single integer n.
    Constraints
    
    −2^31 ≤ n < 2^31
    Output Format
    
    Print "Positive" if n is positive or zero.
    Print "Negative" if n is negative.
    Sample Input 0
    
    100
    Sample Output 0
    
    Positive
    Sample Input 1
    
    -100
    Sample Output 1
    
    Negative*/

//Solution


#include <stdio.h>

int main() {

    int num;
    scanf("%d",&num);
    
    int x=(num>>31)&1;
    
    if(x==0){
        printf("Positive");
    } else {
        printf("Negative");
    }
    return 0;
}
