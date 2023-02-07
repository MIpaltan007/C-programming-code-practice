// struct Student{
//     int rollno;
//     float marks;
//     char name[20];
// }S1;
// void main()
// {
//     int a;
//     struct student ;
//     printf("%d",sizeof(S1));
// }

// struct Student
// {
//     int rollno;
//     char name[20];
//     float marks;
// }S={55,"Chutiya",32};
// void main()
// {
//     struct Student S1={4,"Aditya",89.8};
//     struct Student S2={22,"Bada Vala",94};
//     printf("%d",S1.rollno);
// }

// #include<stdio.h>
// struct Student 
// {
//     int rollno;
//     char name[20];
//     float marks;
// };
// void main()
// {
//     struct Student S1;
//     struct Student S2={4,"Aditya",89.8};
//     S1=S2;
//     printf("%d",S1.rollno);
// }

// #include<stdio.h>
// struct Student
// {
//     int rollno;
//     char name[20];
//     float marks;
// };

// void main()
// {
//     struct Student S1={1,"Gupta",89};
//     struct Student S2={2,"Upadhyay",98};
//     printf("Info For S1\n");
//     printf("\n%d %s %f\n", S1.rollno,S1.name,S1.marks);
//     printf("\nInfo for S2\n");
//     printf("\n%d %s %f",S2.rollno,S2.name,S2.marks);   
// }
// #include<stdio.h>
// #include<string.h>
// struct Courses
// {
//     char Website[50];
//     char Subject[50];
//     int price;
// };
// void main(){
//     struct Courses C;
//     strcpy(C.Website,"W3School.in\n");
//     strcpy(C.Subject,"C Programming\n");
//     C.price=0;

//     printf("Website:%s\n",C.Website);
//     printf("Subject:%s\n",C.Subject);
//     printf("Price:%d\n",C.price);
// }

// #include<stdio.h>
// struct point{
//     int x,y;
// };
// void main(){
//     struct point p1={0,1};
//     p1.x=20;
//     printf("x=%d,y=%d",p1.x,p1.y);
// }

// #include<stdio.h>
// struct Point{
//     int x,y,z;
// };
// void main(){
//     struct Point p1={.y=0,.z=1,.x=2};
//     struct Point p2={.x=20};
//     printf("x=%d,y=%d,z=%d",p1.x,p1.y,p1.z);
//     printf("\nx=%d",p2.x);
// }

/*Array of Structures*/
// #include<stdio.h>
// #include<string.h>
// struct Student{
//     int rollno;
//     char name[20];
//     float marks;
// };
// void main(){
//     int i;
//     struct Student st[5];
//     printf("Enter details for 5 students:\n");
//     for ( i = 0; i < 5; i++)
//     {
//         printf("Enter rollno:\n");
//         scanf("%d",&st[i].rollno);
//         printf("Enter name:\n");
//         scanf("%s",&st[i].name);
//         printf("Enter marks:\n");
//         scanf("%f",&st[i].marks);
//     }
//     printf("\n Student Information List");
//     for(i=0;i<5;i++)
//     {
//         printf("\n Rollno=%d,Name=%s,Marks=%f",st[i].rollno,st[i].name,st[i].marks);
//     }
        
    
    
// }

// #include<stdio.h>
// struct Point{
//     int x, y
// };
// void main()
// {
//     struct Point arr[10];
//     arr[0].x=10;
//     arr[0].y=20;
//     printf("%d %d",arr[0].x,arr[0].y);
// }

/*Pointers to Struct*/
// #include<stdio.h>
// struct Point{
//     int x,y;
// };
// void main()
// {
//     struct Point p1={1,2};
//     struct Point *p2=&p1;
//     printf("%d %d",p2->x,p2->y);
    
// }

// #include<stdio.h>
// struct Student
// {
//     int rollno;
//     char name[20];
//     float marks;
// };
// void main(){
//     struct Student S1;
//     struct Student *ptr=&S1;
//     printf("Enter Details for S1\n");
//     scanf("%d %s %f",&S1.rollno,S1.name,&S1.marks);
//     printf("Rollno=%d,Name=%s,Marks=%f",ptr->rollno,ptr->name,ptr->marks);
// }

