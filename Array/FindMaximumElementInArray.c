//Problem

    /*Given an array of integers, determine the maximum element present in the array.
    
    Input Format
    
    First line: An integer N, the size of the array
    Second line: N space-separated integers
    Constraints
    
    1 ≤ N ≤ 10⁵
    −10⁹ ≤ A[i] ≤ 10⁹
    Output Format
    
    Print the maximum element of the array.
    Sample Input 0
    
    5
    1 3 5 7 9
    Sample Output 0
    
    9
    Sample Input 1
    
    4
    -5 -2 -9 -1
    Sample Output 1
    
    -1
    Sample Input 2
    
    1
    100
    Sample Output 2
    
    100
    Sample Input 3
    
    5
    7 7 7 7 7
    Sample Output 3
    
    7
    Sample Input 4
    
    3
    1000000000 -1000000000 500
    Sample Output 4
    
    1000000000*/

//Solution

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d",&n);
    
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    int max=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    
    printf("%d",max);
    return 0;
}
