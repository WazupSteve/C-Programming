Variables used in program die at the end of the program execution. There may be instances where there is a need to display large data on the console. As the CPU memory is volatile its hard to recover the generated data again and again.
So hence we can use files to persist or store data even after the program execution is completed.
A file represents a sequence of bytes File handling enables us to create , update , read and delete the files stored on the local file system.

## Types of Files 
**Non binary files** - Text , Audio and Video.
**Binary Files** 

### Operation on Files 

1) Reading the contents of the file.
2) writing the contents to the file 
3) **Physical Name** -  The file is maintained by the OS . The OS decides the naming convention of the file.
4) **Logical Name** - identifier is used to refer the a file. Also called as File Handle. It is usually given by the user.
5) Mode of operation -  Can be read only , write only , append or a combination of these.

**Few Modes of Operation** 
For the append mode - whatever new content is added , its added at the end of the file and the file is updated.
r - read only
w - write 
a- append
w+ means write and read.
r+ means read and write
a+ means append and read

### Need of Files
1) When a program is terminated, the entire data is lost. Storing in a file helps us to access the data generated even after the program is terminated.
2) Usage of files address the issues of storing data in bulk.

### Classification of Files
1) Stream Oriented (High level) data files
2) System Oriented (Low Level) data files

High level data files are of 2 types 
1) Text - Formatted(fscanf and fprintf ) and Unformatted( fgetc , fputc , fgets , fputs)
2) Binary - formatted and unformatted(fread and fwrite)

`fgetc()` and `getc() `cannot be used as macros.

We need a structure pointing to the file 
We can use `fopen()` to point to the file.

`fopen( file-with ,mode_of_operation)`
Pathname --> 2 Types ---> Absolute path and Relative Path
On success `fopen() `function returns the starting address of the file and on failure it returns us NULL value.
If we want to receive the success or failure value then we need to use file structure pointer.
Example - 

```c
FILE_NAME *fp = fopen(" path_name " , mode )
```

```c
#include<stdio.h>
//a simple program to open and close a file, and to print address on success and failure cases
//file_name including path----->absolute path
//just the file name------->relative path. The file should be present in the current directory
int main()
{
	FILE *fp=fopen("C:/c program files/Unit-4/file_handlers/fscanf_fprintf/check.txt","r");
	if(fp==NULL)
		printf("failure!! coudn't open the file!! address=%p\n",fp);
	else
	{
		printf("success!! file is opened! address=%p",fp);
		fclose(fp);
	}
	return 0;
}
```

``fclose(fp)`` is used to to close the file once the work is done.

`fread() `and `fwrite() `are to be self learnt  - must be used in the case study project

``fscanf()`` is used to get file input from the user

`fprinf()` is used the print the file contents.

Example :

## Method 1

This is done using the ``fscanf()`` and` fprintf()`
```c
#include<stdio.h>
/*int fscanf(file_ptr,const char *format,address);
success: no.of values read
failure: -1  which is EOF
*/

/*int fprintf(file_ptr, const char *format,arguments);
success: no.of. characters written
failure:EOF
*/

//a simple program to read from one file and write into another file using fscanf & fprintf
int main()
{

	FILE *rfp=fopen("C:/c program files/Unit-4/file_handlers/fscanf_fprintf/check.txt","r");
	FILE *wfp=fopen("output.txt","w");
	if(rfp==NULL)
		printf("failure!! coudn't open the file!! address=%p\n",rfp);
	else
	{
		printf("success!! file is opened! address=%p\n",rfp);
		char ch;
		while(fscanf(rfp,"%c",&ch)!=EOF) 
		{
			fprintf(wfp,"%c",ch);
		}
		fclose(rfp);
		fclose(wfp);
	}
	return 0;
}
/* //other approach-1
fscanf(rfp,"%c",&ch);
while(!feof(rfp))  //feof(rfp)!=-1 or feof(rfp)!=EOF does not work, goes for infinite execution
		{
			fprintf(wfp,"%c",ch);
			fscanf(rfp,"%c",&ch);
		}
*/
```
 Initially we open the check.txt in read mode. Then we open output.txt in write mode. If its NULL, its going to print the failure statement , else it prints SUCCESS. 
 We created a variable ch , which is of the type character. This is used to copy the contents of one file to another . We copy every character from the `check.txt` into the ch variable.
Then we use a while loop to print the characters of variable ch into the `output.txt` file.
We compare the output of the `scanf` until its not equal to EOF.
NOTE:
`while(-1)` is true whereas `while(0)` is false.

## Method  2

This is done using the` getc()` and` putc()` method
```c
#include<stdio.h>
//to read from one file and write into another file using getc & putc functions
/*	int getc(FILE *)
		success: ascii value of character read
		failure: EOF
*/
/*
	int putc(ch,FILE*fp)
		success:ascii value of character written
		failure: EOF
*/
int main()
{
	FILE *rp=fopen("C:/c program files/Unit-4/file_handlers/fscanf_fprintf/check.txt","r");
	FILE *wp=fopen("output.txt","w");
	if(rp==NULL)
		printf("failure!! coudn't open the file!! address=%p\n",rp);
	else
	{
		printf("success!! file is opened! address=%p\n",rp);
		char ch;
		while((ch=getc(rp))!=EOF)  
		{
			putc(ch,wp);
		}
		fclose(rp);
		fclose(wp);
	}
	return 0;
}


/* //other approach1
ch=getc(rp);
while(ch!=EOF) 
{
	putc(ch,wp);
	ch=getc(rp);
}
*/
```

Check the files sent in class and add those codes here and update the files
