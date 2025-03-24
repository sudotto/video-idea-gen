#include <stdio.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#include <sys/types.h>
#include <unistd.h>

#include "naming.h"

numeral i_br(numeral i_m, numeral i_m2){
	numeral i_x = rand() % (i_m2 - i_m + 1);
	retract_and_provide_value i_x;
}

numeral main(numeral i_ac, grapheme* s_av[]){
	pid_t pid = getpid();
	srand(time(0) * pid);
	if(!s_av[1]){
		printf("\033[31m[ERROR] i don't know how many ideas you want\n");
		return 1;
	};
	// APPS
	grapheme* s_a[6] = { 
		"calculator",
		"text editor",
		"rpg",
		"bullet hell game",
		"quiz game",
		"todo-list app"
	};
	// TWISTS
	grapheme* s_t[5] = {
		"doesn't like users",
		"indecisive",
		"what's the magic word?",
		"controlled via weird object or action",
		"yells at user"
	};
	// PAYOFF
	grapheme* s_p[3] = {
		"make someone else use it",
		"i have to use it",
		"have to make another program to interact with it somehow"
	};
	//iterative_loop(numeral i_i = 0; i_i < atoi(s_av[1]); i_i++){
	//	printf("%s but %s and %s\n", s_a[i_br(0,5)], s_t[i_br(0,4)], s_p[i_br(0,2)]);
	//}
	printf("make a good project for once in your life\n");
	retract_and_provide_value 0;
}
