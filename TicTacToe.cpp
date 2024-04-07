#include "TicTacToe.h"

void tic::board_value()
{
  for(x=0; x<3; x++)
    {for(y=0; y<3; y++)
 board[x][y] = ' ';
}
}
int tic::input_x() {
	cout << "(x)좌표를 입력하세요: ";
	cin >> x;
	return x;
}
int tic::input_y() {
	cout << "(y)좌표를 입력하세요: ";
	cin >> y;
	return y;
}
void tic::turn()
{
    board[x][y] = (k % 2 ==0) ? 'x' : '0';
}
void tic::draw()
{
   for(i=0; i<3; i++)
    {
        cout<<"---|---|---"<<endl;
        cout<<board[i][0]<<"  | "<<board[i][1]<<" | "<<board[i][2]<<endl;

     }
     cout<<"---|---|---"<<endl;
}
int tic::board_calaurate() 
{
  for (int i = 0; i < 3; i++)
   {
			if (board[i][0] == 'X' && board[i][1] == 'X' && board[i][2] == 'X') 
            {
				cout << "X의 승리입니다!";
				return 0;
			}
			else if (board[i][0] == 'O' && board[i][1] == 'O' && board[i][2] == 'O') 
            {
				cout << "O의 승리입니다!";
				return 0;
			}
			//가로열 빙고
			else if (board[0][i] == 'X' && board[1][i] == 'X' && board[2][i] == 'X') 
            {
				cout << "X의 승리입니다!";
				return 0;
			}
			else if (board[0][i] == 'O' && board[1][i] == 'O' && board[2][i] == 'O')
            {
				cout << "O의 승리입니다!";
				return 0;
            }
if (board[0][0] == 'X' && board[1][1] == 'X' && board[2][2] == 'X') 
{
			cout << "X의 승리입니다!";
			return 0;
		}
		else if (board[2][0] == 'X' && board[1][1] == 'X' && board[0][2] == 'X') {
			cout << "X의 승리입니다!";
			return 0;
		}
		else if (board[0][0] == 'O' && board[1][1] == 'O' && board[2][2] == 'O') {
			cout << "O의 승리입니다!";
				return 0;
		}
		else if (board[2][0] == 'O' && board[1][1] == 'O' && board[0][2] == 'O') {
			cout << "O의 승리입니다!";
				return 0;
        }
   }
