#include<iostream>
using namespace std;
class tictactoe{

	int board[3][3];
	int player;

	public:
	tictactoe()
	{
		player=1;
		int i,j;
		for(i=0;i<=2;i++)
		{
			for(j=0;j<=2;j++)
			{
				board[i][j]=0;
			}
		}
	}
	//class member function declaration
	void display();
	void set_number(int ind);
	void change();
	void check_win();


};
	//function defination

	void tictactoe::display()
	{
        
		cout<<"\n\t\t\t\t "<<board[0][0]<<" | "<<board[0][1]<<" | "<<board[0][2]<<endl;
		cout<<"\t\t\t\t---|---|---"<<endl;
		cout<<"\t\t\t\t "<<board[1][0]<<" | "<<board[1][1]<<" | "<<board[1][2]<<endl;
		cout<<"\t\t\t\t---|---|---"<<endl;
		cout<<"\t\t\t\t "<<board[2][0]<<" | "<<board[2][1]<<" | "<<board[2][2]<<endl;
		cout<<"Turn of Player "<<player<<endl;
	}

	void tictactoe::set_number(int ind)
	{
		if(ind==1 && board[0][0]==0)
		{
			board[0][0]=player;
			change();
		}
		else if(ind==2 && board[0][1]==0)
		{
			board[0][1]=player;
			change();
		}
		else if(ind==3 && board[0][2]==0)
		{
			board[0][2]=player;
			change();
		}
		else if(ind==4 && board[1][0]==0)
		{
			board[1][0]=player;
			change();
		}
		else if(ind==5 && board[1][1]==0)
		{
			board[1][1]=player;
			change();
		}
		else if(ind==6 && board[1][2]==0)
		{
			board[1][2]=player;
			change();
		}
		else if(ind==7 && board[2][0]==0)
		{
			board[2][0]=player;
			change();
		}
		else if(ind==8 && board[2][1]==0)
		{
			board[2][1]=player;
			change();
		}
		else if(ind==9 && board[2][2]==0)
		{
			board[2][2]=player;
			change();
		}
		else
		{
			cout<<"Play Again";
		}
		check_win();

	}

	void tictactoe::change()
	{
		if(player==1)
		{
			player=2;
		}
		else
		{
			player=1;
		}
	}

	void tictactoe::check_win()
	{
		if((board[0][0]==1 && board[0][1]==1 && board[0][2]==1) || 
           (board[1][0]==1 && board[1][1]==1 && board[1][2]==1) || 
           (board[2][0]==1 && board[2][1]==1 && board[2][2]==1) || 
           (board[0][0]==1 && board[1][0]==1 && board[2][0]==1) || 
           (board[0][1]==1 && board[1][1]==1 && board[2][1]==1) || 
           (board[0][2]==1 && board[1][2]==1 && board[2][2]==1) || 
           (board[0][0]==1 && board[1][1]==1 && board[2][2]==1) || 
           (board[0][2]==1 && board[1][1]==1 && board[2][0]==1))
		{
			cout<<"congratulation player 1 win the match";
			int i,j;
			for(i=0;i<=2;i++)
			{
				for(j=0;j<=2;j++)
				{
					board[i][j]=0;
				}
			}
		}
		else if((board[0][0]==2 && board[0][1]==2 && board[0][2]==2) || 
                (board[1][0]==2 && board[1][1]==2 && board[1][2]==2) || 
                (board[2][0]==2 && board[2][1]==2 && board[2][2]==2) || 
                (board[0][0]==2 && board[1][0]==2 && board[2][0]==2) || 
                (board[0][1]==2 && board[1][1]==2 && board[2][1]==2) || 
                (board[0][2]==2 && board[1][2]==2 && board[2][2]==2) || 
                (board[0][0]==2 && board[1][1]==2 && board[2][2]==2) || 
                (board[0][2]==2 && board[1][1]==2 && board[2][0]==2))
		{
			cout<<"congratulation player 2 win the match";
			int i,j;
			for(i=0;i<=2;i++)
			{
				for(j=0;j<=2;j++)
				{
					board[i][j]=0;
				}
			}
		}
		else if((board[0][0]==0 || board[0][1]==0 || board[0][2]==0) || 
                (board[1][0]==0 || board[1][1]==0 || board[1][2]==0)  || 
                (board[2][0]==0 || board[2][1]==0 || board[2][2]==0))
				{ 

					return;
				}
		else{
					
					cout<<"Match draw";
					int i,j;
					for(i=0;i<=2;i++)
					{
						for(j=0;j<=2;j++)
						{
							board[i][j]=0;
						}
					}

				}

	}

int main()
{
	tictactoe ob;

	cout<<"Consider Postion: "<<endl;
	cout<<"\n "<<1<<" | "<<2<<" | "<<3<<endl;
	cout<<"---|---|---"<<endl;
	cout<<" "<<4<<" | "<<5<<" | "<<6<<endl;
	cout<<"---|---|---"<<endl;
	cout<<" "<<7<<" | "<<8<<" | "<<9<<endl;

	ob.display();
	int ch=0;
	do{
	cout<<"Enter The Position: ";
	cin>>ch;
	switch(ch)
	{
		case 1:
			ob.set_number(1);
			ob.display();
			break;
		case 2:
			ob.set_number(2);
			ob.display();
			break;
		case 3:
			ob.set_number(3);
			ob.display();
			break;
		case 4:
			ob.set_number(4);
			ob.display();
			break;
		case 5:
			ob.set_number(5);
			ob.display();
			break;
		case 6:
			ob.set_number(6);
			ob.display();
			break;
		case 7:
			ob.set_number(7);
			ob.display();
			break;
		case 8:
			ob.set_number(8);
			ob.display();
			break;
		case 9:
			ob.set_number(9);
			ob.display();
			break;
		case 10:
			cout<<"Exit: ";
			break;

		default:
			cout<<"Invalid Choice: ";
			break;


	}
	}while(ch!=10);
    return 0;
}