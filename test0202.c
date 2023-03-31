#include<stdio.h>
int main()
{
    int array[]={2,3,4,5,3,8,9,9,4};
    int length=sizeof(array)/sizeof(array[0]);
    printf("Duplicate elements in the given array:\n");
    for(int i=0;i<length;i++)
    {
        for(int j=i+1;j<length;j++)
        {
        if(array[i]==array[j])
            printf("%d",array[j]);
        }
     }
     return 0;
}
