#include<bits/stdc++.h>

using namespace std;

int isWin(int A[][4], int N)
{
    for(int i=1;i<=N;i++)
    {
        if(A[i][1] == A[i][2] && (A[i][2] == A[i][3] && A[i][1]!=-1))
           {
               return A[i][1];
           }
    }

    for(int j=1;j<=N;j++)
    {
        if(A[1][j] == A[2][j] && (A[2][j] == A[3][j] && A[1][j]!=-1))
           {
               return A[1][j];
           }
    }

    if(A[1][1] == A[2][2] && A[2][2] == A[3][3] && A[1][1]!=-1)
    {
        return A[1][1];
    }
    if(A[1][3] == A[2][2] && A[2][2] == A[3][1] && A[1][3]!=-1)
    {
        return A[1][3];
    }

    return -1;
}

void print_cell(int A[][4], int N)

{
    for(int i=1; i<=N; i++)
    {
        for(int j=1; j<=N; j++)
        {
            //cout << A[i][j] << " ";
            if(A[i][j]==-1)
                cout<<" ";
            if(A[i][j]==1)
                cout<<"X";
            if(A[i][j]==2)
                cout<<"O";
            if(j<N)
                cout<<"\t|\t";
        }
        cout<<"\n";
        if(i<N)
            cout<<"_________________________________";
        cout<<"\n\n";
    }
    return;
}

int main()
{
    int N=3, i, j;
    //cin >> N;      //assuming input is 3 but it would be different

    int A[4][4];

    for(i=1; i<=N; i++)
    {
        for(j=1; j<=N; j++)
        {
            A[i][j] = -1;
        }
    }

    bool player1=true;
    bool player2=false;

    while(true)
    {
        print_cell(A, N);
        if(player1 == true)
        {
            //work
            //value = 1
            int r, c;
            Flag:
            cout<<"Player1 turn(X), Enter row and column :";
            cin>>r>>c;
            if(A[r][c]!=-1)
            {
                cout<<"invalid cell"<<endl;
                goto Flag;
            }
            A[r][c] = 1;
            player1 = false;
            player2 = true;
        }
        else
        {
             //work
            //value = 2
            int r, c;
            Flag2:
            cout<<"Player2 turn(O), Enter row and column :";
            cin>>r>>c;
            if(A[r][c]!=-1)
            {
                cout<<"invalid cell"<<endl;
                goto Flag2;
            }
            A[r][c] = 2;
            player2 = false;
            player1 = true;
        }

        if(isWin(A, N) == 1)
        {
            cout<<"player 1 won!"<<endl;
            break;
        }
        else if(isWin(A, N) == 2)
        {
            cout<<"player 2 won!"<<endl;
            break;
        }
    }

    return 0;
}
