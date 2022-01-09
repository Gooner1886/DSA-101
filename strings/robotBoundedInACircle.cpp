// Leetcode - 1041 - Robot bounded in a circle

int dir = 0;
int x = 0;
int y = 0;

for (int i = 0; i < instructions.size(); i++)
{
    if (instructions[i] == 'G')
    {
        if (dir == 0)
            x++;
        if (dir == 1)
            y++;
        if (dir == 2)
            x--;
        if (dir == 3)
            y--;
    }
    else if (instructions[i] == 'L')
    {
        dir--;
        dir = (dir + 4) % 4;
    }
    else if (instructions[i] == 'R')
    {
        dir++;
        dir = dir % 4;
    }
}
return (dir != 0 || (x == 0 && y == 0));
}