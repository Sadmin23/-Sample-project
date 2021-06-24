#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int a, b, c;

    cin>>a;

    ifstream myfile;

    myfile.open("highscore.txt");

    myfile>>b;

    if (a>b)
    {

        ofstream temp;
        temp.open("temp.txt");
        temp<<a;
        myfile.close();
        temp.close();
        remove("highscore.txt");
        rename("temp.txt","highscore.txt");
    }
    else
        myfile.close();

    ifstream myfile2;
    myfile2.open("highscore.txt");
    myfile2>>c;
    cout<<c<<"\n";

    return 0;
}
//https://unlockxh3.com/videos/bangladeshi-girlfriend-gives-hot-blowjob-and-fucks-clear-audio-xhjkIe5
