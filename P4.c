#include <stdio.h>
#include <string.h>

int main()
{
    char s[200];
    printf("Enter the words : ");
    scanf("%[^\n]s",s);
    int count = 1;
    char a;
    
    for(int i=0;i<strlen(s);i++)
    {
        for(int j=i+1;j<strlen(s);j++)
        {
            if(s[i]==s[j])
            {
                count+=1;
            }
        }
        if(count>1)
        {
            a = s[i];
            break;
        }
    }
    printf("'%c' occurs %d times",a,count);
    
    return 0;
}
