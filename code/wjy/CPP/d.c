#include <stdio.h>

struct  pt
{
   int x; 
};

int main(int argc, const char *argv[])
{   
    struct pt dd;
    dd.x = 5;
    printf("%d\n",dd.x);
    
    return 0;
}

