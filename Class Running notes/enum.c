/*
#include <stdio.h>
enum week{
    mon,tue,wed
};
enum week2{
    mon,tue=4,wed
};
int main(){
    printf("%d\n",tue);
    // Error error: redeclaration of enumerator 'mon'
     //mon,tue=4,wed
     
}
*/

/*
#include <stdio.h>
enum week{
    mon='a',tue=97,wed,thu,fri,sat,sun=65
};
int main(){
    for(int i=mon;i<=sat;i++)
    {
        printf("%d\n",i);
    }
    printf("---------------------\n");
    printf("%d\t %d",mon,tue);
}
*/
#include <stdio.h>
enum week{
    mon=10,tue,wed,thu,fri,sat,sun=mon+tue
};
int main(){
    //mon+=1; //error
    //printf("%d\n"mon+wed); //Error
    printf("%d\n",sun);
}