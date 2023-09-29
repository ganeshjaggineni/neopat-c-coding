/*
Write a program to accept n numbers in an array. Find the minimum value and sum of all the elements in the array.

Input format :
The first line of the input consists of the value of n.

The next input is the array of elements.

Output format :
The output prints the minimum element and sum of the array.



Refer to the sample input and output for format specifications.

Sample test cases :
Input 1 :
5
2 6 -3 4 5
Output 1 :
Minimum = -3
Sum of all elements = 14
*/
//CODING
#include<stdio.h>
int main()
{
    int arr[100],n,min_val=9999,sum=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum = sum + arr[i];
        if(arr[i]<min_val)
            min_val = arr[i];
    }
    printf("Minimum = %d",min_val);
    printf("\nSum of all elements = %d",sum);
    return 0;
}