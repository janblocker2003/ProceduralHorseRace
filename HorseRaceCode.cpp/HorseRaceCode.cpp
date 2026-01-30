#include <cstdlib>
#include <ctime>
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

	srand(time(NULL));

	while (keepGoing == true){
		for (int i = 0; i < NUM_HORSES; i++){
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
	int coin = rand() % 1;
	horses[horseNum] += coin;
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
	if (horses[horseNum] >= TRACK_LENGTH){
		std::cout << "Horse " << horseNum << " is the winner!! " << std::endl;
		bool winner = true;
	} //end if
	else{
		bool winner = false;
	} //end else
	return(winner);
} //end isWinner function

