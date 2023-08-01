//horse.cpp

#include <iostream>
#include <cstdlib>
#include <sstream>
#include <string>

//function prototypes
void step();
void race();
int finish();

int horse[] = {0, 0, 0, 0, 0}; 


main(){
	int winner = 999;
	int seed = 0;
	std::string stringSeed = "0";
	
	//gets seed for random
	std::cout<<"Enter the seed: ";
	getline(std::cin,stringSeed);

	//convert seed to int
	std::stringstream ss;
	ss << stringSeed;
	ss >> seed;

	//seed set
	srand(seed);
	
	//runs race
	while (winner == 999){
		step();
		race();
		winner = finish();
	}//end while

	std::cout << "The winner of the race is " << winner << "\n";
	
}//end main


void step(){
	int ran = 0;
	for (int i=0; i<5; i++){
		ran = rand();
		if (ran%2 == 1){
			horse[i] = horse[i] + 1;
		}//end if
	}//end for

}//end step

void race(){
	for (int i=0; i<5; i++){
		std::cout << "\n";
		for (int j=0; j<15; j++){
			if (horse[i] == j){
				std::cout << i;
			} else {
				std::cout << ".";
			}//end of if chain
			
		}//end for
	}//end for
	
	std::cout << "\n";	

}//end race


int finish(){
	for (int i=0; i<5; i++){
		if (horse[i] == 15){
			return i;
		}//end if
	}//end for
	
	return 999;
}//end finish
