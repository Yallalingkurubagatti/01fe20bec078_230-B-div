#include <stdio.h>
#include <stdlib.h>

struct token_details
{ char fr[25],to[25];
int price;
};


typedef struct token_details TD;
void disp_sp(TD *x, int);
void read(TD *x, int);
void disp_ep(TD *x, int);


void main()
{TD *x,x1[10];
int n;
printf("enter no of pssengers\n");
scanf("%d",&n);
x=x1;
read(x,n);
disp_sp(x,n);
disp_ep(x,n);

}

void read(TD *x,int n)
{int i;
printf("Enter token details\n\n");
for(i=0;i<n;i++)
{printf("Enter destination from:");
scanf("%s",x->fr);
printf("enter destination to:");
scanf("%s",x->to);
printf("Enter price:");
scanf("%d",&x->price);
}
}
void disp_sp(TD *x,int n)
{int i;
printf("\n Token details\n");
for(i=0;i<n;i++)
{printf("from:\t");
printf("%s\n",x->fr);
printf("to:\t");
printf("%s\n",x->to);
printf("price:\t");
printf("%d\n",x->price);
x++;
}
}
void disp_ep(TD *x,int n)
{int i;
printf("\n reverse Token details\n");
for(i=n-1;i>=0;i--)
{printf("from:\t");
printf("%s\n",x->fr);
printf("to:\t");
printf("%s\n",x->to);
printf("price:\t");
printf("%d\n",x->price);
}
}


