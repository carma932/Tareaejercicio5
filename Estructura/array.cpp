#include <iostream>
using namespace std;

const int N = 16;

char laberinto[N][N] = {

{'I','0','x','x','x','x','x','0','0','0','x','x','x','x','x','x'},
{'x','0','0','0','x','0','0','0','x','0','0','0','x','0','0','x'},
{'x','x','x','0','x','0','x','0','x','x','x','0','x','0','x','x'},
{'x','0','0','0','0','0','x','0','0','0','x','0','0','0','0','x'},
{'x','0','x','x','x','x','x','x','x','0','x','x','x','x','0','x'},
{'x','0','0','0','0','0','0','0','x','0','0','0','0','x','0','x'},
{'x','x','x','x','x','x','x','0','x','x','x','x','0','x','0','x'},
{'x','0','0','0','0','0','x','0','0','0','0','x','0','0','0','x'},
{'x','0','x','x','x','0','x','x','x','x','0','x','x','x','0','x'},
{'x','0','0','0','x','0','0','0','0','x','0','0','0','x','0','x'},
{'x','x','x','0','x','x','x','x','0','x','x','x','0','x','0','x'},
{'x','0','0','0','0','0','0','x','0','0','0','x','0','0','0','x'},
{'x','0','x','x','x','x','0','x','x','x','0','x','x','x','0','x'},
{'x','0','0','0','0','x','0','0','0','x','0','0','0','x','0','x'},
{'x','x','x','x','0','x','x','x','0','x','x','x','0','x','0','x'},
{'x','x','x','x','0','0','0','0','0','0','0','x','0','0','T','x'}

};

bool resolver(int x, int y)
{

    if(x < 0 || y < 0 || x >= N || y >= N)
        return false;

    if(laberinto[x][y] == 'T')
    {
        cout << "(" << x << "," << y << ") -> Tesoro\n";
        return true;
    }

    if(laberinto[x][y] != '0' && laberinto[x][y] != 'I')
        return false;

    cout << "(" << x << "," << y << ")\n";

    if(laberinto[x][y] != 'I')
        laberinto[x][y] = 'v';

    if(resolver(x+1,y)) return true;
    if(resolver(x-1,y)) return true;
    if(resolver(x,y+1)) return true;
    if(resolver(x,y-1)) return true;

    return false;
}

int main()
{

    int inicioX=0, inicioY=0;

    for(int i=0;i<N;i++)
        for(int j=0;j<N;j++)
            if(laberinto[i][j]=='I')
            {
                inicioX=i;
                inicioY=j;
            }

    resolver(inicioX,inicioY);

}