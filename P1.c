#include <stdio.h>
#include <string.h>

int main()
{
    char s[200];
    scanf("%[^\n]s",s);
    
    for(int i=0;i<strlen(s);i++)
    {
        if(s[i]=='a')
        {
            s[i]='b';
        }
        else if(s[i]=='e')
        {
            s[i]='f';
        }
        // else if(s[i]=='0' || s[i]=='1' || s[i]=='2' || s[i]=='3' || s[i]=='4' || s[i]=='5' || s[i]=='6' || s[i]=='7' || s[i]=='8' || s[i]=='9')
        else if(s[i]>='0' && s[i]<='9')
        {
            s[i]='d';
        }
    }
    printf("%s",s);

    return 0;
}
