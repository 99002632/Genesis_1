#include"emp.h"

int main()
{
FILE * fp;
Employee emp;
int option;
char another;
if((fp=fopen("employeeInfo.txt","rb+"))== NULL)
{
 if((fp=fopen("employeeInfo.txt","wb+"))== NULL)
 {
 printf("Opening file error");
 return 0;
 }
}
char user[10],
char passcode[10];
printHead();
welcome();
printHead();
printf("\n\t\t\t\t login screen");
printf("\n\t\t\t enter ur details");
printf("\n\n\n\t\t enter username: ");
scanf("%s",user);
printf("\n\t\tPasscode: ");
int imp;
imp=0;
do
{
passcode[imp] = getch();
if(passcode[imp] == 13 )
{
break;
}
else if(passcode[imp]==8 && imp>0)
{
printf("%c %c %c",8,32,8);
imp--;
}
else
{
printf("*");
imp++;
}
}while(passcode[imp]!=13);
password[imp] = '\0';
if(((strcasecmp(user,"admin"))==0) && ((strcasecmp(passcode,"pass")==0)))
{
 while(1)
{
 printHead();
 printf("\n\t\t\t\t main page");
 printf("\n\n\n ");
 printf("\n\n\t\t\t 1. add emp");
 printf("\n\n\t\t\t 2. delete emp");
 printf("\n\n\t\t\t 3. modify Emp");
 printf("\n\n\t\t\t 4. disp emp list");
 printf("\n\n\t\t\t 5. Search Record");
 printf("\n\n\t\t\t 6. disp basic details");
 printf("\n\n\t\t\t 7. disp gender");
 printf("\n\n\t\t\t 8. no of Male emp");
 printf("\n\n\t\t\t 9. no of Female emp");
 printf("\n\n\t\t\t 10. no of Emp from abc");
 printf("\n\n\t\t\t 11. no of  Emp from diff district");
 printf("\n\n\t\t\t 12. no of Emp of main branch");
 printf("\n\n\t\t\t 13. no of Emp of others branch");
 printf("\n\n\t\t\t  0. done");
 printf("\n\n\t\t Enter Your Option :--> ");
 scanf("%d",&choice);
        
 switch(choice)
 {
 case 0: return 1;
 break;
 case 1: add(fp);
 break;
 case 2: fp=del(fp);
 break;
 case 3: modify(fp);
 break;
 case 4: displayList(fp);
 break;
 case 5: searchRecord(fp);
 break;
 case 6: displaybasic(fp);
 break;
 case 7: basiccontact(fp);
 break;
 case 8: maleemp(fp);
 break;
 case 9: femaleemp(fp);
 break;
 case 10: frmdiff(fp);
 break;
 case 11: frmors(fp);
 break;
 case 12: mainbr(fp);
 break;
 case 13: otherbr(fp);
 break;
 default: printf("\n\t\t wrong key pressed");
 printf("\n\t\t prog terminated");
 getch();
 exit(0);
 }
}
}
else {
 printf("\n\t\t login error");
}
return 1;
}
