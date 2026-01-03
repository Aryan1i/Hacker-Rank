//Problem

    /*Write a program to find the minimum of two integers a and b without using any comparison operators (<, >, <=, >=). Use only bitwise operators and logical operators to determine which number is smaller.

    Input Format
    
    Two space-separated integers a and b.
    Constraints
    
    −10^9 ≤ a,b ≤ 10^9
    Output Format
    
    Print the smaller of the two integers.
    Sample Input 0
    
    5 3
    Sample Output 0
    
    3
    Sample Input 1
    
    -7 2
    Sample Output 1
    
    -7*/

//Solution

#include <stdio.h>

int main() {
    int num1,num2;
    scanf("%d%d",&num1,&num2);
    
    int diff = num1-num2;
    
    int sign = (diff>>31)&1;
    
    int min=num1*sign + num2*(1-sign);
    
    printf("%d",min);
    return 0;
}
