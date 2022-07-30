#include <stdio.h>
int my_function(int a, int b)
{
    if(a==1){
       return 1;
    }else if(a==0||b==0){
      return 0;
    }
    else if(b==1){
       return 2;
    }
    else{
       return my_function(a, b-1)+ my_function(a-1,b);
    }
}

int main()
{
    printf("RESULT: %d", my_function(3, 4));
}