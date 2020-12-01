#include <stdio.h>

void other(){
    printf("Hello there, hacker!");
    fflush(stdout);
}

void input() {
    char buffer[5];
    printf("%x%x\n", *((int*)(buffer + 9)), *((int*)(buffer + 13)));
    gets(buffer);
    printf("%x%x\n", *((int*)(buffer + 9)), *((int*)(buffer + 13)));
    gets(buffer);
}

int main() {
    printf("%p\n", &main);
    printf("%p\n", &other);
    input();
    printf("OK!");
    return 0;
}
