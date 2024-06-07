#ifndef POINTER_H
#define POINTER_H

#include "object.h"

struct pointer {
	struct object object;
	char *version;
	char *oid;
	unsigned int size;
};
