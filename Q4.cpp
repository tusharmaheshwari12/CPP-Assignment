#include<string.h>
#include <iostream>
using namespace std;

void getmin(int [],int);
bool swap(char [],int,int);
void permutation(char [],int,int);
int LCSString(string,string,int,int);

int j=0,r=0;
int a[]={};
string arr[]={};

int main()
{
   char string[20];
   int n,k,i,l,m;
   cout <<"Enter a string: ";
   cin>>string;
   
   int s=strlen(string);
   
   n = strlen(string);
   
   permutation(string, 0, n);
   
   // for(i=0;i<j;i++){
   //    cout<<arr[i];
   // }
   if(j==2){
      cout<<"The result is 0"<<endl;
   }
   else{
      for(i=0;i<j;i++){
         for(k=i+1;k<j;k++){
            //cout << "The length of the LCS is " <<LCSString(arr[i], arr[k], s, s);
            LCSString(arr[i], arr[k], s, s);
         }
      }
   }
   getmin(a, r);
   return 0;
}

void getmin(int arr[] , int n){
   int min = arr[0];
   for(int i = 1; i < n; i++){
      if(min > arr[i])
         min = arr[i];
   }
   cout<<"\nThe smallest LCS is: "<<min<<endl;
}

bool swap(char str[], int start, int curr){
 for (int i = start; i < curr; i++)
    if (str[i] == str[curr])
       return 0;
    return 1;
}

void permutation(char str[], int index, int n){
    if (index >= n) {
       //cout<<str<<"\t";
       arr[j]=str;
       j++;
       return;
    }
    for (int i = index; i < n; i++) {
       bool check = swap(str, index, i);
       if (check) {
          swap(str[index], str[i]);
          permutation(str, index + 1, n);
          swap(str[index], str[i]);
       }
    }
 }

int LCSString(string X, string Y, int m, int n)
{
   int temp[m + 1][n + 1];
   int result = 0;

   for (int i = 0; i <= m; i++)
   {
      for (int j = 0; j <= n; j++)
      {
         if (i == 0 || j == 0)
            temp[i][j] = 0;

         else if (X[i - 1] == Y[j - 1]) {
            temp[i][j] = temp[i - 1][j - 1] + 1;
            result = max(result, temp[i][j]);
         }
         else
            temp[i][j] = 0;
      }
   }
   a[r]=result;
   r++;
   return result;
}
