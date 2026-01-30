#include <random>
#include <iostream>

void advance(int horseNum, int* horses);
void printLane(int horseNum, int* horses);
bool isWinner(int horseNum, int* horses);

int main(){
	int horseNum[] = {0, 1, 2, 3, 4};
	int horses[] = {0, 0, 0, 0, 0};
	bool keepGoing = true;
	while (keepGoing == true){
	int i = 0;
	for (i = 0; i < 5; i++){
		advance(i, &horses[i]);
		printLane(i, &horses[i]);
		//bool horseWon = false;
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
	std::string track = "...............";
	track[*horses] = horseNum;
	int i = 0;
	for (i = 0; i < 15; i++){
		std::cout << track[i];
	} //end for
	std::cout << "\n";
} //end printLane function

bool isWinner(int horseNum, int* horses){
	if (*horses > 15){
	std::cout << "Horse " << horseNum << "is the winner!! " << std::endl;
		bool isWinner = true;
	} //end if
	else{
		bool isWinner = false;
	} //end else
	return(isWinner);
} //end isWinner function

