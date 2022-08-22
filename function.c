#include<stdio.h>
// decleration/prototype
void printHello();
void printGoodBye();

int main () {
    printHello(); // function call
    printGoodBye(); // function call

return 0;
}

// function definition  
void printHello(){
    printf("Hello!\n");
}

void printGoodBye(){
    printf("GoodBye!\n");
}