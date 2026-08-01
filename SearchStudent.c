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
	FILE *p;
	float tmark,pert;
	char grade;
	int roll_no,found=0;
	p=fopen("std.db","r");
	if(p==NULL)
	{
		printf("File not found...\n");
	}else 
	{
		printf("Enter Roll no. u want to search\n>>>");
		scanf("%d",&roll_no);
		
		
		printf("\t-----------------------------------MARKSHEET----------------------------------------\n");
        printf("\tROLL\tNAME\tHIN\tENG\tPHY\tCHM\tMATH\tTOTAL\t %% \tGRADE\n");
		printf("\t------------------------------------------------------------------------------------\n\n");
		while(!feof(p))
		{
			fread(&S,sizeof(S),1,p);
			if(feof(p))break;
			if(roll_no == S.roll)
			{
			tmark = S.marks[0]+S.marks[1]+S.marks[2]+S.marks[3]+S.marks[4];
			pert = tmark/500*100;
			if(pert>=70.00 || pert<=100.00)
			{
				grade = 'A';                              //70-100
			}else if(pert>=50.00 || pert<=69.00)
			{
				grade='B';                                //50-69
			}else if(pert>=33.00 || pert<=49.00)
			{
				grade='C';                                //33-49
			}else if(pert>=0.00 || pert<=32.00)
			{
				grade='F';                                //0-32
			}
			printf("\t%d\t%s\t %d\t%d\t%d\t%d\t%d\t%.0f/500\t %.2f\t %c\n",S.roll,S.name,S.marks[0],S.marks[1],S.marks[2],S.marks[3],S.marks[4],tmark,pert,grade);
		    found++;
			break;	
			}
		}
		if(found==0)
		{
			printf("\tRecord not found...\n");
		}
	}
	fclose(p);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}






















































