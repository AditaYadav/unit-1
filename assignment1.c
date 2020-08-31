 Last login: Thu Aug 27 14:07:52 on ttys002
aditayadav@Aditas-MacBook-Pro ~ % vi assignment.c







































aditayadav@Aditas-MacBook-Pro ~ % vi question.c
aditayadav@Aditas-MacBook-Pro ~ % cc question.c
aditayadav@Aditas-MacBook-Pro ~ % ./a.out

[Messi,Barcelona,1] ----> [Ronaldo,Madrid,2] ----> 

Enter number of nodes to be inserted at beginning:5

Node-1
Enter the Goals: 7
Enter the Name: ronaldo
Enter the Club: manchester

[ronaldo,manchester,7] ----> [Messi,Barcelona,1] ----> [Ronaldo,Madrid,2] ----> 

Node-2
Enter the Goals: ^[:wq
Enter the Name: Enter the Club: ^Z
zsh: suspended  ./a.out
aditayadav@Aditas-MacBook-Pro ~ % vi question.c
aditayadav@Aditas-MacBook-Pro ~ % vi program1.c
aditayadav@Aditas-MacBook-Pro ~ % cc program1.c
program1.c:1:1: error: unknown type name 'i'
i#include<stdio.h>
^
program1.c:1:2: error: expected identifier or '('
i#include<stdio.h>
 ^
program1.c:2:9: fatal error: 'malloc.h' file not found
#include<malloc.h>
        ^~~~~~~~~~
3 errors generated.
aditayadav@Aditas-MacBook-Pro ~ % vi program1.c
aditayadav@Aditas-MacBook-Pro ~ % cc program1.c
program1.c:2:9: fatal error: 'malloc.h' file not found
#include<malloc.h>
        ^~~~~~~~~~
1 error generated.
aditayadav@Aditas-MacBook-Pro ~ % vi program1.c
aditayadav@Aditas-MacBook-Pro ~ % cc program1.c
program1.c:1:18: warning: extra tokens at end of #include directive
      [-Wextra-tokens]
#include<stdio.h>>
                 ^
                 //
program1.c:20:3: warning: implicitly declaring library function 'strcpy' with
      type 'char *(char *, const char *)' [-Wimplicit-function-declaration]
                strcpy(newnode->name,name);
                ^
program1.c:20:3: note: include the header <string.h> or explicitly provide a
      declaration for 'strcpy'
program1.c:25:1: warning: control may reach end of non-void function
      [-Wreturn-type]
}
^
program1.c:50:40: warning: format specifies type 'int' but the argument has type
      'char *' [-Wformat]
                printf("The deleted element is %d\n",currptr->name);
                                               ~~    ^~~~~~~~~~~~~
                                               %s
program1.c:87:9: error: invalid operands to binary expression
      ('void ()' and 'int')
                        count+=1;
                        ~~~~~^ ~
program1.c:89:17: error: invalid operands to binary expression
      ('int' and 'void ()')
        printf("%d",sum/count);
                    ~~~^~~~~~
4 warnings and 2 errors generated.
aditayadav@Aditas-MacBook-Pro ~ % vi program1.c
aditayadav@Aditas-MacBook-Pro ~ % cc program1.c
program1.c:20:3: warning: implicitly declaring library function 'strcpy' with
      type 'char *(char *, const char *)' [-Wimplicit-function-declaration]
                strcpy(newnode->name,name);
                ^
program1.c:20:3: note: include the header <string.h> or explicitly provide a
      declaration for 'strcpy'
program1.c:25:1: warning: control may reach end of non-void function
      [-Wreturn-type]
}
^
program1.c:50:40: warning: format specifies type 'int' but the argument has type
      'char *' [-Wformat]
                printf("The deleted element is %d\n",currptr->name);
                                               ~~    ^~~~~~~~~~~~~
                                               %s
program1.c:87:9: error: invalid operands to binary expression
      ('void ()' and 'int')
                        count+=1;
                        ~~~~~^ ~
program1.c:89:17: error: invalid operands to binary expression
      ('int' and 'void ()')
        printf("%d",sum/count);
                    ~~~^~~~~~
