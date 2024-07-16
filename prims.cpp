#include <iostream>
using namespace std;
class graph
{
    int cost[20][20];
    int nodes;
    
    public:
        graph();
        void create();
        void display();

};

graph :: graph()
{
  nodes=0;
  cout<<"Enter the number of nodes:"<<endl;
  cin>>nodes;
  for(int i=0;i<nodes;i++)
    {
      for(int j=0;j<nodes;j++)
        {
          cost[i][j]=999;
        }
    }
}

void graph :: display()
{
  cout<<"The cost matrix is:"<<endl;
  for(int i=0;i<nodes;i++)
    {
      for(int j=0;j<nodes;j++)
        {
          cout<<cost[i][j]<<"\t";
        }
      cout<<endl;
    }
}

void graph :: create()
{
  cout<<"Enter the cost matrix:"<<endl;
  for(int i=0;i<nodes;i++)
    {
      for(int j=0;j<nodes;j++)
        {
          bool choice=0;
          cout<<"Do you have edge between "<<i+1<<" and "<<j+1<<"(1/0)?"<<endl;
          cin>>choice;
          if(choice)
          {
            cout<<"Enter the cost of edge between "<<i+1<<" and "<<j+1<<endl;
            cin>>cost[i][j];
          }
          else
            cost[i][j]=999;
        }
    }
}


int main() 
{
    graph g1;
  g1.create();
  g1.display();
}