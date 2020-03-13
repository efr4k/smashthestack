# Step one
Gain control over whoami

$ touch /path/whoami
$ export PATH=/path/whoami:$PATH

# Step two
Print password in controlled whoami-file

Generally, Linux removes setuid from scripts run with shebangs, so a
'#!/bin/bash' script will not work. So initially the idea would be to
compile a program that prints the file instead to keep suid on the proc.

But even better is the choice to use '#!/usr/bin/perl -wT'. Perl will
still run suid.

# Answer
See custom whoami file
