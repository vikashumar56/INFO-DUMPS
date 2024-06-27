#include<stdio.h>
#include<string.h>
int main(){
  char str1[20],str2[20];
  int l1,l2,n,i;
  printf("Enter the string 1 \t");
  gets(str1);
  l1=strlen(str1);
  printf("Enter the string 2 \t");
  gets(str2);
  l2=strlen(str2);
  printf("Enter the position where you want to insert the string \t");
  scanf("%d",&n);
  for(i=n;i<l1;i++){
    str1[i+l2]=str1[i];
  }
  for(i=0;i<l2;i++){
     str1[n+i]=str2[i];
  }
   str2[l2+1]='\0';
   printf("the newly formed string is %s",str1);
   return 0;
}
