/**
   题意：给你一个串，求出现的循环节次数，句号结束
   思路：先求出next数组， l2-x[l2]  可以一个串的循环节长度 s
          i/s 得到循环节的个数，无循环节的个数都为1，
*/
#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
const int maxn=1000010;
char b[maxn];
int x[maxn],t,l2;
void same()
{
    int i=0,j=-1;
    x[0]=-1;
    while(b[i]!='\0')
    {
        if(b[i]==b[j]||j==-1)
        {
            i++,j++,x[i]=j;
        }
        else
            j=x[j];
    }
}

int kmp()
{

    l2=strlen(b);
    if(l2%(l2-x[l2])==0)
        printf("%d\n",l2/(l2-x[l2]));
    else
        printf("1\n");
}
int main()
{

    while(~scanf("%s",b))
    {
        if(b[0]=='.') break;
        same();
        kmp();
    }
    return 0;
}
/**

aaaaaas

aabaabaa


*/
