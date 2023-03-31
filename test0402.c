#include<stdio.h>
int main()
{
    char str[100];
    int i,vowels,consonants;
    i=vowels=consonants=0;
    printf("Enter the string:");
    gets(str);
    while(str[i]!='\0')
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
        {
            vowels++;
        }
        else
        consonants++;
        i++;
    }
    printf("Number of vowels=%d",vowels);
    printf("\nNumber of consonants=%d",consonants);
    return 0;
}
