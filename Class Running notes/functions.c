#include <stdio.h>
/*
int sum(int ,int );
int main()
{
  int a=10,b=20;
  int res=sum(a,b);
  printf("sum=%d\n",res);
  //printf("SUM=%d\n",sum(a,b));
  return 0;
}
int sum(int a,int b)
{
    //return a+b;
    printf("%d",a+b);
}
*/

//Swap two numbers using a user-defined function and then print the swapped results and return value should be nill
//Call by-value parameter passinmg
/*
int a=10,b=20;
void swap(int a,int b){
    a=a^b;
    b=a^b;
    a=a^b;
    printf("a=%d\nb=%d\nin swap function\n",a,b);
    return;
}
int main()
{
    //int a=10,b=20;
    swap(a,b);
    printf("a=%d\nb=%d\nin main function",a,b);
    
}
*/
//SWAPPING Using pointers
/*
void swap(int , int );
int main()
{
    int a=10,b=20;//LOCAL
    swap(&a,&b);
    printf("Control back in main\n");
    printf("a=%d\t b=%d\n");
    return 0;
}
void  swap(int *p,int *q)
{
    printf("Control is in the called function");
    int temp=*p;
    *p=*q;
    *q=temp;
}
*/
//void read(int n;int a[n],int n); //Size of array is specified here
/*
void read(int b[],int n){
    for(int i=0;i<n;i++)
        scanf("%d",&b[i]);
}
void display(int a[],int n){
    for(int i=0;i<n;i++)
        printf("%d\n",a[i]);
}
void update(int a[],int n,int pos){
    a[pos]=999;
}
void sum(int a[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
    }
    printf("Sum=%d",sum);
}
int main()
{
    int n;
    printf("Enter the array size:\n");
    scanf("%d",&n);
    printf("Enter the elements of the array\n");
    int a[n];
    read(a,n);
    printf("Display\n");
    display(a,n);
    printf("----------------------------------\n");
    int pos;
    printf("Enter the positional value: ");
    scanf("%d",&pos);
    update(a,n,pos);
    display(a,n);
    sum(a,n);
    return 0;
}
*/

//Array Fucntions
/*
  void read(int a[],int n){
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
  }
  void disp(int a[],int n){
    for(int i=0;i<n;i++){
        printf("%d\n",a[i]);
    }
  }
  int main(){
    printf("Enter the size of array:\n");
    int n;
    scanf("%d",&n);
    int a[n];
    printf("Enter the elemenets if the array:\n");
    read(a,n);
    printf("-------------------------------\n");
    disp(a,n);
  }
 */ 