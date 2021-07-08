#include <stdio.h>
#include <string.h>
int main(void) {
	// your code goes here
	int i,t;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
	    int n,a,c=0,f=0;
	    scanf("%llu",&n);
	    char s[n][10],co[]="cookie",m[]="milk";
	    for(a=0;a<n;a++)
	    {
	        scanf("%s",s[a]);
	       
	    }
	    for(a=0;a<n;a++)
	    {
	        if(c==0 && strcmp(s[a],co)==0)
	        {
	            c=1;
	        }
	   else if(strcmp(s[a],m)==0)
	        {
	            c=0;
	        }
	        else
	        {
	            f=1;
	            break;
	        }
	        
	    }
	    if(f==1 || c==1)
	    {
	        printf("NO\n");
	    }
	    else
	    {
	        printf("YES\n");
	    }
	}
	return 0;
}