/*Structures using typedef*/
// #include<stdio.h>
//  typedef struct Student
// {
//     int rollno;
//     char name[20];
// }stud;
// void main(){
//     stud s1;
//     printf("Enter S1 details:\n");
//     printf("Enter rollno:\n");
//     scanf("%d",&s1.rollno);
//     printf("Enter name:\n");
//     scanf("%s",&s1.name);
//     printf("rollno=%d\n,name=%s\n",s1.rollno,s1.name);

// }
/*Nested Structure*/
// #include<stdio.h>
// struct Address
// {
//     char City[20];
//     int pin;
//     char Phone[11];
// };
// struct Student
// {
//    char Name[20];
//    struct Address add;
   
   
// };
// void main(){
//     struct Student stud;
//     printf("Enter Student's Info:\n");
//     scanf("%s %d %s %s",&stud.add.City,&stud.add.pin,&stud.add.Phone,&stud.Name);
//     printf("City=%s,pin=%d,Phone=%s,Address=%s",stud.add.City,stud.add.pin,stud.add.Phone,stud.Name);
// }

/*Function in Nested Structure*/
// #include<stdio.h>
// struct Address{
//     char city[20];
//     int pin;
//     char phone[20];
// };
// struct Student{
//     char name[20];
//     struct Address add;
//     };
// void display(struct Student);
// void main(){
//     struct Student stud;
//     printf("Student's info:\n");
//     scanf("%s %d %s %s",stud.add.city,&stud.add.pin,stud.add.phone,stud.name);
//     display(stud);
// }
// void display(struct Student stud){
//     printf("Presenting...\n");
//     printf("City=%s,Pin=%d,Phone=%s,Name=%s", stud.add.city,stud.add.pin,stud.add.phone,stud.name);
// }

/*Structure Padding 1 */
// #include<stdio.h>
// #include<string.h>
// struct first_structure
// {
//     int Rollno1,Rollno2;
//     char firstname;
//     char character;
//     float salary;
// };
// struct second_structure
// {
//     int Rollno1,Rollno2;
//     char firstname;
//     char character;
//     float salary;
// };
// void main()
// {
//     struct first_structure s1;
//     struct second_structure s2;
//     printf("FIRST STRUCTURE\n");
//     printf("Size of 1st structure in bytes=%d\n",sizeof(s1));
//     printf("Address of rollno1=%u\n",&s1.Rollno1);
//     printf("Address of rollno2=%u\n",&s1.Rollno2);
//     printf("Address of first name=%u\n",&s1.firstname);
//     printf("Address of character=%u\n",&s1.character);
//     printf("Address of salary=%u\n",&s1.salary);
//     printf("Second STRUCTURE\n");
//     printf("Size of 2nd structure in bytes=%d\n",sizeof(s2));
//     printf("Address of rollno1=%u\n",&s2.Rollno1);
//     printf("Address of rollno2=%u\n",&s2.Rollno2);
//     printf("Address of first name=%u\n",&s2.firstname);
//     printf("Address of character=%u\n",&s2.character);
//     printf("Address of salary=%u\n",&s2.salary);
    
// }

// #include<stdio.h>
// #include<string.h>
// struct employee
// {
//    char first_name[30];
//     char second_name[40];
// };
// void main()
// {
//     struct employee e;
//     printf("Enter first name:\n");
//     scanf("%s",e.first_name);
//     printf("Enter second name:\n");
//     scanf("%s",e.second_name);
//     printf("First Name=%s\n",e.first_name);
//     printf("Second Name=%s\n",e.second_name);
//     printf("1st STRUCTURE:\n");
//     printf("Size of e in bytes=%d\n",sizeof(e));
//     printf("Address of firstname=%u\n",&e.first_name);
//     printf("Adress of second name=%u\n",&e.second_name);
// }

/*Structure Packing */
// #include<stdio.h>
// #pragma pack(1)
// struct abc
// {
//     char a;
//     int b;
//     char c;
// };
// void main()
// {
//     struct abc s;
//     printf("%d",sizeof(s));
// }
 
 