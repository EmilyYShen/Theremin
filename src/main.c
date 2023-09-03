#include <stdio.h>

int counter = 0;
int recurse(){
    ++counter;
    recurse();
    return 0;
}

int main(void)
{
    recurse();
    while (1)
    {
    }
}
