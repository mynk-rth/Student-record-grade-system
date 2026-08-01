#include<stdio.h>
typedef struct student
             {
             	int roll;
             	char name[50];
             	int marks[5];
			 }std;
			 
void main ()
{
	std S;
//	printf("%d",sizeof(S));                                // 76 bytes
	
	int i;
	char ch;
	
	FILE *p;
	p= fopen("std.db","r");
	if (p==NULL)
	{
		p=fopen("std.db","w");
	}else
	{
		p=fopen("std.db","a");
	}
	do
	{
	printf("Enter Roll number : ");
	scanf("%d",&S.roll);
	printf("Enter Name : ");
	fflush(stdin);
	gets(S.name);
	printf("Enter Marks (Hin,Eng,Phy,Chm,Maths) : \n>>>");
	fflush(stdin);
	scanf("%d %d %d %d %d",&S.marks[0],&S.marks[1],&S.marks[2],&S.marks[3],&S.marks[4]);
//	printf("%d %d %d %d %d",S.marks[0],S.marks[1],S.marks[2],S.marks[3],S.marks[4]);

	fwrite(&S,sizeof(S),1,p);                            // transfer E in file or p
	
	printf("\nAdd new student y/n ?\n>>>");
	fflush(stdin);
	scanf("%c",&ch);
	
    }while(ch=='y' || ch=='Y');
    
    fclose(p);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}











































