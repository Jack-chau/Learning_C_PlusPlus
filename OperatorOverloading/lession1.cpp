#include<iostream>
#include<string>

class Position
{
    public:
    int x = 10;
    int y = 20;

    Position operator + (Position pos)
    {
        Position new_pos;
        new_pos.x = x + pos.x;
        new_pos.y = y + pos.y;
        return new_pos;
    }
    bool operator == (Position pos)
    {
        if(x == pos.x && y == pos.y)
        {
            return true;
        }else
        {
            return false;
        }
    }
};


int main()
{
    Position pos1, pos2;
    pos2.x = 30;
    Position pos3 = pos1 + pos2;
    std::cout<<pos3.x<<" "<<pos3.y<<std::endl;

    if (pos1 == pos2)
    {
        std::cout<<"They are the same\n";
    }else
    {
        std::cout<<"The restlts shows above\n";
    }

    return 0;
}