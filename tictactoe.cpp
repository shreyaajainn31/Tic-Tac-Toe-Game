#include<iostream>
#include<string>
using namespace std;
char matrix[3][3] = {'1','2','3','4','5','6','7','8','9'};
char ex = 'X';
char oh = 'O';
bool isDraw(int i)
{
    if(i > 7)
        return true;
    else
        return false;
}

bool playertwoWon()
{
    if(matrix[0][0] == matrix[0][1] && matrix[0][1] ==  matrix[0][2] && matrix[0][0] == oh)
        return true;
    else if(matrix[1][0] == matrix[1][1] && matrix[1][1] ==  matrix[1][2] && matrix[1][0] == oh)
        return true;
    else if(matrix[2][0] == matrix[2][1] && matrix[2][1] ==  matrix[2][2] && matrix[2][0] == oh)
        return true;
    else if(matrix[0][0] == matrix [1][1] && matrix[1][1] == matrix[2][2] && matrix[0][0] == oh)
        return true;
    else
        return false;
}

bool playerOneWon()
{
    if(matrix[0][0] == matrix[0][1] && matrix[0][1] ==  matrix[0][2] && matrix[0][0] == ex)
        return true;
    else if(matrix[1][0] == matrix[1][1] && matrix[1][1] ==  matrix[1][2] && matrix[1][0] == ex)
        return true;
    else if(matrix[2][0] == matrix[2][1] && matrix[2][1] ==  matrix[2][2] && matrix[2][0] == ex)
        return true;
    else if(matrix[0][0] == matrix [1][1] && matrix[1][1] == matrix[2][2] && matrix[0][0] == ex)
        return true;
    else
        return false;
}
int main()
{
    cout<<" \t \t \t \t \t \t TIC TAC TOE"<<endl;
    string p1, p2;
    cout<<"Player 1, enter your name:"<<endl;
    cin>>p1;
    cout<<"Player 2, enter your name:"<<endl;
    cin>>p2;
    cout<<matrix[0][0]<<"  |"<<matrix[0][1]<<"   |"<<matrix[0][2]<<endl;
    cout<<"___|____|____"<<endl;
    cout<<matrix[1][0]<<"  |"<<matrix[1][1]<<"   |"<<matrix[1][2]<<endl;
    cout<<"___|____|____"<<endl;
    cout<<matrix[2][0]<<"  |"<<matrix[2][1]<<"   |"<<matrix[2][2]<<endl;

    cout<<endl;
    int moves = 0, number;
    cout<<p1<<"[X], "<<p2<<"[O]"<<endl;
    int i = 0;
    while(i < 9)
    {
        cout<<endl;

        cout<<endl;
        if(i %2 == 0)
        {
            cout<<p1<<",Enter a number from 1 to 9:"<<endl;
            cin>>number;
        }
        else
        {
            cout<<p2<<",Enter a number from 1 to 9:"<<endl;
            cin>>number;
        }
        //cin>>number;
        if(i % 2 == 0)
        {
            if(number == 1)
            {
                matrix[0][0] = ex;
            }
            if(number == 2)
            {
                matrix[0][1] = ex;
            }
            if(number == 3)
            {
                matrix[0][2] = ex;
            }
            if(number == 4)
            {
                matrix[1][0] = ex;
            }
            if(number == 5)
            {
                matrix[1][1] = ex;
            }
            if(number == 6)
            {
                matrix[1][2] = ex;
            }
            if(number == 7)
            {
                matrix[2][0] = ex;
            }
            if(number == 8)
            {
                matrix[2][1] = ex;
            }
            if(number == 9)
            {
                matrix[2][2] = ex;
            }
        }
        if(i % 2 !=0)
        {
            if( number== 1)
            {
                matrix[0][0] = oh;
            }
            if(number == 2)
            {
                matrix[0][1] = oh;
            }
            if(number == 3)
            {
                matrix[0][2] = oh;
            }
            if(number == 4)
            {
                matrix[1][0] = oh;
            }
            if(number == 5)
            {
                matrix[1][1] = oh;
            }
            if(number == 6)
            {
                matrix[1][2] = oh;
            }
            if(number == 7)
            {
                matrix[2][0] = oh;
            }
            if(number == 8)
            {
                matrix[2][1] = oh;
            }
            if(number == 9)
            {
                matrix[2][2] = oh;
            }

        }
       cout<<matrix[0][0]<<"  |"<<matrix[0][1]<<"   |"<<matrix[0][2]<<endl;
       cout<<"___|____|____"<<endl;
       cout<<matrix[1][0]<<"  |"<<matrix[1][1]<<"   |"<<matrix[1][2]<<endl;
       cout<<"___|____|____"<<endl;
       cout<<matrix[2][0]<<"  |"<<matrix[2][1]<<"   |"<<matrix[2][2]<<endl;
       cout<<endl;

       if(playerOneWon())
       {
           cout<<p1<<" won!! "<<endl;
           break;
       }
       else if(playertwoWon())
       {

           cout<<p2<<" won!! "<<endl;
           break;

       }
       else if(isDraw(i))
       {
           cout<<"Its a Draw!!"<<endl;
           break;
       }
       else
           i++;

    }
}
© 2021 GitHub, Inc.