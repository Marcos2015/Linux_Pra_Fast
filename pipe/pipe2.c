#include <stdio.h>
#include <string.h>

int main()
{
    int ret[2];
    int hh=pipe(ret);

  if(hh==0)
  {
    char buf[100];
	memset(buf,'\0',100);
    write(ret[1],"I'm from China",30);

    int count=read(ret[0],buf,10);


    buf[10]='\0';
    printf("%d,%s\n",count,buf);

  }
    
    
    return 0;
}


