#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <Windows.h>
#include <unistd.h>
#include <string.h>

#include "program.c"

int main(){

    int choice;
    
    system("cls");
    loadingScreen();
    menu(choice);
    
    return 0;
}