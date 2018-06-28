
# An example showing how to use a variable-based substitution.

AC_INIT(hello, version-0.1)

AC_PROG_CC
AC_PROG_AWK
AC_CHECK_HEADER(unistd.h)
AC_CHECK_HEADERS([math.h stdio.h])
AC_CHECK_HEADER(b0rk.h, [echo "b0rk.h present in system"], \
                        [echo "b0rk.h not present in system"])

echo "But that doesn't stop us from continuing!"

# Run the test-output.txt(.in) through autoconf substitution logic.
AC_OUTPUT(test-output.txt)
