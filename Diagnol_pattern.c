#include <stdio.h>

int main()
{
char a[]={'p','r','o','g','r','a','m'};
for(int i=0;i<7;i++,printf("\n")){
    for(int j=0;j<7;j++){
        if(i==j)
        printf("%c",a[i]);
        else if(j==6-i)
        printf("%c",a[6-i]);
        else
        printf(" ");
    }
    
}
return 0;
}
