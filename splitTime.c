// Name: Ayush Budhwani

#include<stdio.h>

void split_time(long , int *, int *, int *);
int main(){
int n,hr,min,sec;
int *hour, *minute, *second;
printf("Enter seconds:");
scanf("%d",&n);
split_time(n,&hr,&min,&sec);
printf("Converted format: %d hour %d mins %d secs\n", hr, min, sec);
return 0;
}
void split_time(long total_sec, int *hr, int *min, int *sec){ 

int sub;
*hr = total_sec/3600;
*min = total_sec/60;

if(*min>=60){
 sub = *min -60;
  while(sub > 60){
    sub = sub - 60;
  }
  *min = sub;
}
*sec = total_sec - (*hr * 3600 + *min * 60);
}
