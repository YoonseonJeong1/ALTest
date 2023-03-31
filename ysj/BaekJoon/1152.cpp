#include<iostream>
#include<cstring>
using namespace std;

char str[1000003];

int main(void)
{
    char* ptr;
    int cnt=0;
    fgets(str,1000003,stdin);
    int len = strlen(str);

    ptr=&str[0];
    while(1)
    {
        ptr=strchr(ptr,' ');
        if(ptr != NULL)
            ptr++;
        else
            break;
//      cout<<ptr<<endl;
        cnt++;
    }
    if(str[0]==' ')
        cnt--;
    if(str[len-2]==' ')
        cnt--;
    cout<<cnt+1<<"\n";
    return 0;
}
