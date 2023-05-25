#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - prints the opcodes of its own
 * @argc 

void printOpcodes(int numBytes);

int main(int argc, char *argv[]) 
{
    if (argc != 2) 
    {
        printf("Error\n");
        return 1;
    }

    int numBytes = atoi(argv[1]);
    if (numBytes < 0) {
        printf("Error\n");
        return 2;
    }

    printOpcodes(numBytes);

    return 0;
}

void printOpcodes(int numBytes) 
{
    unsigned char *mainPtr = (unsigned char *)main;
    for (int i = 0; i < numBytes; i++) 
    {
        printf("%02x", mainPtr[i]);
    }
    printf("\n");
}

