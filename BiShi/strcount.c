#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int StrCount(char* str1,char* str2)
{    int i,j;    
     int count=0;    
     i=j=0;    
     while(str1[i]!='\0')    
     {        
	     while(str1[i]!='\0'&&str2[j]!='\0')        
	     {            
		     if(str1[i]==str2[j])            
		     {                
			     i++;                
			     j++;            
		     }            
		     else{                
			     i=i-j+1;                
			     j=0;            
		          }                    
	     }        
	     if(str2[j]=='\0')        
	     {            
		     count++;            
		     j=0;        
	     }    
     }    
return count;
} 



int main(int argc, char *argv[]) 
{    
	int count;    
	char str1[]="howareyouareGGGare";    
	char str2[]="are";    
	count=StrCount(str1,str2);    
	printf("%d\n",count);    
return 0;
}




