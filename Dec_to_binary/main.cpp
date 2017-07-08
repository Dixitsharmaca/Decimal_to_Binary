//  main.cpp
//  Dec_to_binary
//  Created by Dixit sharma on 7/8/17.
//  Copyright © 2017 Dixit sharma. All rights reserved.
//

#include <iostream>
using namespace std;

void dec_bin(int num)
{
    int rem;
    
    if(num <= 1)                           // <= if 0/1 is entered
    {
        cout<<num;
    }
    else
    {
        rem = num % 2;
        dec_bin(num/2);
        cout<<rem;
    }
}

int main(int argc, const char * argv[]) {
    
    int dec;
    
    cout<<"Enter the Number : ";
    cin>>dec;
    
    if(dec < 0)
    {
        cout <<"Only positive Numbers are allowed";
    }
    else
    {
        cout<<dec<<" = ";
        dec_bin(dec);
    }
    
    cout<<endl;
    return 0;
}
