#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Memory leak is caused by improper use of heap section of application's memory.

// Simple betting game
// "Jack Queen King" - initial positions
// Computer shuffles the positions of these cards
// Player has to guess the position of queen
// if he wins, he takes 3 times the amount of bet
// if he looses, he looses the bet amount
// player has $100 initially

int cash = 100;

void play(int bet) {
    // char C[3] = {'J', 'Q', 'K'};
    char* C = (char*)malloc(3*sizeof(char)); // C++ : char* C = new char[3]
    C[0] = 'J';
    C[1] = 'Q';
    C[2] = 'K';
    printf("Shuffling........");
    srand(time(NULL)); // seeding the random number generator
    for(int i = 0; i < 5; i++) {
        int x = rand() % 3;
        int y = rand() % 3;
        int temp = C[x];
        C[x] = C[y];
        C[y] = temp;
    }
    int playerGuess;
    printf("What's the position of queen - 1, 2 or 3?");
    scanf("%d\n", &playerGuess);
    if(C[playerGuess - 1] == 'Q') {
        cash += 3 * bet;
        printf("You win! Result = %c %c %c Total cash = %d", C[0], C[1], C[2], cash);
    }
    else {
        cash -= bet;
        printf("You Loose! Result = %c %c %c Total cash = %d", C[0], C[1], C[2], cash);
    }
    free(C); // to avoid memory leak
}

int main() {
    
    int bet;
    while(cash > 0) {
        printf("What's your bet: ");
        scanf("%d\n", &bet);
        if(bet == 0 || bet > cash) break;
        play(bet);
    }

    return 0;
}

// When a function is called by another function like in this case 'main' calls the function 'play' in it, then 
// the execution of the calling function is paused and the called function starts executing. Every function
// when it is invoked, is assigned a section in stack section of the application's memory called stack frame.
// All the local variables of that function are assigned memory inside of that stack frame. After that function
// completes its execution then the assigned memory to that function known as stack frame is reclaimed back and 
// all the local variables are destroyed. That's why when the one complete cycle of 'play' function is completed
// then its local variables get destroyed. In next cycle, they are assigned barnd new memory. That's why, in this
// case there is no fear of memory leak. Only worse thing that can happen in this case is stack overflow which 
// happens when in the single run of any function, its local variables get so big that they exceed the size of 
// whole stack as stack is fixed in size and its size is determined by OS at compile time.
// But, in the case when we use dynamic memory for data storage, the memory is allocated in heap section of
// application's memory which is dynamic in size. In C programming language, when we store data using dynamic
// memory allocation in heap then every time when the function is called (in this case 'play' function) its local
// variables get alloction of memory in heap. But when the function completes its execution the assigned memory
// is not reclaimed back automatically rather we have reclaim it back explicitly (using 'free' function in C). The
// next time when the same function is called again then it will get brand new memory and if we will not reclaim
// back the allocated memory after each iteration then eventually we will run into memory related problems (memory
// shortage ... etc).