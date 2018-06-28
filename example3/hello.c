/**
 * This maemo code example is licensed under a MIT-style license,
 * that can be found in the file called "License" in the same
 * directory as this file.
 * Copyright (c) 2007-2008 Nokia Corporation. All rights reserved.
 */

#include <stdio.h>
#include "hello.h"

void printHello(void) {
  /* Note that these are available as defines now. */
  printf("(" PACKAGE " " VERSION ")\n");
  printf("Hello world!\n");
}
