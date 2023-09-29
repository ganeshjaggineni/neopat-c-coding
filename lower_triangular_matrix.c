/*
Sheela is a Math's Professor. She wants to display the lower triangular matrix from her original matrix. Help her write a program to display the lower triangular matrix (N*M).

Input format :
The first input line contains row and column values.

The second line of input consists of a matrix value.

Output format :
The output displays the lower triangular matrix.



Refer to sample input and output for format specifications.

Sample test cases :
Input 1 :
3 4
1 2 4 5
4 5 3 2
7 8 9 7
Output 1 :
Lower Triangular Matrix
1 0 0 0 
4 5 0 0 
7 8 9 0 
Input 2 :
6 6
7 4 1 2 3 7 
8 5 2 3 9 5
9 6 3 2 1 6
9 5 1 2 3 8
4 5 6 3 2 1
7 8 9 6 5 4
Output 2 :
Lower Triangular Matrix
7 0 0 0 0 0 
8 5 0 0 0 0 
9 6 3 0 0 0 
9 5 1 2 0 0 
4 5 6 3 2 0 
7 8 9 6 5 4 
*/
//CODING
#include<stdio.h>
int main()
{
    int mat[100],row,col;
    scanf("%d%d",&row,&col);
    printf("Lower Triangular Matrix\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&mat[i]);
            if(i>=j)
                printf("%d ",mat[i]);
            else
                printf("%d ",0);
        }
        printf("\n");
    }
    return 0;
}