#include<cmath>
#include<cstdio>
#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;

struct Player {
    int score;
    string name;
};

class Checker{
public:
  	// complete this method
    static int comparator(Player a, Player b)  {
        int compare_name = a.name.compare(b.name);
        if(a.score<b.score)
            return -1;
        else if (a.score> b.score)
            return 1;
        else
            if (compare_name < 0)
                return 1;
            else return -1;
    }
};


