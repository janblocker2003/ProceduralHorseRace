#include <random>
#include <iostream>

void advance(int horseNum, int* horses);
void printLane(int horseNum, int* horses);
bool isWinner(int horseNum, int* horses);

int main(){
	int horseNum[] = {0, 1, 2, 3, 4};
	int horses[] = {0, 0, 0, 0, 0};
	bool keepGoing = True;
	while keepGoing == True;
	for (i = 0, i < 5; i++){
		advance(int i, int* horses[i]);
		printLane(int i, int* horses[i]);
		isWinner(int i, int* horses[i]);
		if (isWinner == True) {
			keepGoing = False;
		} //end if
		else {
			keepGoing = True;
		} //end else
