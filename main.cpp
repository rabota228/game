#include <iostream>
#define LOG(x) std::cout << x << std::endl;
using namespace std;


class player 
{
public:
    int x, y;
    int speed;

    void move(int xa, int ya) 
    {
    x += xa * speed;
    y += ya * speed;
    }


};


int main()
{
    player player;
    player.move(-1, 1);
    cin.get();
}