#include <stdio.h>
void countvotes(int votes[],int n,int candidatevotes[]){
    
    for(int i=0;i<n;i++)
    {
        candidatevotes[votes[i]-1]++;
        
    }
}
int findWinner(int candidateVotes[]) {
    int max_index=0;

    for (int i = 1; i < 5; i++)
    {
        if (candidateVotes[i] >candidateVotes[max_index]) 
        {
            max_index = i;
        }
    }
    return max_index + 1; // Returning candidate number (1 to 5)
}
void readvotes(int votes[],int n)
{
    printf("enter votes for{1-ashwin,2-anil,3-kavya,4-shakila,6punya");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&votes[i]);
    }
}
int main() {
  int n=10;
  printf("enter the number of votes\n");
  scanf("%d",&n);
  int votes[1000]={1,2,2,3,1,4,2,5,1,1};
  readvotes(votes,n);
  int candidatevotes[5]={0,0,0,0,0};
  countvotes(votes,n,candidatevotes);
  for(int i=0;i<n;i++)
    {
        printf("candidate %d votes are %d \n",i+1,candidatevotes[i]);
        printf("winner is:%d",findWinner(candidatevotes));
    }

    return 0;
}
