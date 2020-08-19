#include <stdio.h>
struct node
{
  char a[30];
  int i;
  float f;
  int value;
}



void structure(struct node n)
{
  printf("\nName of the person is         :%a", n.a);
  printf("\nAge of the person is          :%d",n.i);
  printf("\nBank balance of the person    :%f",n.f);
}


void callByValue(struct node n)
{
  #include <stdio.h>
struct node
{
  char s[30];
  int i;
  float f;
}


void callByValue(struct node n)
{
  printf("\nName of the person is         :%s", n.a);
  printf("\nAge of the person is          :%d",n.i);
  printf("\nBank balance of the person    :%f",n.f);
  
  
  
}

void callByReference(struct node* n)
{printf("\nName of the person is         :%s", n.a);
  printf("\nAge of the person is          :%d",n.i);
  printf("\nBank balance of the person    :%f",n.f);
  
}

int main()
{
  printf("\nEnter name,age and bank balance of the person\n");
  scanf("%s",value.s);
  scanf("%d",&value.i);
  scanf("%f",&value.f);
  callByValue(value);
  printer(node1);
  callByReference(&value);
  printervalue);
  return 0;
}

  }

void callByReference(struct node* n)
{

int main()
{
  printf("\nEnter name,age and bank balance of the person\n");
  scanf("%s",value.s);
  scanf("%d",&value.i);
  scanf("%f",&value.f);
  callByValuevalue);
  printer(value);
  callByReference(&value);
  printer(value);
  return 0;
}
