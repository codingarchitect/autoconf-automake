# Automake rule primer:
# 1) Left side_ tells what kind of target this will be.
# 2) _right side tells what kind of dependencies are listed.
#
# As an example, below:
# 1) bin = binaries
# 2) PROGRAMS lists the programs to generate Makefile.ins for.
bin_PROGRAMS = helloapp
# Listing source dependencies:
#
# The left side_ gives the name of the application to which the
# dependencies are related to.
# _right side gives again the type of dependencies.
#
# Here we then list the source files that are necessary to build the
# helloapp -binary.
helloapp_SOURCES = helloapp.c hello.c hello.h
# For other files that cannot be automatically deduced by automake,
# you need to use the EXTRA_DIST rule which should list the files
# that should be included. Files can also be in other directories or
# even whole directories can be included this way (not recommended).
#
# EXTRA_DIST = some.service.file.service some.desktop.file.desktop
