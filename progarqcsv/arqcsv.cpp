#include<iostream>
#include<fstream>   //used for file handling
#include<string>    //used for strings
using namespace std;
/*Everytime before running this program delete previously created 'Student_data.csv' file to avoid buffer overflow errors*/
int main()
{
    string name,college,class_of_student;
    
    fstream fout;
    
    // opening an existing csv file or creating a new csv file
    fout.open("Student_data.csv", ios::out);
    fout<<"Name"<<","<<"College"<<","<<"Class"<<","<<"Roll no"<<"\n";
    
    cout<<"Enter details of 5 students=>";
        str(name,"nome"); str(college,"colegio"); str(class_of_student, "estudante");
    
        fout<<name<<","<<college<<","<<class_of_student<<"\n";    // writing data to a csv file
    fout.close();   // closing csv file
    fstream fin;
    string data;
    cout<<"\nCSV file has been successfully created..!!";
    cout<<"\n\nDisplaying the content of CSV file=>\n\n";
    
    // opening existing csv file in read mode        
    fin.open("Student_data.csv", ios::in);
    
    
    return 0;
}
