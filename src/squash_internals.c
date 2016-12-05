/*
 * Copyright (c) 2016 Libsquash contributers
 *
 * This file is part of libsquash, distributed under the MIT License
 * For full terms see the included LICENSE file
 */

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

#include "squash.h"
#include "squash_internals.h"

squash_disk_t *squash_only_support(const char *feature)
{
	fprintf(stderr, "Libsquash only supports %s for the moment.\n",
		feature);
	fprintf(stderr,
		"Pull requests are welcome on GitHub at https://github.com/pmq20/libsquash.\n");
	exit(120);
}

squash_disk_t *squash_not_support(const char *feature)
{
	fprintf(stderr, "Libsquash does not support %s for the moment.\n",
		feature);
	fprintf(stderr,
		"Pull requests are welcome on GitHub at https://github.com/pmq20/libsquash.\n");
	exit(120);
}
