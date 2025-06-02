#include <iostream>
#include <cstring>
using namespace std;

void reverse(char *start,char *end){
    if(start>=end){
        return;
    }
    char temp=*start;
    *start=*end;
    *end=temp;
    return reverse(start+1,end-1);
}

int main(){
    char ch[]="helloworld";
    int n=strlen(ch)-1;
    reverse(ch,ch+n);
    cout<<ch<<endl;
}