/**************************************************************************
Author : Rohit Kumar | r.k2962002@gmail.com | https://rohitkumar.ml
Domain : C language (CodeForces)
Programs : cAPS lOCK
URL : https://codeforces.com/contest/131/problem/A

**************************************************************************/
#include <stdio.h>
#include <ctype.h>

int main()
{
    char s[104];
gets(s);
   int p=0,len=strlen(s),q=0;
   for (int i = 1; i < len; i++)
   {
       if(s[i]>='A'&&s[i]<='Z')
        q++;
   }
   if(q>=len-1)
   {
       for (int i = 1; i < len; i++)
       {
           s[i]=tolower(s[i]);
        }
        if(s[0]>='a'&&s[0]<='z')
            s[0]=toupper(s[0]);
        else
            s[0]=tolower(s[0]);
    }
printf("%s",s);
}

/**************************************************************************/

