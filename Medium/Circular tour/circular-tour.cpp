//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

struct petrolPump
{
    int petrol;
    int distance;
};


// } Driver Code Ends
/*
The structure of petrolPump is 
struct petrolPump
{
    int petrol;
    int distance;
};*/

/*You are required to complete this method*/
class Solution{
  public:
  
    //Function to find starting point where the truck can start to get through
    //the complete circle without exhausting its petrol in between.
    int tour(petrolPump p[],int n)

    {

       //Your code here

       int curr_pet=0;

       int start=0;

       int prevPet=0;

       for(int i=0;i<n;i++)

       {

           curr_pet+=p[i].petrol-p[i].distance;

           

           if(curr_pet<0)

           {
               start=i+1;
               prevPet+=curr_pet;

               curr_pet=0;

               //start=i+1;

           }

       }

       

       return (curr_pet+prevPet>=0) ? start: -1;

    }
    
};



//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        petrolPump p[n];
        for(int i=0;i<n;i++)
            cin>>p[i].petrol>>p[i].distance;
        Solution obj;
        cout<<obj.tour(p,n)<<endl;
    }
}

// } Driver Code Ends