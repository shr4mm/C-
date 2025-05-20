#include <iostream>
using namespace std;

bool isLeap(int year) {
if((year%4==0 && year % 100 != 0) || year % 400 == 0) {
    return true;
}
else{
    return false;
}
}
int monthLength(int year, int month) {
int daysInMonth[] = {28,29,30,31};
if(month==2 ){
    if(isLeap(year)){
    return daysInMonth[1];
    }
    else{
    return daysInMonth[0];
    }
    
}
if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12){
    return daysInMonth[3];
}else{
   return daysInMonth[2];
}
}
int main(void) {
for(int yr = 2000; yr<2002; yr++) {
for(int mo = 1; mo <= 12; mo++)
cout << monthLength(yr,mo)<< " ";
cout<< endl;
}
return 0;
}