# Specify the "application name" and application version
AC_INIT(hello, version-0.1)

# Since autoconf will pass trough anything that it doesn't recognize
# into the final script ('configure'), we can use any valid shell
# statements here. Note that you should restrict your shell to
# standard features that are available in all UNIX shells, but in our
# case, we're content with the most used shell on Linux systems
# (bash).
echo -e "\n\nHello from configure (using echo)!\n\n"

# We can use a macro for this messages. This is much preferred as it
# is more portable.
AC_MSG_NOTICE([Hello from configure using msg-notice!])

# Check that the C Compiler works.
AC_PROG_CC
# Check what is the AWK-program on our system (and that one exists).
AC_PROG_AWK
# Check whether the 'cos' function can be found in library 'm'
# (standard C math library).
AC_CHECK_LIB(m, cos)
# Check for presence of system header 'unistd.h'.
# This will also test a lot of other system include files (it is
# semi-intelligent in determining which ones are required).
AC_CHECK_HEADER(unistd.h)
# You can also check for multiple system headers at the same time,
# but notice the different name of the test macro for this (plural).
AC_CHECK_HEADERS([math.h stdio.h])
# A way to implement conditional logic based on header file presence
# (we don't have a b0rk.h in our system).
AC_CHECK_HEADER(b0rk.h, [echo "b0rk.h present in system"], \
                        [echo "b0rk.h not present in system"])

echo "But that doesn't stop us from continuing!"

echo "Directory to install binaries in is '$bindir'"
echo "Directory under which data files go is '$datadir'"
echo "For more variables, check 'config.log' after running configure"
echo "CFLAGS is '$CFLAGS'"
echo "LDFLAGS is '$LDFLAGS'"
echo "LIBS is '$LIBS'"
echo "CC is '$CC'"
echo "AWK is '$AWK'"
