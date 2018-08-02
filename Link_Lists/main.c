//
//  main.cpp
//  Link_Lists
//
//  Created by Pankaj Devrath on 13/07/18.
//  Copyright © 2018 Pankaj Devrath. All rights reserved.
//
#include <stdio.h>
/* Include other headers as needed */
int main()
{
    
    int t;
    scanf("%d",&t);
    while(t--)
        {
        int n,m,rev=0,rem=0;
        /* Enter your code here. Read input from STDIN. Print output to STDOUT */
        scanf("%d",&n);
        while(n>0)
            {
            
            m=n%10;
            m++;
            
            rev*=10;
            if(m>9)
                {
                rev+=10;
                rem=1;
                }
            else
                {
                rev+=m;
                rev+=rem;
                rem=0;
                }
            n/=10;
            }
         printf("%d\n",rev);
        n=0;
        while(rev>0)
            {
            n*=10;
            n+=(rev%10);
            rev/=10;
            }
        printf("%d\n",n);
        }
    return 0;
}
