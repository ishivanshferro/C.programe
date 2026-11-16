#include <stdio.h>
void england() {
    printf("You are in England\n");
    void japan();
    japan();
}

void japan() {
    printf("You are in Japan\n");
}

void india() {
    printf("You are in India\n");
    england();
}

int main() {
    printf("You are in main\n");
    india();

    return 0;
}