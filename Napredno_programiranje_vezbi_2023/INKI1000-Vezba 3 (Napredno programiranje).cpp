/* localtime example */
#include <stdio.h>      /* puts, printf */
#include <time.h>       /* time_t, struct tm, time, localtime */

int main ()
{
  time_t rawtime;
  struct tm * timeinfo;

  time (&rawtime);
  timeinfo = localtime (&rawtime);
  printf ("Current local time and date: %s", asctime(timeinfo));

  return 0;
}
//Овој код ја користи функцијата localtime за да ја добие локалната временска зона и да го прикаже моменталното локално времет со користење на asctime функцијата. 
//Оваа функција е дел од стандардната библиотека на C јазикот и е корисна за прикажување на временски информации во програмите.