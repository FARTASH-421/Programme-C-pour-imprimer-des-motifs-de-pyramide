#include <stdio.h>

int main(){

    char myinput;
    printf("Please enter you charcater: ");
    scanf("%c", &myinput);
    if(myinput >= '0' && myinput <= '9'){
         printf("Digit\n");
    }else if(myinput >= 'a' && myinput <= 'z'){
        printf("Small Letter\n");
    }else if(myinput >= 'A' && myinput <= 'Z'){
        printf("Capital Letter\n");

    }else {
        printf("Other\n");
    }

    return 0;
}