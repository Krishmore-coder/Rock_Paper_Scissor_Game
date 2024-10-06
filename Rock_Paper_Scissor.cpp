#include<iostream>
#include<time.h>
using namespace std;
class Game
{
    public:
    int computer();
    int player();
};
int Game :: computer()
{
    int r;
    srand(time(0));
    r = (rand()%3)+1;
    return r;
}
int Game :: player()
{
    char ans;
    cout<<"Enter your choice(Rock-r/Paper-p/Scissor-s): ";
    cin>>ans;
    if(ans == 'r')
    return 1;
    else
    if(ans == 'p')
    return 2;
    else
    if(ans == 's')
    return 3;
}
int main()
{
    int a,b;
    string name;
    char choice;
    Game g;
    cout<<"Enter your name: ";
    cin>>name;
    cout<<endl;
    do
    {
        a = g.player();
        b = g.computer();
        if(a == 1 && b == 3)
        cout<<name<<" is winner";
        else
        if(a == 1 && b == 2)
        {
            cout<<"Computer is winner"<<endl;
            cout<<"computer select Paper";
        }
        else
        if(a == b)
        {
            cout<<"Match tie"<<endl;
            cout<<"computer select same as you";
        }
        else
        if(a == 2 && b == 1)
        {
            cout<<name<<" is winner"<<endl;
            cout<<"computer select Rock";
        }
        else
        if(a == 2 && b == 3)
        {
            cout<<"Computer is winner"<<endl;
            cout<<"computer select Scissor";
        }
        else
        if(a == 3 && b == 1)
        {
            cout<<"Computer is winner"<<endl;
            cout<<"computer select Rock";
        }
        else
        if(a == 3 && b == 2)
        {
            cout<<name<<" is winner"<<endl;
            cout<<"computer select Paper";
        }
        cout<<endl<<"Do you want to exit(Yes-y/No-n): ";
        cin>>choice;
        cout<<endl;
        if(choice == 'y')
        cout<<"Thank You!";
    }while(choice == 'n');
    return 0;
}
