#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

unordered_map<string, int> maps;
bool solution(vector<string> phone_book) {
    bool answer = true;

    for(int i = 0 ; i<phone_book.size(); i++)
        maps.insert({phone_book[i],1});
    
    for(int i = 0; i<phone_book.size(); i++)
    {
        for(int j=0; j<phone_book[i].size()-1; j++)
        {
            if((maps.find(phone_book[i].substr(0,j+1)))!=maps.end())
                return false;
        }
    }
    return answer;
}

/* first my code

bool solution(vector<string> phone_book) {
    bool answer = true;
    unordered_map<string, int> maps;
    unordered_map<string, int>::iterator iter;
    for(int i=0; i < phone_book.size(); i++){
        int len = 0;
        for(iter = maps.begin(); iter != maps.end(); iter++){
            if(phone_book[i].size()>=iter->first.size()){
                len = iter->first.size();
                if(phone_book[i].substr(0,len) == iter->first)
                    return false;
            }
            else
            {
                len = phone_book[i].size();
                if(phone_book[i] == iter->first.substr(0,len))
                   return false;
            }
        }
        maps.insert({phone_book[i],0});
    }

    return answer;
}
*/

/* second my code
using namespace std;

unordered_map<string, int> maps;
bool solution(vector<string> phone_book) {
    bool answer = true;

    for(int i = 0 ; i<phone_book.size(); i++)
    {
        for(int j=0; j<phone_book[i].size(); j++)
        {

            if((maps.find(phone_book[i].substr(0,j+1))) != maps.end())
            {
                answer = false;
                return answer;
            }
        }
        maps.insert({phone_book[i],0});
    }

    return answer;
}

*/
