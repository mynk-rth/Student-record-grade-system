#include<stdio.h>
typedef struct student
             {
             	int roll;
             	char name[50];
             	int marks[5];
			 }std;
			 
void main()
{
	
	        std S;
            FILE *p,*t;
            int roll_no;
            p=fopen("std.db","r");
            if(p==NULL)
            {
                printf("File not found.....");
			}
			else
			{ t=fopen("temp.db","w");
			  printf("Enter Student roll no. U want to Delete:");
			  scanf("%d",&roll_no);
				
				 while(!feof(p))
				 {
				 	fread(&S,sizeof(S),1,p);
				 	if(feof(p)) break;
				 	if(roll_no== S.roll) 
				 	{
					   printf("Sudent Record:\n");
				 	   printf("Roll no. :%d\n",S.roll);
				 	   printf("Name:%s\n",S.name);
				 	   printf("Marks (Hin,Eng,Phy,Chm,Maths) :%d %d %d %d %d\n",S.marks[0],S.marks[1],S.marks[2],S.marks[3],S.marks[4]);
				 	   printf("Record Deleted Successfully....");
				     }
				     else
				     {
				     	fwrite(&S,sizeof(S),1,t);
				     	
					 }
				     }
				 	
				 }
			  	
				fclose(p);
				fclose(t);
				remove("std.db");
				rename("temp.db","std.db");
	
	
	
	
	
	
	
	
	
	
}
