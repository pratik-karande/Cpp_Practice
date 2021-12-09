#include <iostream>
#include<fstream>
using namespace std;
int main(){
    string filename("file1.txt");
    ofstream file_out;
    file_out.open(filename,std::ios_base::app);
    file_out<<"Pratik Suryakant Karande"<<endl;
    cout<<"Done!!"<<endl;
    return EXIT_SUCCESS;
}
