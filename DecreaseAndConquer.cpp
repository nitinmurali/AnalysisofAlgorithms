#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

int algo(int n)
{
    if(n==2)                     //base case
        return 2;                //when you have 2 glasses both can be made to face up in 2 moves

    if(n%2==0)
    {
        return (algo(2)+algo(n-2));
    }

                       // there is no explicit solution for odd numbers
                                 // there always exits one precedent glass which exists upside down
                                 // can be proved as base case 3 can never be solved resulting in infinite recursion
      if(n%2==1)
    {

        return (1+algo(n-1));
    }


                                 //HENCE THE ASSUMPTION THAT 1 glass can be              turned up in 1 MOVE

}


int main()
{

    int res=0;
    int glasses;


    cout<<"enter number of upside down glasses:";
    cin>>glasses;
    res=algo(glasses);
    cout<<"\n The minimum number of moves:"<<res;
    return 0;
}
