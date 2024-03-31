#include <stdio.h>
#include <string.h>

int func(char *p, int size){   // define func function
  int i;
    
  if( p == NULL || size < 0 ){   // for excpetion
    return -1;
  }
  
  for(i=0;i<size;i++){      // iterate in the 'size'
    if( i%4 == 0) printf("%c", *p );     // if i % 4 == 0, print the value of address that the pointer p points at, which is the first character of the string
  }
  
  return 1;  
}

int main(){
  char *pStr = "hello my world";   // String
  int ret;  // this is the result value
  
  ret = func(pStr, strlen(pStr));  // Call func
  if(ret < 0){   // troubleshoot
      printf("error in soojebi funct  ion");  
      return -1;
  }
  return 0;  
}

// output is...
// hhhh
