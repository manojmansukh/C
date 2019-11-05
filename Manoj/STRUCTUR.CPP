   #include<stdio.h>
   #include<conio.h>
   #include<string.h>
   struct manoj
   {
	int id;
	char name[30];
   }i,n;

   void main()
   {
      i.id=101;
      strcpy(n.name,"manoj");
      clrscr();
      printf("id =%d\n",i.id);
      printf("Name=%s\n",n.name);

   getch();

   }