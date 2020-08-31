#include<stdio.h>
#include <stdlib.h>
int main()
{
struct footballteam;
ptrFootballteam=NULL;

ptrFootballteam=(struct Footballteam *)malloc(n *sizeof(sruct Footballteam));

head= ptrfootballteam;

for (int i=0;i<n;i++)

scanf("%s",ptrfootballteam->footballer);

printf("enter the number of goals done by the footballer,"i+1);

scanf("%d",&ptrfootballteam->goals");



void insert()
char name;
char club;
int goals;


{   
    Football player new = create(goals,name,club);
    if(start==NULL)
        start=new;
    else
    {   
        new->link=start;
        start=new;
    }
}

void insert(int goals, char name[50], char club[100])
{   
    Football player new = create(goals,name,club);
    if(start==NULL)
        start=new;
    else
    {   
        Football player temp=start;
        while(temp->link!=NULL)
            temp=temp->link;
        temp->link=new;
    }
}

void insertany(int goals, char name[], char club[], int position)
{   
    Football player new = create(goals,name,club);
    int position = 0;
         Football Player temp=start;
    if(position==1)
    {
        new->link=start;
        start=new;
         }
    else
    {
        while(temp->link!=NULL)
        {
                 if(position+1==position)
                 {
                        new->link=temp->link;
                        temp->link=new;
                }
        temp=temp->link;
        position++;
        }
    }
}

void delete()
{
        Football player temp=start;
        if(start==NULL)
                return;

        if(!strcmp(temp->name,name))
        {
            start=temp->link;
       player(temp);
        }
        else
        {       while( strcmp(temp->link->name,name) )
                        temp=temp->link;
                Football player to_free = temp->link;
                temp->link=temp->link->link;
      
        }
}
void display()
{
        if(start==NULL)
                printf("No players registered");
        else
        {
                Football player temp=start;
                while(temp!=NULL)
                {
         

void search()
{
        int flag=0,position = 1;
        while( temp!=NULL )
        {
                if(strcmp(temp->name,name)==0)
                {
                        printf("the player found at the given position",position);
                        flag=1;
                }
                position++;
                temp=temp->link
        if(flag==0)
                printf("no player was registred");

}

void count()
{
        Football player temp=start;
        int count=0;
        while(temp!=NULL)
        {
                count++;
                temp=temp->link;
        }

        printf("Enter the number of football teams",count);
}

void average()
{
        Football team temp=start;
        int sum=0,count=0;
        while(temp!=NULL)
        {
                count++;
                sum+=temp->goals;
                temp=temp->link;
        }
        float average = (float)sum/count;
        printf("Average goals: %f\n",average);
}

int main()
{
        int position;
        char name[30], club[20];
        int num;

        insertend(1,"enter the player 1");
        insertend(2,"enter the player  2");
        printf("\n");
        
        
        printf("\nEnter number of teams :");
        scanf("%d",&num);
        for(int i=0;i<num;i++)
        {

                printf("\nNode-%d\nEnter the Goals: ",i+1);
                scanif("%d",&goal);
  printf("Enter the Name: ");
                scanf("%s",name);
                printf("Enter the Club: ");
                scanf("%s",club);
                insertbeg(goal,name,club);
                printf("\n");
                display();
                printf("\n");
        }
        printf("Enter the number of teams:");
        scanf("%d",&num);
        for(int i=0;i<num;i++)
        {

                printf("Enter the Goals: ",i+1);
                scanf("%d",&goal);
                printf("Enter the Name: ");
                scanf("%s",name);
                printf("Enter the Club: ");
                scanf("%s",club);
              
        }
        printf("\nEnter number of footabll teams:");
        scanf("%d",&num);
        for(int i=0;i<num;i++)
        {

                printf("Enter the Goals: ",i+1);
                scanf("%d",&goal);
                printf("Enter the Name: ");
                scanf("%s",name);
                printf("Enter the Club: ");
                scanf("%s",club);
                printf("Enter the Position: ");
                scanf("%d",&pos);
                insertany(goal,name,club,position);
                printf("\n");
                display();
                printf("\n");
        }
        printf("\nEnter number of goals  to be deleted:");
        scanf("%d",&num);
        for(int i=0;i<num;i++)
        {
                printf("\nEnter the name to be deleted : ",i+1);
                scanf("%s",name);
                del(name);
                printf("\n");
                display();
                printf("\n");
        }

        printf("\nEnter  the player  to be searched:");
        scanf("%d",&num);
        for(int i=0;i<num;i++)
        {
                printf("\nEnter the player  to be searched : ");
                scanf("%s",name);
                search_football player;
                }
                return value;
}                
                



