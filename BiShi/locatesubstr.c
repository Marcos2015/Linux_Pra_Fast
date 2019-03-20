#include <stdio.h>
#include <stdlib.h>
char *locatesubstr(char *str1,char *str2)
{    
	 char *s1,*s2;//作为str1和str2的存档~     
	  for(;*str1!='\0';str1++)    
		   {   
			     s1=str1;
			       s2=str2;
			         while(*s1==*s2&&*s2!='\0')        
					   {
						      s1++;s2++;
						        }
				   if(*s2=='\0')            
					      return str1;   
				    }    
	   return NULL;
}
int main(int argc, char *argv[])
{    
	 char str1[500],str2[500],*k;    
	  printf("Please input a string:");    
	   gets(str1);    
	    printf("Please input another string:");    
	     gets(str2);    
	      printf("The result is:");    
	       if(locatesubstr(str1,str2)==NULL)        
		         printf("NULL");    
	        else        
			  for(k=locatesubstr(str1,str2);*k!='\0';k++)            
				     printf("%c",*k);    
		 //system("PAUSE");    
		  return 0;
}