3 warnings and 2 errors generated.
aditayadav@Aditas-MacBook-Pro ~ % vi question.c
aditayadav@Aditas-MacBook-Pro ~ % cc question.c
question.c:11:17: error: expected ';' after top level declarator
}Node, *Football player;
                ^
                ;
question.c:13:16: error: expected ';' after top level declarator
Football player start;
               ^
               ;
question.c:15:16: error: expected ';' after top level declarator
Football player create(int goals, char name[], char club[])
               ^
               ;
3 errors generated.
aditayadav@Aditas-MacBook-Pro ~ % vi question.c
aditayadav@Aditas-MacBook-Pro ~ % vi question.c
aditayadav@Aditas-MacBook-Pro ~ % cc question.c
question.c:11:17: error: expected ';' after top level declarator
}Node, *Football player;
                ^
                ;
question.c:13:16: error: expected ';' after top level declarator
Football player start;
               ^
               ;
question.c:15:16: error: expected ';' after top level declarator
Football player create(int goals, char name[], char club[]);
               ^
               ;
question.c:16:1: error: expected identifier or '('
{
^
question.c:27:21: error: expected ';' at end of declaration
    Football playrer new = create(goals,name,club);
                    ^
                    ;
question.c:28:8: error: use of undeclared identifier 'start'
    if(start==NULL)
       ^
question.c:29:9: error: use of undeclared identifier 'start'
        start=new;
        ^
question.c:29:15: error: use of undeclared identifier 'new'
        start=new;
              ^
question.c:32:9: error: use of undeclared identifier 'new'
        new->link=start;
        ^
question.c:32:19: error: use of undeclared identifier 'start'
        new->link=start;
                  ^
question.c:33:9: error: use of undeclared identifier 'start'
        start=new;
        ^
question.c:33:15: error: use of undeclared identifier 'new'
        start=new;
              ^
question.c:39:20: error: expected ';' at end of declaration
    Football player new = create(goals,name,club);
                   ^
                   ;
question.c:40:8: error: use of undeclared identifier 'start'
    if(start==NULL)
       ^
question.c:41:9: error: use of undeclared identifier 'start'
        start=new;
        ^
question.c:41:15: error: use of undeclared identifier 'new'
        start=new;
              ^
question.c:44:24: error: expected ';' at end of declaration
        Football player tmp=start;
                       ^
                       ;
question.c:45:15: error: use of undeclared identifier 'tmp'
        while(tmp->link!=NULL)
              ^
question.c:46:13: error: use of undeclared identifier 'tmp'
            tmp=tmp->link;
            ^
fatal error: too many errors emitted, stopping now [-ferror-limit=]
20 errors generated.
aditayadav@Aditas-MacBook-Pro ~ % vi question.c
aditayadav@Aditas-MacBook-Pro ~ % cc question.c
question.c:11:17: error: expected ';' after top level declarator
}Node, *Football player;
                ^
                ;
question.c:13:16: error: expected ';' after top level declarator
Football player start;
               ^
               ;
question.c:15:16: error: expected ';' after top level declarator
Football player create(int goals, char name[], char club[]);
               ^
               ;
question.c:16:1: error: expected identifier or '('
{
^
question.c:27:21: error: expected ';' at end of declaration
    Football playrer new = create(goals,name,club);
                    ^
                    ;
question.c:28:8: error: use of undeclared identifier 'start'
    if(start==NULL)
       ^
question.c:29:9: error: use of undeclared identifier 'start'
        start=new;
        ^
question.c:29:15: error: use of undeclared identifier 'new'
        start=new;
              ^
question.c:32:9: error: use of undeclared identifier 'new'
        new->link=start;
        ^
question.c:32:19: error: use of undeclared identifier 'start'
        new->link=start;
                  ^
question.c:33:9: error: use of undeclared identifier 'start'
        start=new;
        ^
question.c:33:15: error: use of undeclared identifier 'new'
        start=new;
              ^
question.c:39:20: error: expected ';' at end of declaration
    Football player new = create(goals,name,club);
                   ^
                   ;
question.c:40:8: error: use of undeclared identifier 'start'
    if(start==NULL)
       ^
question.c:41:9: error: use of undeclared identifier 'start'
        start=new;
        ^
question.c:41:15: error: use of undeclared identifier 'new'
        start=new;
              ^
question.c:44:24: error: expected ';' at end of declaration
        Football player tmp=start;
                       ^
                       ;
question.c:45:15: error: use of undeclared identifier 'tmp'
        while(tmp->link!=NULL)
              ^
question.c:46:13: error: use of undeclared identifier 'tmp'
            tmp=tmp->link;
            ^
fatal error: too many errors emitted, stopping now [-ferror-limit=]
20 errors generated.
aditayadav@Aditas-MacBook-Pro ~ % vi question.c
aditayadav@Aditas-MacBook-Pro ~ % cc question.c
question.c:13:17: error: expected ';' after top level declarator
}Node, *Football player;
                ^
                ;
