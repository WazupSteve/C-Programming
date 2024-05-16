#include<stdio.h>
/* #include_next behaves like the #include directive, 
   except that it specifically excludes the directory of the including file 
   from the paths to be searched for the named file.
*) This allows you to include multiple versions of a file with the same name 
   in different parts of an application; or to include one header file in 
   another header file with the same name 
   (without the header including itself recursively). 
   Provided that the different file versions are stored in different directories,
   the directive ensures you can access each version of the file,
   without requiring that you use absolute paths to specify the file name.

*/
//#include "C:\Users\MacBook Pro\Downloads\unit-5\pre-processor-directives\file_inclusion_exclusion_directives\sub_directory\original.h"
#include "D:/Akash/B.Tech/2nd Sem/C/Class Codes/pre-processor-directives/file_inclusion_exclusion_directives/sub_directory/original.h"
int main()
{
	printf("%d",org_val);
	return 0;
}