#include <stdio.h>
#include <string.h>

    //------------------------
    // Name: Betsy De La Cruz
    // Class: CSC 2400
    // Semester: Fall 2017
    //------------------------

    /* Constant sizes for declaring arrays */
#define SIZE 10
#define MAXSIZE 32

    ////////////// Part 1 //////////////

    float average(int a[], int len)
    {
      // Add code here to calculate an average of all
      // values in the array and return that average.
      double sum=0;
      int i;
      for(i=0;i<len;++i)
      {
        sum+=a[i];
      }
        
      return sum/len;
    }

    void print_array(int a[], int len)
    {
      printf("Values: ");
      // Add code here to print out all values in array
      int i;
      for(i=0;i<len;i++)
      {
        printf(" %d",a[i]);
       
        }
      printf("\n");
    }

    ////////////// Part 2 //////////////

    void reverse(int a[], int len)
    {
      // Add code here to reverse elements in the array
      
      int i,j,temp;
      for(i=0,j=len-1;i<j;i++,j--){
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
      }
    }

    ////////////// Part 3 //////////////

    int length(char str[])
    {
      // Add code here to return the length of the
      // string str without using the strlen function
      // Do not count the null character '\0'
      // in computing the length of the string
      int len=0;
      int i;
      for(i=0;i<str[i] !='\0';i++){
        len++;
      }
      return len;
    }

    void print_string(char str[])
    {
      // Add code here to print the string str
      // character by character (using "%c", NOT "%s")
      int i;
      for(i=0;str[i]!='\0';i++)
        printf("%c",str[i]);
    }
    ////////////// Part 4 //////////////

    int compare(char s1[], char s2[])
    {
      // Add code here to compare strings s1 and s2,
      // and return 0 if they are the same, a negative
      // value if s1 < s2 or a positive value if s1 > s2.
      // The non-zero value is the difference between
      // the first pair of non-matching characters.
      // Do this without using the strcmp function.
        int i=0;
       int diff=0;
       while(s1[i]!='\0' || s2[i]!= '\0')
       {
       diff=(s1[i]-s2[i]);
       if(diff!=0)
         break;
        i++;
        }
        return diff;
    }
    ////////////// Part 5 //////////////

    void copy(char dest[], char src[])
    {
      // Add code here to copy string src to the string
      // dest, without using the strcpy function.
      int i=0;
      while (src[i]!= '\0'){
        dest[i]=src[i];
        i++;
      }
  
    }

    ////////////// Part 6 //////////////

    void concat(char dest[], char src[])
    {
      // Add code here to concatenate string src to the
      // end of string dest, without using the strcpy
      // or the strcat functions.
    int len=length(dest);
    int j=0;
    for(j; j<src[j] !='\0'; j++)
    {
      dest[len+j] = src[j];
    }
       dest[len+j] = '\0';

    }

    //========== You should NOT have to change anything below here ======

    ////////////// Main //////////////
    void init_array(int a[], int len);

    int main()
    {
      // Variable declarations for all parts
      int values[SIZE];
      float avg;
      char str1[] = "How long is this test string";
      char str2[] = "Troy";
      char str3[] = "Alice";
      char str4[MAXSIZE] = "";
      char str5[] = "Plain old string";
      char str6[MAXSIZE];

      // Part 1
      printf("\n----- Part 1 -----\n");
      // - initialize array
      init_array(values, SIZE);

      // - calculate the average
      avg = average(values, SIZE);

      // - print result
      print_array(values, SIZE);
      printf("Average: %f\n", avg);

      // Part 2
      printf("\n----- Part 2 -----\n");
      printf("Before reverse:\n");
      print_array(values, SIZE);
      reverse(values, SIZE);
      printf("After reverse:\n");
      print_array(values, SIZE);

      // Part 3
      printf("\n----- Part 3 -----\n");
      printf("String is: \"");
      print_string(str1);
      printf("\"\n");
      printf("length says: %d\n", length(str1));
      printf("strlen says: %d\n", (int)strlen(str1));

      // Part 4
      printf("\n----- Part 4 -----\n");
      printf("compare(\"%s\", \"%s\") says: %d\n", str2, str3, compare(str2, str3));
      printf("strcmp(\"%s\", \"%s\") says: %d\n", str2, str3, strcmp(str2, str3));
      printf("\n");
      printf("compare(\"Troy\", \"Troy2\") says: %d\n", compare("Troy", "Troy2"));
      printf("strcmp(\"Troy\", \"Troy2\") says: %d\n", strcmp("Troy", "Troy2"));

      // Part 5
      printf("\n----- Part 5 -----\n");
      copy(str4, str5);
      strcpy(str6, str5);
      printf("Comparing results of copy and strcpy ...\n");
      printf("strcmp(\"%s\", \"%s\") says: %d\n", str4, str6, strcmp(str4, str6));

      // Part 6
      printf("\n----- Part 6 -----\n");
      // Make a copy of the destination string first, to be reused later
      strcpy(str6, str4);
      concat(str4, str2);
      strcat(str6, str2);
      printf("Comparing results of concat and strcat ...\n");
      printf("strcmp(\"%s\", \"%s\") says: %d\n", str4, str6, strcmp(str4, str6));

      return 0;
    }

    /* initialize array a of length len with integer values */
void init_array(int a[], int len)
{
  int i;
  for(i=0; i< len; i++)
  {
    a[i] = i+1;
  }

}
