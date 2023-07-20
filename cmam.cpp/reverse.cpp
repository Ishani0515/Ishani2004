#include<iostream>
using namespace std;
int main()
{
    char s1[20],s2[20];
    int i,j;i=0;j=0;
    cout<<"enter a string : ";
    gets(s1);
    while(s1[i]!='\0')
    i++;
    while(i-->=0)
    s2[i++]=s1[i];
    s2[j]='\0';
    cout<<("reverse is %s",s2);
    return 0;

}