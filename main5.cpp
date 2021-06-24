#include <iostream>

using namespace std;

string redifine(string num)
{
    if (num.size()<=2)
        num=" "+num;
    return num;
}

int main()
{
    int num;    cin>>num;

    string no=to_string(num);

    no=redifine(no);

    cout<<no<<"\n";

    return 0;
}
