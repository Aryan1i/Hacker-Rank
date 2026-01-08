//Problem

    /*Given an integer n, calculate the product of its digits and the sum of its digits, then print the difference between the product and the sum.
    
    Difference = (Product of digits) − (Sum of digits)
    Input Format
    
    A single integer: n
    
    Constraints
    
    1 ≤ 𝑛 ≤ 10^5
    1 ≤ n ≤ 10^5
    Output Format
    
    Print a single integer representing: (product of digits of n) − (sum of digits of n)
    
    Sample Input 0
    
    234
    Sample Output 0
    
    15
    Sample Input 1
    
    4421
    Sample Output 1
    
    21
    Sample Input 2
    
    5
    Sample Output 2
    
    0*/

//Solution

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,product=1,sum=0;
    scanf("%d",&n);
    while(n>0){
        int x=n%10;
        n/=10;
        sum+=x;
        product*=x;
    }
    
    int diff=product-sum;
    printf("%d",diff);
    return 0;
}
