/*
Sasikumar is a mathematics teacher, and he is preparing a question paper of his own, so he needs to calculate the answers for the questions he prepared without any errors. As he is busy with his work, he has no time to make it.



Write the program and trace the output for the following expressions:



a) x = a + b * 5 / 4 + c % 3 * 5, where a, b, and c are variables (inputs).

b) y = u >v ? u : v ; where u and v are variables (inputs).

c) z = ++i&& ++j && ++k; where i, j, and k are variables (inputs).

Input format :
Three integer inputs are needed, for the first expression,

Two integer inputs are needed, for the second expression and

Three integer inputs are needed for the third expression.

Output format :
The output consists of the answers for the equations after substituting their corresponding values.



Refer to the sample input and output for formatting specifications.

Sample test cases :
Input 1 :
5
3
14
2
4
-5
6
0
Output 1 :
x=18
y=4
z=1

*/
//CODING

// You are using GCC
#include<stdio.h>
int main()
{
    int exp1_a,exp1_b,exp1_c;
    int exp2_u,exp2_v;
    int exp3_i,exp3_j,exp3_k;
    int ans1,ans2,ans3;
    
    scanf("%d%d%d",&exp1_a,&exp1_b,&exp1_c);
    scanf("%d%d",&exp2_u,&exp2_v);
    scanf("%d%d%d",&exp3_i,&exp3_j,&exp3_k);
    
    ans1=exp1_a+exp1_b*5/4+exp1_c%3*5;
    ans2=exp2_u>exp2_v?exp2_u:exp2_v;
    ans3=(++exp3_i)&&(++exp3_j)&&(++exp3_k);
    printf("x=%d\ny=%d\nz=%d",ans1,ans2,ans3);
    return 0;
}