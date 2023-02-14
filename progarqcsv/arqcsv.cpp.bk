#include<iostream>
#include<fstream>   //used for file handling
#include<string>    //used for strings
using namespace std;
/*Everytime before running this program delete previously created 'Student_data.csv' file to avoid buffer overflow errors*/
int main()
{
    int roll_no;
    string name,college,class_of_student;
    
    fstream fout;
    
    // opening an existing csv file or creating a new csv file
    fout.open("Student_data.csv", ios::out);
    fout<<"Name"<<","<<"College"<<","<<"Class"<<","<<"Roll no"<<"\n";
    
    cout<<"Enter details of 5 students=>";
    for(int i=1; i<=5; i++)
    {
        cout<<"\nName of student "<<i<<" :";
        getline(cin,name);
        cout<<"College of student "<<i<<" :";
        getline(cin,college);
        cout<<"Class of student "<<i<<" :";
        getline(cin,class_of_student);
        cout<<"Roll no of student "<<i<<" :";
        cin>>roll_no;
        cin.ignore();   /* if we use getline fun after cin function then it will skip 1 input. To avoid this we need to use 'cin.ignore()' fun to flush newline out of the buffer*/
    
        fout<<name<<","<<college<<","<<class_of_student<<","<<roll_no<<"\n";    // writing data to a csv file
    }
    fout.close();   // closing csv file
    fstream fin;
    string data;
    cout<<"\nCSV file has been successfully created..!!";
    cout<<"\n\nDisplaying the content of CSV file=>\n\n";
    
    // opening existing csv file in read mode        
    fin.open("Student_data.csv", ios::in);
    
    for(int i=0; i<=5; i++)
    {
        // getline fun will read one entire row of csv file and will store it in string 'data'
        getline(fin,data);
        cout<<data<<"\n";
    }
    
    return 0;
}