// problem-link : https://leetcode.com/explore/challenge/card/september-leetcoding-challenge/556/week-3-september-15th-september-21st/3463/
class Solution {
public:
    // getdir is to get the current direction when the robot moves left or right.
    void getDir(char &dir,char s)
    {
        if(dir=='N')
        {
            if(s=='L')  dir='W';
            else        dir='E';
        }
        else if(dir=='E')
        {
            if(s=='L')  dir='N';
            else        dir='S';
        }
        else if(dir=='S')
        {
            if(s=='L')  dir='E';
            else        dir='W';
        }
        else
        {
            if(s=='L')  dir='S';
            else        dir='N';
        }
    }
    bool isRobotBounded(string S)
    {
        char dir='N';
        int x=0,y=0;
        for(int i=0;i<S.size();i++)
        {
            if(S[i]!='G') 
                getDir(dir,S[i]);
            else
            {
                // changing coordinates according to direction
                if(dir=='W') x--;
                else if(dir=='E') x++;
                else if(dir=='N') y++;
                else y--;
            }
        }
        // after following all the instruction if the direction of robot remains in north and robot is not at its initial position then will be no such circle.
    
        if(dir!='N' or (x==0 and y==0))
        {
            return true;
        }
        return false;
    }
};
/*
"GGLLGG"
"GLGLGGLGL"
*/
