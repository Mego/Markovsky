#include <time.h>
#include <locale.h>

#include "markovsky.h"
#include "markovutil.h"

markovsky_t gMarkovsky;

void PrintReply(string text) {
  printf ("<Markovsky> %s\n", text.c_str());
}


int main (int argc, char* argv[]) {
  setlocale(LC_ALL, "");
  printf ("Markovsky v" MARKOVSKYVERSIONSTRING "\n\n");
  string body;
  srand(time(NULL));

  printf ("Loading dictionary...\n");
  gMarkovsky.LoadSettings();

#ifndef PROFILE
  printf ("\nMarkovsky offline chat, learning disabled. Press CTRL-C to quit.\n\n");

  while (1) {
	printf ("> ");
	fReadStringLine(stdin, body);
	if (body == "!quit") {
	  break;
	  //string trigreply = gMarkovsky.ParseCommands(body);
	  //if (trigreply != "") PrintReply (trigreply);
	  //continue;
	}
	
	string markovout = gMarkovsky.Reply(body);
	PrintReply (markovout);
  }
#endif

  gMarkovsky.SaveSettings();
  return 0;
}
