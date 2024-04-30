Variables used in program die at the end of the program execution. There may be instances where there is a need to display large data on the console. As the CPU memory is volatile its hard to recover the generated data again and again.
So hence we can use files to persist or store data even after the program execution is completed.
A file represents a sequence of bytes File handling enables us to create , update , read and delete the files stored on the local file system.

### Need of Files
1) When a program is terminated, the entire data is lost. Storing in a file helps us to access the data generated even after the program is terminated.
2) Usage of files address the issues of storing data in bulk.

### Classification of Files
1) Stream Oriented (High level) data files
2) System Oriented (Low Level) data files

High level data files are of 2 types 
1) Text - Formatted(fscanf and fprintf ) and Unformatted( fgetc , fputc , fgets , fputs)
2) Binary - formatted and unformatted(fread and fwrite)

Stream Oriented data files are of 2 types : 
In the first category the data file comprises consecutive characters .