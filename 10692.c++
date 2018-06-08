#include<stdio.h>
#include<iostream>
#include<map>
#include<stack>
#include<string>

using namespace std;

int main()
{
    map <char,char> pare={{'{','}'}, {'[',']'},{'(',')'},{'<','>'} };
    int num;
    int bigsmall=100,tmp=0,first;

    cin>>num;

    char s[100000];
    stack<char>  compare;
    int truea=1;
    char a;
    scanf("%c",&a);
    first==num;
    while(num>0)
    {    truea=1;

      for(int i=0;i<100000;i++)
      {
          s[i]='\0';
      }


         int i=1;

         scanf("%c",&s[0]);
        // scanf("%c",&s[1]);

             if(s[0]=='\n')
             {cout<<"Yes\n";
             num--;
            continue;}
            else
            {
            //    s[0]=s[1];
            }
            if(s[0]!='\n')
             scanf("%c",&s[1]);
             while(s[i]!='\n'&&s[1]!='\n')
             {
              i++;
              scanf("%c",&s[i]);
             }





              for(int i=0;i<100000;i++)
      {
          if(!compare.empty())
          compare.pop();
          if(s[i]=='\n')
            s[i]='\0';
      }


       // getline(cin,s);

        for(int i=0;s[i]!='\0';i++)
        {
            if(s[i]=='{'||s[i]=='['||s[i]=='('||s[i]=='<')
                {
                    if(s[i]=='{')
                     tmp=4;
                  else if(s[i]=='[')
                     tmp=3;
                  else if(s[i]=='(')
                     tmp=2;
                  else
                      tmp=1;

                   if(bigsmall>=tmp||compare.empty())
                    {

                        compare.push(s[i]);
                    bigsmall=tmp;

                    }
                    else
                    {truea=0;
                    break;}


                  }



            else if(s[i]=='}'||s[i]==']'||s[i]==')'||s[i]=='>')
            {
                if(compare.empty())
                {
                    truea=0;
                    break;
                }

                if(pare[compare.top()]==s[i])
                    {compare.pop();

                     if(!compare.empty()){
                    if(compare.top()=='{')
                     tmp=4;
                  else if(compare.top()=='[')
                     tmp=3;
                  else if(compare.top()=='(')
                     tmp=2;
                  else
                      tmp=1;


                    bigsmall=tmp;}
                    }
                else
                {truea=0;
                 break;

                }
            }



        }
         if(!compare.empty())
                {
                    truea=0;

                }
        if(truea)
        cout<<"Yes\n";
        else
          cout<<"No\n";
        truea=1;
        if(num==1)
            break;
        num--;
        bigsmall=100;
    }



}
