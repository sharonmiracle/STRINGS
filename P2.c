#include <stdio.h>
#include <string.h>

int main()
{
    char s[200];
    scanf("%[^\n]s",s);
    char a[200];
    int j=0;
    
    for(int i=0;i<strlen(s);i++)
    {
        //if(s[i]=='0' || s[i]=='1' || s[i]=='2' || s[i]=='3' || s[i]=='4' || s[i]=='5' || s[i]=='6' || s[i]=='7' || s[i]=='8' || s[i]=='9' || s[i]=='@') 
        if((s[i]>='0' && s[i]<='9') || s[i]=='@')
        {
            a[j++]=s[i];
        }
    }
    a[j]='\0';
    printf("%s",a);

    return 0;
}
