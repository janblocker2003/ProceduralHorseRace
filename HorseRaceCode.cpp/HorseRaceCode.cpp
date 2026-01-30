#include <random>
#include <iostream>

void advance(int horseNum, int* horses);
void printLane(int horseNum, int* horses);
bool isWinner(int horseNum, int* horses);

const int TRACK_LENGTH = 15;
const int NUM_HORSES = 5;
int main(){
	int horseNum[] = {0, 1, 2, 3, 4};
	int horses[NUM_HORSES] = {0, 0, 0, 0, 0};
	bool keepGoing = true;
	while (keepGoing == true){
		int i = 0;
		for (i = 0; i < NUM_HORSES; i++){
			advance(i, &horses[i]);
			printLane(i, &horses[i]);
			bool horseWon = isWinner(i, &horses[i]);
			if (horseWon == true) {
				keepGoing = false;
			} //end if
			else {
				keepGoing = true;
			} //end else
		} //end for
	} //end while
} //end main

void advance(int horseNum, int* horses){
	std::random_device rd;
	std::uniform_int_distribution<int> dist(0, 1);
	int coin = dist(rd);
	if (coin == 1){
		(*horses)++;
	} //end if
} //end advance function

void printLane(int horseNum, int* horses){
	for (int i = 0; i < TRACK_LENGTH; i++){
		if (i == horses[horseNum]){
			std::cout << horseNum;
		} //end if
		else {
			std::cout << ".";
		} //end else
	} //end for
	std::cout << std:: endl;
} //end printLane function

bool isWinner(int horseNum, int* horses){
	bool winner = false;
	if (*horses >= TRACK_LENGTH){
	std::cout << "Horse " << horseNum << "is the winner!! " << std::endl;
		bool winner = true;
	} //end if
	else{
		bool winner = false;
	} //end else
	return(winner);
} //end isWinner function

