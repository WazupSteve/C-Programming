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

Special Character `/0` is used to indicate termination and has the ASCII value of 26.
This marks the EOF.

The difference is `fgetc()` and `fputc()` are the functions while `getc()` and` putc()` are macros

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

If we assign a constant to any variable , then we cannot modify it.
On failure it gives -1 (END OF FILE)
On success it gives a non negative number (0)

```c
#include<stdio.h>
/* char* fgets(char *char_array, int n, FILE *stream);
	success:returns Pointer to the string buffer
	failure: NULL on EOF or Error.
   int fputs(const char *s, FILE *stream);
	success:A non-negative number (we usually see 0)
	failure: EOF(-1) on error.\

NOTE: gets(char[]), puts(char[]) cannot be used for file operations (read/write from file)
*/
int main()
{
	FILE *rp=fopen("check.txt","r");
	FILE *wp=fopen("output.txt","w");
	if(rp==NULL)
		printf("unsuccessfull file operation!!\n");
	else
	{
		printf("successfull file operation!! file starting address= %p\n",rp);	
		char buff[20];// char *buff; and char *buff[20] throws error
		printf("fgets=%p\n",fgets(buff,14,rp));
		printf("fputs=%d\n",fputs(buff,wp));
		fclose(rp);fclose(wp);
	}
	return 0;
}

/* // other approach2- to directly store a string in a file
fputs("welcome to file handling function",wp);
*/
```

//understand this code and do the modifications to the above code to copy the complete contents of one code and get the output in other by using fgets and fputs

### fseek()
If we open a file in r+( read and write mode ). This read and write pointer is the first parameter for `fseek()`.
The second parameter is a long offset (displacement).
Another parameter is  a`int` where (pointer position)
1) SEEK_SET = 0    ---> The file pointer gets placed at the beginning of the file.
2) SEEK_CUR = 1   ---> Gives the current Position
3) SEEK_END = 2   ---> Points to the end of the file

Displacement: +ve or -ve number of bytes to skip forward or backward
	on success:returns 0
	on failure:returns non-zero value
### ftell()  : `[File *Pointer]`

Success : 0 or positive integer (ie the count of character pointer position of the pointer)
Failure : -1 on error
### rewind()

It has only one parameter (ie the file pointer). It rewinds the pointer to the beginning of the file.
The users can chose the mode of the operation when the pointer rewinds to the beginning of the file. Hence this is one of the advantages of using the rewind() function over the fseek() operation.

It has No return value

```c
#include<stdio.h>
/* fseek( FILE* pointer, long offset (displacement, int whence (pointer position)
	pointer position: SEEK_SET   0   beginning of the file
			  SEEK_CUR   1   current position in the file
 			  SEEK_END   2   end of the file
	displacement: +ve or -ve number of bytes to skip forward or backward
	on success:returns 0
	on failure:returns non-zero value
   ftell(FILE *pointer)
	success:0 or positive integer  (i.e count of character position the pointer is away from the beginning of the file)
	failure: -1 on error
   rewind(FILE *pointer): rewinds the pointer to the beginning of the file
	no-return value.
*/
int main()
{
	FILE *rwp=fopen("check.txt","r+");
	if(rwp==NULL)
		printf("unsuccessfull!!\n");
	else
	{
		printf("success!!\n");
		char ch;
		ch=getc(rwp);
		ch=getc(rwp);
		ch=getc(rwp);
		printf("fseek=%d\n",fseek(rwp,5,SEEK_SET));
		printf("ftell=%d\n",ftell(rwp));
		ch=getc(rwp);printf("%c\n",ch);
		rewind(rwp);//don't use printf for this, gives error saying invalid use for void expression
		printf("ftell=%d",ftell(rwp));
	}
	return 0;
}
```

Since we used getc three times , the file pointer moves 3 characters in the file. Then the pointer points to the start of the file after we use the `SEEK_SET() `function. Then we use `fseek()` to displace by 5 positions. `fseek` = 0  and` ftell()` = 5.
We can 
If we give -ve integers , `fseek() `= -1 (error) and `ftell()` = points to the end of the file.
The` SEEK_END` can be variable as the `/0 `is filled in the file after the contents of the file is completed. So this causes random choosing of the index.

//explore about the rewind for read mode or r+ mode and add the basic theory for extra information. Don't open in w+ mode , But we can use a+ mode for this.

```
Create a file called data.txt. Inside this give all the integers like 23,12,15..
Read the contents in the data.txt and perform linear search and binary search.
Check whether the key element is found in the data.txt or not.
```
Answer:
```c

```

# Error Handling 

### Error Number 
``Errno``
1) Global Variable
2) Available in `<errno.h>`

Example:
```c
FILE *rp = fopen("check.txt","r");
fputs("cprogram",rp);
printf("error = %d",errno);
printf("error message = %s",strerror(errno));
```

## Strerror()

Available in `<string.h>` 
Its inputs parameter is a error number (`errno)`

## Perror

This dosent take any input
Here when we use` perror` and `strerror` then` perror` gives the same error sentence along with the user defined message.

There are 42 Error Messages in `<errno.h>`

## feof()

File end of error.
Tells if the pointer is pointing to the end of the file.

## strtok( str , delimeter)

str = array of characters(strings)
Has return type of character pointer.

```c
char *tok strtok(str," , ");
FIRST CALL

char *tok = strtok(NULL , " , " );
2nd Call 
```