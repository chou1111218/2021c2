#include <stdio.h>
char tableA[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ123456789";
char tableB[]="A   3  HIL JM O   2TUVWXY51SE Z  8 ";
char mirror_char( char c)
{
    for(int i=0; tableA[i]!=0;i++){
        if(c==tableA[i])return tableB[i];
    }
    return ' ';
}
int palindrome()
{
    int N=strlen(line);
    for(int i=0;i<N;i++){}
     if(line[i] !=line[N-1-i])return 0;
    }
    return 1;
}
int mirror()
{
    int N=strlen(line);
    for(int i=0;i<N;i++){}
     if(mirror_char(line[i]) !=line[N-1-i])return 0;
    }
    return 1;
}
int main()
{
    while(scanf("%s",line)==1){
        int p=palindrome();
        int m=mirror();
        if(p==1 && m==1)printf("%s--is a mirror palidrome.\n\n",line);
        if(p==1 && m==0)printf("%s--is a regular palidrome.\n\n",line);
        if(p==0 && m==1)printf("%s--is a mirror string.\n\n",line);
        if(p==0 && m==1)printf("%s--is a not a palidrome.\n\n",line);
    }
}


