#include <iostream>
#include <cstring>
using namespace std;
int main()
{
char s1[6];
char s2[6];
cout<<"Enter the first string\t";
cin>>s1;
cout<<"Enter the second string\t";
cin>>s2;
cout <<strcmp(s1,s2)<<endl;
cout<<strlen(s1)<<"and \t"<<strlen(s2)<<endl;
cout<<strcat(s1,s2)<<endl;
return 0;
}