# include <stdio.h>

void butler(void);
int main(void){
    printf("I will summon the butler fuction.\n");
    butler();
    printf("Yew. Bring me some tea and writeable DVDs.\n");
    
    return 0;
}

void butler(void){
    printf("You rang, sir?\n");
}