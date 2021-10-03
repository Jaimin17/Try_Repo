#include <stdio.h>
#include <stdlib.h>
int increment();
int main()
{
    int value;
    value = increment();
    value = increment();
    value = increment();
    
    printf("%d",value);
    return 0;
}





int increment()
{
    static int count; // Is var doesn't destroid for completion of exicution //
    count = count + 1;
    return count;
}