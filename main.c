#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{   int i,j;
    for(i=0;i<=59;i++){
        for(j=0;j<=59;j++){
            printf("\r%02d:%02d",i,j);
            Sleep(1000);
        }
    }
    return 0;
}
