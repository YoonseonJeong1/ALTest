#include <vector>
#include <unordered_map>
using namespace std;

int solution(vector<int> nums)
{
    int answer = 0;
    unordered_map<int, int> maps;
    
    for(int i = 0; i < nums.size(); i++)
    {
        maps.insert({nums[i],0});        
    }
    if((nums.size()/2) < maps.size())
        answer = nums.size()/2;
    else
        answer = maps.size();
    
    return answer;
}
