#include <iostream>
#include <string>
using namespace std;

void swap(char &,char &);
void find_string(string,int);
int cur_count=0;

int main()
{
    string str;
    int total_count = 0;
    
    cout<<"Enter a string: ";
    cin>>str;
    
    int len = str.length();
    
    find_string(str,len); // check original string has 01 
    
    total_count += cur_count; 
    
    cur_count=0;

    for(int i=0;i<len-2;i++)
    {
        for(int j=i+2;j<len;j+=2){
            string temp = str;
            swap(temp[i],temp[j]);
            if(temp!=str){
                find_string(temp,len);
                cout<<temp<<" "; // swapped string
                //cout<<"count: "<<cur_count<<endl;
                total_count += cur_count;
                cur_count = 0;
            }
        }
    }

    cout<<endl<<"Total number of '01' occur in string: " << total_count << endl;
    return 0;
}

void swap(char &a,char &b){
    char temp;
    temp=a;
    a=b;
    b=temp;
}

void find_string(string inp, int len){
    string temp;
    
    for(int i=0;i<len;i++){
        temp = inp.substr(i,2);

        if(temp=="01"){
            cur_count++;
        }
    }
}
