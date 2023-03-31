#include<stdio.h>
int main()
{
    int mat1[3][3],mat2[3][3],matsub[3][3],i,j;
    printf("Enter the first matrix:");
    for(i=0;i<3;i++)
    {
    for(j=0;j<3;j++)
        scanf("%d",&mat1[i][j]);
    }
    printf("Enter the second matrix:");
    for(i=0;i<3;i++)
    {
    for(j=0;j<3;j++)
    scanf("%d",&mat1[i][j]);
    }
    for(i=0;i<3;i++)
    {
    for(j=0;j<3;j++)
        matsub[i][j]=mat1[i][j]-mat2[i][j];
    }
    printf("The subraction of the two matrix are:");
    for(i=0;i<3;i++)
    {
    for(j=0;j<3;j++)
        printf("%d",matsub[i][j]);
    printf("\n");
    }
    return 0;
}
