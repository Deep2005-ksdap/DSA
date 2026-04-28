#include <stdio.h>
#include <string.h>

int isPalindrome(char str[]){
    int i = 0;
    int j = strlen(str) - 1;

    while(i < j){
        if(str[i] != str[j])
            return 0;
        i++;
        j--;
    }
    return 1;
}

void leftmostDerivation(char str[]){
    int n = strlen(str);

    printf("\nLeftmost Derivation Steps:\n");
    printf("S\n");

    if(n == 0){
        printf("S -> ε\n");
        return;
    }

    int i;
    for(i = 0; i < n/2; i++){
        if(str[i] == 'a')
            printf("S -> aSa\n");
        else
            printf("S -> bSb\n");
    }

    if(n % 2 == 1){
        if(str[n/2] == 'a')
            printf("S -> a\n");
        else
            printf("S -> b\n");
    }else {
        printf("S -> ε\n");
    }
}

int main(){
    char str[100];

    printf("Enter string: ");
    scanf("%s", str);

    if(isPalindrome(str)){
        printf("Output: Accepted\n");
        leftmostDerivation(str);
    }else{
        printf("Output: Rejected\n");
    }

    return 0;
}