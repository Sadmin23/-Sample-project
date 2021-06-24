#include <iostream>
#include <fstream>

using namespace std;

struct Buttonxy
{
    int x1;
    int y1;
    int x2;
    int y2;
};

typedef struct Buttonxy Button;

Button button[3];

int main()
{

    ifstream file;

    file.open("data.txt");

    int cnt=1, a, b;

    while (cnt<=12 && file>>a)
    {
        b=(cnt-1)/4;

        if (cnt%4==1)
            button[b].x1=a;
        else if (cnt%4==2)
            button[b].y1=a;
        else if (cnt%4==3)
            button[b].x2=a;
        else if (cnt%4==0)
            button[b].y2=a;

        cnt++;
    }

    file.close();

    for (int i=0; i<3; i++)
        cout<<button[i].x1<<" "<<button[i].y1<<" "<<button[i].x2<<" "<<button[i].y2<<"\n";

    return 0;
}
