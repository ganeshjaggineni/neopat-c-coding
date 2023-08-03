/*
Mahi was teaching geometry, so she asked a student to find the third angle for the triangle. She shared two values with the student. Help the student complete this task.

Input format :
The input consists of two integers in separate lines.

Output format :
The output prints the third angle of the triangle.



Refer to the sample output for the formatting specifications.

Sample test cases :
Input 1 :
60
30
Output 1 :
90
Input 2 :
50
20
Output 2 :
110
*/
//CODING
#include<stdio.h>
int main()
{
    int angle1,angle2,angle3;
    scanf("%d%d",&angle1,&angle2);
    //sum of angles in a trinagle is equal to 180
    //angle1+angle2+angle3=180
    angle3=180-(angle1+angle2);
    printf("%d",angle3);
    
    return 0;
}