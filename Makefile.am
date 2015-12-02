## Makefile.am -- Process this file with automake to produce Makefile.in
bin_PROGRAMS = markovsky-irc markovsky-linein
markovsky_irc_SOURCES = markovsky.cpp markovutil.cpp markovsky-irc.cpp markovsky.h markovutil.h markovsky-irc.h botnet/botnet.c botnet/dcc_chat.c botnet/dcc_send.c botnet/output.c botnet/server.c botnet/utils.c botnet/botnet.h botnet/includes.h
markovsky_irc_LDFLAGS = @LDFLAGS@ -lpthread

markovsky_linein_SOURCES = markovsky.cpp markovutil.cpp markovsky-linein.cpp
markovsky_linein_LDFLAGS = @LDFLAGS@ -lpthread
