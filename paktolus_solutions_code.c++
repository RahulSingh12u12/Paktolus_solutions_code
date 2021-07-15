#include <iostream>

using namespace std;

int main()
{
    int N=10,c=0,r=0;
    int A[N]={4,6,5,5,4,3,2,3,1,2};
    for(int i=0;i<N;i++)
    {
        if(i>2)
        {
            if(A[i-3]<A[i-1])
            {continue;}
            if(A[i-3]>A[i-1])
            {
               if(A[i-2]<A[i])
               {
                   c=1;
                   r=i;
                   break;
               }
               if(A[i-2]==A[i])
               {
                   c=1;
                   r=i;
                   break;
               }
            }
            if(A[i-3]==A[i-1])
            {
                if(A[i-2]<A[i])
                {
                    c=1;
                    r=i;
                    break;
                }
                if(A[i-2]==A[i])
                {
                    c=1;
                    r=i;
                    break;
                }
            }
        }
    }
 cout<<"segment index is "<<r+1<<" and the value of segment is "<<A[r]<<" , where turtle crosses his path"<<endl;
    return 0;
}