#include <stdio.h>
#include <string.h>
 

int main()
{   
    int n;
    printf("Enter size of string : ");
    scanf("%d",&n);
    char str[n];
    printf("Enter string : ");
    scanf("%s",str);
    
    char temp[n];
    for(int i = 0; i < n; i++){
        temp[i] = str[n-i-1];
    }

    printf("Reverse string : %s",temp);
    return 0;
}