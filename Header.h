#ifndef HEADER_H
#define HEADER_H

//Declaration of the structure that contains information about the no. of chips, balance the user has and the number of chips he has bet
typedef struct gamble
{
	int amt;
	int chip;
	int bet;
}gamble;

//Declaration of all the functions that are defined in Header.c
void delay(float seconds);
void print_str(char *a, float time);
int spin();
int rand_int(int a, int b);
void rand_int2(int *computer1, int *computer2, int *computer3);
void PlayCraps(gamble* data);
void buy_x(int x, gamble* data);
void sell_x(int x, gamble* data);
void check_bal(gamble* data);
void PlayRoulette(gamble* data);
void PlaySlotMachine(gamble* data);

#endif 