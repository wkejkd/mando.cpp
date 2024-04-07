#include <iostream>
#include <string>
using namespace std;

class tic{
public:
	char board[3][3]; 
	int x=0, y=0; 
	int k, i; 

string width_board = "---";
	string height_board = "|";

void board_value();

	int input_x();
	int input_y();


	int same_value();


	void turn();


	void draw();


	int board_calaurate();


};
