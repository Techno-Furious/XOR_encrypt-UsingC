#include<stdio.h>

#define KEY 'K';

void printhex(char c){
    printf("%c(Hex=0x%x)\n", c, c);
    return;
}
void printbin(char c){
    printf("%c(Hex=0x%x)\n", c, c);
    return;
}

void encrypt(char *text){
    int i;
    for(i=0; text[i] != '\0'; i++){
        text[i] = text[i] ^ KEY;
    }
    return;
}

void decrypt(char *text){
    int i;
    for(i=0; text[i] != '\0'; i++){
        text[i] = text[i] ^ KEY;
    }
    return;
}

int main(){
    
    char text[100];
    printf("Enter Text: ");
    gets(text);
    printf("----------------------------Original Text: %s----------------------------\n", text);
    for (int i = 0; text[i]!='\0'; i++)
    {
        printhex(text[i]);
    }
    encrypt(text);
    printf("----------------------------Encrypted Text: %s----------------------------\n", text);
    for (int i = 0; text[i]!='\0'; i++)
    {
        printhex(text[i]);
    }
    decrypt(text);
    printf("----------------------------Decrypted Text: %s----------------------------\n", text);
    for (int i = 0; text[i]!='\0'; i++)
    {
        printhex(text[i]);
    }
    return 0;
}