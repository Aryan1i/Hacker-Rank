//Problem

    /*Given an array of integers, determine the second smallest distinct element in the array.
    
    The second smallest element is defined as the element that is strictly greater than the smallest element and smaller than all other remaining elements.
    If the array does not contain at least two distinct elements, print -1.
    Note: Adjacent elements may be the same.
    
    Input Format
    
    First line: An integer N, representing the size of the array
    Second line: N space-separated integers
    Constraints
    
    1 ≤ N ≤ 10⁵
    −10⁹ ≤ A[i] ≤ 10⁹
    Output Format
    
    Print the second smallest distinct element in the array.
    If no such element exists, print -1.
    Sample Input 0
    
    3
    5 5 4
    Sample Output 0
    
    5
    Sample Input 1
    
    3
    5 5 5
    Sample Output 1
    
    -1
    Sample Input 2
    
    7
    5 3 8 6 2 9 1
    Sample Output 2
    
    2
    Sample Input 3
    
    6
    1 1 2 2 3 3
    Sample Output 3
    
    2*/

//Solution

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>

int main() {

    int size;
    scanf("%d",&size);
    
    int arr[size];
    
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    
    int min=INT_MAX;
    int secondMin=INT_MAX;
    
    for(int i=0;i<size;i++){
        if(arr[i]<min){
            secondMin=min;
            min=arr[i];
        }else if(arr[i]<secondMin && arr[i]>min){
            secondMin=arr[i];
        }
    }
    
    if(secondMin==INT_MAX){
        printf("-1");
    }else{
        printf("%d",secondMin);
    }
    return 0;
}