question.c:15:16: error: expected ';' after top level declarator
Football player start;
               ^
               ;
question.c:17:1: error: unknown type name 'Footballplayer'
Footballplayer create(int goals, char name[], char club[]);
^
question.c:18:1: error: expected identifier or '('
{
^
question.c:29:20: error: expected ';' at end of declaration
    Football player new = create(goals,name,club);
                   ^
                   ;
question.c:30:8: error: use of undeclared identifier 'start'
    if(start==NULL)
       ^
question.c:31:9: error: use of undeclared identifier 'start'
        start=new;
        ^
question.c:31:15: error: use of undeclared identifier 'new'
        start=new;
              ^
question.c:34:9: error: use of undeclared identifier 'new'
        new->link=start;
        ^
question.c:34:19: error: use of undeclared identifier 'start'
        new->link=start;
                  ^
question.c:35:9: error: use of undeclared identifier 'start'
        start=new;
        ^
question.c:35:15: error: use of undeclared identifier 'new'
        start=new;
              ^
question.c:41:20: error: expected ';' at end of declaration
    Football player new = create(goals,name,club);
                   ^
                   ;
question.c:42:8: error: use of undeclared identifier 'start'
    if(start==NULL)
       ^
question.c:43:9: error: use of undeclared identifier 'start'
        start=new;
        ^
question.c:43:15: error: use of undeclared identifier 'new'
        start=new;
              ^
question.c:46:24: error: expected ';' at end of declaration
        Football player temp=start;
                       ^
                       ;
question.c:47:15: error: use of undeclared identifier 'temp'
        while(temp->link!=NULL)
              ^
question.c:48:13: error: use of undeclared identifier 'temp'
            temp=temp->link;
            ^
fatal error: too many errors emitted, stopping now [-ferror-limit=]
20 errors generated.
aditayadav@Aditas-MacBook-Pro ~ % vi question.c
aditayadav@Aditas-MacBook-Pro ~ % vi assignment.c
aditayadav@Aditas-MacBook-Pro ~ % vi question.c  
aditayadav@Aditas-MacBook-Pro ~ % vi question.c

        printf("\nEnter number of teams  to be inserted at end:");
        scanf("%d",&num);
        for(int i=0;i<num;i++)
        {

                printf("\nNode-%d\nEnter the Goals: ",i+1);
                scanf("%d",&goal);
                printf("Enter the Name: ");
                scanf("%s",name);
                printf("Enter the Club: ");
                scanf("%s",club);
                insertend(goal,name,club);
                printf("\n");
                display();
                printf("\n");
        }
        //Insertion Any
        printf("\nEnter number of footabll teams:");
        scanf("%d",&num);
        for(int i=0;i<num;i++)
        {

                printf("\nNode-%d\nEnter the Goals: ",i+1);
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
        //to delete the node
        printf("\nEnter number of goals  to be deleted:");
        scanf("%d",&num);
        for(int i=0;i<num;i++)
        {
                printf("\nDelete operation:%d\nEnter the name to be deleted : ",i+1);
                scanf("%s",name);
                del(name);
                printf("\n");
                display();
                printf("\n");
        }

        printf("\nEnter  the number  to be searched:");
        scanf("%d",&num);
        for(int i=0;i<num;i++)
        {
                printf("\nEnter the name to be Searched : ");
                scanf("%s",name);
                search_node(name);
        }
        printf("\n");
        count_nodes(); //Count
        avg();          e
return 0;
}


