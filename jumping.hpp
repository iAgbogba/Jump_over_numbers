#include <vector>

using namespace std;

int jump_over_numbers(const vector<int>& list) {
    int numJump{0};
    int pos{0};
    while(pos < list.size())
    {
        int current{list[pos]};
        if(current==0) return -1;
        pos+=current;
        numJump++;
    }
    return numJump;
}
