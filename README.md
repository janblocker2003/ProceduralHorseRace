#include <random>
#include <iostream>

[do the thing where you say 'I promise this function exists']

def main
horseNum = 0, 1, 2, 3, or 4
horses = an array containing (0, 0, 0, 0, 0)
bool keepGoing = True
while keepGoing == True
  for i in horses
    advance(int horseNum, int*horses)
    printLane(int horseNum, int+ horses)
    isWinner(int horseNum, int* horses)
      if isWinner == True
        keepGoing = False
      else if
        keepGoing = True


void advance(int horseNum, int* horses);
use random to generate either 0 or 1
put this into variable Move
if move == 1 
  then horses[horseNum] ++ (add one to position)
else if 
  then horse doesn't move (nothing happen)


void printLane(int horseNum, int* horses);
make a list of 15 dots called track
currentPosition = horses[horseNum]
ammend track-> track[currentPosition] gets horseNum
print track


bool isWinner(int horseNum, int* horses);
if horses[horseNum] > 15
  print [horseNum] is the winner!
  isWinner gets true
else if 
  isWinner gets false
return isWinner
