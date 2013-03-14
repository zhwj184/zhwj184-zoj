#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

char exist[257];
char plain[100];
char subst[100];
char text[100];

void Solve(){
    for(int i=0; text[i]!='\0';i++){
        if(exist[text[i]]!=0){
            text[i]=exist[text[i]];
        }
    }
    puts(text);
}
int main(){
    //ifstream fin;
    //fin.open("abc.txt");
    //fin.getline(plain,99);
    //fin.getline(subst,99);
    gets(plain);
    gets(subst);
    for(int i=0; plain[i]!='\0'; i++){
        exist[plain[i]]=subst[i];
    }
    puts(subst);
    puts(plain);
    //while(fin.getline(text,99)){
    while(gets(text)){
        Solve();
    }
    //system("pause");
    return 1;
}
