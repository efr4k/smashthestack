# Step one
We need 2 arguments (argc==3) and argv[2] cannot be zero.

# Step two
We need to generate a SIGFPE.
Most obvious way is to divide by zero, but we can't do this due to
restriction in step one.

signal man page also notes that some systems will cast SIGPFE when the
most negative number (-MAX_INT) is divided by -1

-1 * (2^31) / -1 => SIGPFE

# Answer
./level02 -2147483648 -1
