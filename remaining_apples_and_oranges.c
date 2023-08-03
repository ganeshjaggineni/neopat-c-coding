/*
Ramu and Somu are going on a picnic. Ramu packs m apples, n oranges. Somu packs m1 more apples than Ramu and n1 more oranges than Ramu. If Somu eats x of his apples and Ramu eats y of Somu's oranges, how many apples and oranges are left in total?

Input format :
Input consists of six integers: m, n, m1, n1, x, and y.

m - corresponds to the apples brought by Ramu.
n - corresponds to the oranges brought by Ramu.
m1 – Apples brought by Somu.
n1 – Oranges brought by Somu.
x - apples were eaten by Somu.
y – oranges were eaten by Ramu.
Output format :
The output should print two integers representing the remaining apples and oranges.



Refer to the sample input and output for formatting specifications.

Sample test cases :
Input 1 :
4 3 2 8 3 2
Output 1 :
7 12
Input 2 :
102 204 201 103 156 444
Output 2 :
249 67

*/
//CODING 

// You are using GCC
#include<stdio.h>
int main()
{
    int ramu_apple,somu_apple,ramu_orange,somu_orange,somu_apple_eat,ramu_orange_eat,rem_apple,rem_orange;
    
    scanf("%d",&ramu_apple);
    scanf("%d",&ramu_orange);
    scanf("%d",&somu_apple);  
    scanf("%d",&somu_orange); 
    scanf("%d",&somu_apple_eat);  
    scanf("%d",&ramu_orange_eat);
    
    somu_apple=somu_apple+ramu_apple;
    somu_orange=somu_orange+ramu_orange;
    
    rem_apple=(ramu_apple+somu_apple)-somu_apple_eat;
    rem_orange=(ramu_orange+somu_orange)-ramu_orange_eat;
    
    printf("%d %d",rem_apple,rem_orange);
    return 0;
}