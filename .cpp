#include<iostream>
#include<iomanip>
#include<fstream>
#include<conio.h>
#include<cstring>
#include<stdio.h>
#include<cstdlib>
#include<windows.h>
using namespace std;
// declare a structure
struct  student
{
int rollno;
char name[30];
int marks;
};

void addStudent();
void displayStudent();
void searchStudent();
void modifyStudent();
void deleteStudent();
void sortStudent();
void renameFile();
void gotoxy (short , short);
student stu[100];



int main()
 {
 char ch1;
   while (1)
     {
        system("cls");
	   
	   cout << setw( 25 ) << "-------------" << endl

          << setw( 25 ) << "| MAIN MENU |" << endl

          << setw( 25 ) << "-------------" << endl << endl

          << setw( 52 )

          << "Please choose one of the options below: "

          << endl << setw( 71 )

          << "--------------------------------------------------------------"

          << endl << endl

 

          << setw( 25 ) << "( A ) add record" << endl << endl

          << setw( 31 ) << "( O ) sort all records" << endl << endl

          << setw( 34 ) << "( S ) search for a record" << endl << endl

          << setw( 31 ) << "(D) display a record" << endl << endl

          << setw( 32 ) << "( T ) delete / undelete" << endl << endl

          << setw( 28 ) << "(M) modify record" << endl << endl
          
          << setw(28) << "   (R) Rename File" << endl << endl
         
		  << setw( 19 ) << "( Q ) Quit" << endl << endl
		  <<setw( 30 ) << "Enter Option      [ ]" << endl << endl;
		  
		  gotoxy(28,21);
			
		   switch(getche())
	  
       {
         case 'a':
		 case 'A':addStudent();break;
          
		 case 'd':
		 case 'D': displayStudent();break;
         
		 case 'S':
		 case 's':searchStudent();break;
         
		 case 't':
		 case 'T':deleteStudent();
		 break;
		 
		 case 'o':
		 case 'O':sortStudent();
		 break;
         
		 case 'm':
		 case 'M':modifyStudent();
		 break;
		 
		 case 'r':
		 case 'R': renameFile();
		 	break;
		 
		 case 'q':
		 case 'Q':exit(0);break;
         default:
		puts("\n enter only from selection listed");
       } 
     }
    
	getch();
 }
 // first i globally initialize n so it gave information about how many record are currently stored in the array of students
 
 void addStudent()
 {
 	char c;
 	do{
 		
 	ofstream fout;
 	fout.open("myfile.txt", ios::app | ios::binary);
 	
 	
 	cout<<"----------------Add student record----------------" << endl;
 	cout<<"\nenter a student name:\n";
 	cin.getline(stu[n].name,30) 
 	cin.ignore();
 	cout<<"\nenter the rollno\n";
 	cin>> stu[n].rollno;
 	cin.ignore();
 	cout<<"\n enter the marks of student:\n";
 	cin >> stu[n].marks;
 	cin.ignore();
 	n++;
 	
 	cout<<"do you wanted to add the more record in this[yes/no]:\n";
 	c = getch()
 	
 	fout.write((char*) &stu, sizeof(stu));
 	cout<<"data written to the file successfully\n";
 	fout.close();
 }
 while(c = 'y' || c ='Y')
}

void displayStudent()
{
	ifstream fin;
	fin.open("myfile.txt" , ios:: in | ios::binary);
		
		cout<< "in display function\n";
	
		cout<<setw(15)<<" Name:"<<setw(15)<<"Id:"<<setw(15)<<"salary"<<setw(15)<<"rank:"<<"\n";
		cout<<setw(15)<<"-------"<<setw(15)<<"-------"<<setw(15)<<"-------"<<setw(15)<<"------"<<"\n";
		fin.read((char*)&stu, sizeof(stu));
		fin.close();
		for(int i=0;i<n;i++)
			{
		         	cout<<setw(15)<<emp[i].name<<setw(15)<<emp[i].id<<setw(15)<<emp[i].salary<<setw(15)<<emp[i].rank<<"\n";
			}
			
			
		cout<<"Press enter to go to main menu.....";
		getch();
			
	}
	
	 
void searchStudent()
{
	ifstream fin;
	fin.open("myfile.txt" , ios::in | ios::binary )
}
 
 void gotoxy(short x, short y) 
{
COORD pos = {x, y};
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

	
	