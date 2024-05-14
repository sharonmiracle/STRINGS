#include <stdio.h>
#include <string.h>

int main()
{
    char s[200];
    printf("Enter the words : ");
    scanf("%[^\n]s",s);
    char a[200];
    int j=0;
    
    for(int i=0;i<strlen(s);i++)
    {
        if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u' && s[i]!='A' && s[i]!='E' && s[i]!='I' && s[i]!='O' && s[i]!='U')   
        {          
            a[j++] = s[i];
        }
    }
    a[j]='\0';
    printf("%s",a);
    
    return 0;
}
